/*modded class Hologram // DMP_Furniture_Base
{
	vector m_GunwallAccessNormal;
	bool m_GunwallHasWall;
	
	bool m_HasFloorCache;
	vector m_FloorCheckPos;
	
	override void UpdateHologram(float timeslice)
	{
		super.UpdateHologram(timeslice);

		ItemBase container = m_Parent;
		if(container && DMP_Furniture_Base.Cast(m_Projection))
		{
			vector containerPos = GetProjectionEntityPosition(m_Player)	+ container.Get_ItemPlacingPos();
			vector containerOri = AlignProjectionOnTerrain(timeslice) + container.Get_ItemPlacingOrientation();
			if (m_Projection.IsInherited(dmp_gunwall_az_Base) || m_Projection.IsInherited(dmp_gunwall_az_small_Base))
			{
				containerOri = AlignToWall(containerOri, containerPos);
			}
			SetProjectionPosition(containerPos);
			SetProjectionOrientation(containerOri);
			m_Projection.OnHologramBeingPlaced(m_Player);
			return;
		}
	}

	void GetSizeBBox(vector min_max[2])
	{
		if (m_Projection.MemoryPointExists("box_placing_min"))
		{
			min_max[0] = m_Projection.GetMemoryPointPos( "box_placing_min" );
			min_max[1] = m_Projection.GetMemoryPointPos( "box_placing_max" );
		}
	}
	
	vector AlignToWall(vector ori, vector pos)
	{
		vector angle = ori;
		// float wall_offset = 0.2;
		m_GunwallHasWall = false;

		PhxInteractionLayers collisionLayerMask = PhxInteractionLayers.BUILDING|PhxInteractionLayers.DOOR|PhxInteractionLayers.ROADWAY|PhxInteractionLayers.TERRAIN|PhxInteractionLayers.ITEM_LARGE|PhxInteractionLayers.FENCE;
		int hitComponentIndex;
		float hitFraction;
		vector start, end, hitNormal, hitPosObstructed;
		Object hitObject = null;
		PlayerBase player = PlayerBase.Cast(m_Player);

		start = GetGame().GetCurrentCameraPosition();
		float camera_to_player_distance = vector.Distance( GetGame().GetCurrentCameraPosition(), GetProjectionPosition() );
		end = start + ( GetGame().GetCurrentCameraDirection() * (camera_to_player_distance + 0.4));
		
		DayZPhysics.RayCastBullet( start, end, collisionLayerMask, m_Projection, hitObject, hitPosObstructed, hitNormal, hitFraction);
		
		if (hitNormal[1] > -0.001 && hitNormal[1] < 0.01 && hitNormal != vector.Zero)
		{
			hitNormal.Normalize();

			//  ЗБЕРІГАЄМО НАПРЯМОК ДОСТУПУ
			m_GunwallAccessNormal = hitNormal * -1;
			m_GunwallHasWall = true;

			angle = m_GunwallAccessNormal.VectorToAngles() + m_Parent.Get_ItemPlacingOrientation();
		}
		else
		{
			angle = BlockRotateToPlayer();
		}

		return angle;
	}
	bool IsBuldingCollide (string chek_type = "BaseType", float m_cor_dist = 0, float m_radius = 0, vector m_addsize = "0 0 0", string m_ignore_exp = "")
	{
		// Setup
		House m_house;
		bool is_true = false;
		bool s_chek = false; // Note: Резерв
		float correct_dist = 0.8;
		float max_projection_dist;
		float camera_to_player_distance;
		float radius = 0;
		int s_color = 0x01FFFFFF;

		vector contact_pos, from, s_addboxsize;
		vector minMax[2];

		///////////////////////////////
		if (m_Player && !m_Player.IsPlacingServer())
		{
			if (m_cor_dist != 0)
			{
				correct_dist = m_cor_dist;
			}
			if (m_addsize)
			{
				s_addboxsize = m_addsize;
			}
			// Setup 2
			m_ContactDir = vector.Zero;
			set<Object> hit_object = new set<Object>;
			set<Object> ignore_items = new set<Object>;
			from = GetGame().GetCurrentCameraPosition();
			GetProjectionCollisionBox(minMax);
			if ( DayZPlayerCamera3rdPerson.Cast(m_Player.GetCurrentCamera()) )
			{
				vector head_pos;
				MiscGameplayFunctions.GetHeadBonePos(m_Player,head_pos);
				float dist = vector.Distance(head_pos,from);
				from = from + GetGame().GetCurrentCameraDirection() * dist;
			}

			camera_to_player_distance = vector.Distance( GetGame().GetCurrentCameraPosition(), m_Player.GetPosition() );
			max_projection_dist = camera_to_player_distance + correct_dist;
			vector to = from + ( GetGame().GetCurrentCameraDirection() * max_projection_dist  );
			
			// -----------------------------
			// Func
			DayZPhysics.RaycastRV(from, to, contact_pos, m_ContactDir, m_ContactComponent, hit_object, m_Player, m_Projection, false, false, ObjIntersectFire, radius);
			////////////////////////////////////
			
			if (hit_object.Count() > 0)
			{
				switch (chek_type) 
				{
					case "Window":
					{
						for ( int b = 0; b < hit_object.Count(); b++ )
						{
							if (hit_object[b].IsInherited(House))
							{
								is_true = true;
							}
						}
						break;
					}
				}
			}	
		}
		
		return is_true;
	}
	
	vector BlockRotateToPlayer()
	{
		vector cam_ori = GetGame().GetCurrentCameraDirection().VectorToAngles() ;
		cam_ori[1] = 0;
		cam_ori = cam_ori + m_Parent.Get_ItemPlacingOrientation();

		return cam_ori;
	}

	override string GetProjectionName(ItemBase item)
	{
		DMP_Base_Kit kit = DMP_Base_Kit.Cast(item);
		if (kit)
			return kit.Get_ItemName();

		return super.GetProjectionName(item);
	}
	
	override void EvaluateCollision(ItemBase action_item = null)
	{			
		ItemBase item_in_hands = m_Parent;

		if ( item_in_hands.IsInherited(DMP_Furniture_Base) && !m_Parent.IsInherited(dmp_gunwall_az_Base) && !m_Parent.IsInherited(dmp_gunwall_az_small_Base))
		{
			if(item_in_hands.EnableCollisionsFurThis())
			{
				super.EvaluateCollision();
			}
			else
			{
				SetIsColliding(false);
				return;
			}
		}

		if (item_in_hands.IsInherited(dmp_gunwall_az_Base) || item_in_hands.IsInherited(dmp_gunwall_az_small_Base))
		{
			if (!m_Player.IsPlacingServer() && (!IsBuldingCollide("Window", 0.8) ))
			{
				SetIsColliding(true);
				// SetIsColliding(!m_GunwallHasWall);
				return;
			}
			else
			{
				SetIsColliding(false);
				return;
			}
			
		}
		
		super.EvaluateCollision();
	}	
	override bool IsFloating()
	{
		if (m_Projection && (m_Projection.IsInherited(dmp_gunwall_az_Base) || m_Projection.IsInherited(dmp_gunwall_az_small_Base)))
		{
			bool hasFloor = false;

			// Перевіряємо підлогу/грунт
			vector from = m_Projection.GetPosition();
			vector to = from + "0 -0.5 0"; // перевірка 50 см вниз
			vector contactPos, contactDir;
			int contactComponent;
			set<Object> hitObjects = new set<Object>;

			if (DayZPhysics.RaycastRV(from, to, contactPos, contactDir, contactComponent, hitObjects, null, m_Projection, false, false))
			{
				hasFloor = true;
			}

			// floating = тільки якщо немає ні стіни, ні підлоги
			return !m_GunwallHasWall && !hasFloor;
		}

		return super.IsFloating();
	}


	
	override bool IsCollidingBBox(ItemBase action_item = null)
	{
		vector center;
		vector relativeOffset; //we need to lift BBox, because it is calculated from the bottom of projection, and not from the middle
		vector absoluteOffset = "0 0.05 0"; //we need to lift BBox even more, because it colliddes with house floors due to various reasons (probably geometry or float imperfections)
		vector orientation = GetProjectionOrientation();
		vector edgeLength;
		vector minMax[2];
		array<Object> excludedObjects = new array<Object>();
		array<Object> collidedObjects = new array<Object>();
		
		GetProjectionCollisionBox(minMax);
		relativeOffset[1] = (minMax[1][1] - minMax[0][1]) * 0.5;
		center = m_Projection.GetPosition() + relativeOffset + absoluteOffset;
		edgeLength = GetCollisionBoxSize(minMax);
		excludedObjects.Insert(m_Projection);
		excludedObjects.Insert(m_Player);
		if (m_Projection && (m_Projection.IsInherited(dmp_gunwall_az_Base) || m_Projection.IsInherited(dmp_gunwall_az_small_Base)))
			return false;

		if (action_item)
			excludedObjects.Insert(action_item);

		//add is construction check
		// Base building objects behave in a way that causes this test to generate false positives
		bool isTrue = GetGame().IsBoxCollidingGeometry(center, orientation, edgeLength, ObjIntersectFire, ObjIntersectGeom, excludedObjects, collidedObjects);		
		#ifdef DIAG_DEVELOPER	
		if ( DiagMenu.GetBool(DiagMenuIDs.MISC_HOLOGRAM) )
		{
			string text = "";
			foreach (Object object: collidedObjects)
				text += " | " + Object.GetDebugName(object);

			DebugText("IsCollidingBBox: ", false, isTrue, text);
		
			int color = 0x01FFFFFF;
			if (isTrue)
				color = 0x33F22613;
			
			DrawDebugCollisionBox(minMax, color);
		}
		#endif

		return isTrue;
	}
		override bool IsBaseViable()
	{	
		if (m_Projection && (m_Projection.IsInherited(dmp_gunwall_az_Base) ||  m_Projection.IsInherited(dmp_gunwall_az_small_Base)))		
		{
			return true;
			// return m_GunwallHasWall; // ← КЛЮЧ
		}

		//This function is not required to solve server-side fixes for clipping, saves calculations and potential false negatives
		if (GetGame().IsServer() && GetGame().IsMultiplayer())
			return true;
				
		vector from_left_close = m_Projection.CoordToParent(GetLeftCloseProjectionVector()) + PLACEMENT_RC_START_OFFSET;
		vector to_left_close_down = from_left_close + PLACEMENT_RC_END_OFFSET;

		vector from_right_close = m_Projection.CoordToParent(GetRightCloseProjectionVector()) + PLACEMENT_RC_START_OFFSET;
		vector to_right_close_down = from_right_close + PLACEMENT_RC_END_OFFSET;

		vector from_left_far = m_Projection.CoordToParent(GetLeftFarProjectionVector() + PLACEMENT_RC_START_OFFSET);
		vector to_left_far_down = from_left_far + PLACEMENT_RC_END_OFFSET;

		vector from_right_far = m_Projection.CoordToParent(GetRightFarProjectionVector()) + PLACEMENT_RC_START_OFFSET;
		vector to_right_far_down = from_right_far + PLACEMENT_RC_END_OFFSET;
		
		vector contact_pos_left_close;
		vector contact_pos_right_close;
		vector contact_pos_left_far;
		vector contact_pos_right_far;
		vector contact_dir_left_close;
		vector contact_dir_right_close;
		vector contact_dir_left_far;
		vector contact_dir_right_far;
		int contact_component_left_close;
		int contact_component_right_close;
		int contact_component_left_far;
		int contact_component_right_far;
		set<Object> results_left_close = new set<Object>;
		set<Object> results_right_close = new set<Object>;
		set<Object> results_left_far = new set<Object>;
		set<Object> results_right_far = new set<Object>;
		Object obj_left_close;
		Object obj_right_close;
		Object obj_left_far;
		Object obj_right_far;
						
		//Not sure what the intention here was before, but it boiled down to a very bloated version of what you see here right now
		DayZPhysics.RaycastRV(from_left_close, to_left_close_down, contact_pos_left_close, contact_dir_left_close, contact_component_left_close, results_left_close, null, m_Projection, false, false, ObjIntersectFire);
		if (results_left_close.Count() > 0)
			obj_left_close = results_left_close[results_left_close.Count() - 1];

		DayZPhysics.RaycastRV(from_right_close, to_right_close_down, contact_pos_right_close, contact_dir_right_close, contact_component_right_close, results_right_close, null, m_Projection, false, false, ObjIntersectFire);
		if (results_right_close.Count() > 0)	
			obj_right_close = results_right_close[results_right_close.Count() - 1];

		DayZPhysics.RaycastRV(from_left_far, to_left_far_down, contact_pos_left_far, contact_dir_left_far, contact_component_left_far, results_left_far, null, m_Projection, false, false, ObjIntersectFire);
		if (results_left_far.Count() > 0) 
			obj_left_far = results_left_far[results_left_far.Count() - 1];

		DayZPhysics.RaycastRV(from_right_far, to_right_far_down, contact_pos_right_far, contact_dir_right_far, contact_component_right_far, results_right_far, null, m_Projection, false, false, ObjIntersectFire);
		if (results_right_far.Count() > 0)
			obj_right_far = results_right_far[results_right_far.Count() - 1];
		
		return IsBaseIntact(obj_left_close, obj_right_close, obj_left_far, obj_right_far ) && IsBaseStatic( obj_left_close ) && IsBaseFlat( contact_pos_left_close, contact_pos_right_close, contact_pos_left_far, contact_pos_right_far);
	}
	
	override void RefreshVisual()
	{
		// if ( m_Projection && DMP_OpenableFurniture.Cast(m_Projection) || DMP_UnOpenableFurniture.Cast(m_Projection) )
		if ( m_Projection && (DMP_OpenableFurniture.Cast(m_Projection) || DMP_UnOpenableFurniture.Cast(m_Projection)) || dmp_stove_Base.Cast(m_Projection) )
		{
			string config_material = "CfgVehicles" + " " + m_Projection.GetType() + " " + "hologramMaterial";
			string hologram_material = GetGame().ConfigGetTextOut( config_material );
			string config_model = "CfgVehicles" + " " + m_Projection.GetType() + " " + "hologramMaterialPath";
			string hologram_material_path = GetGame().ConfigGetTextOut( config_model ) + "\\" + hologram_material;
			string selection_to_refresh;
			int hidden_selection = 0;
			static const string textureName = "#(argb,8,8,3)color(1.0,0.925,0.11,1.0,ca)";
			
			string config_path = "CfgVehicles" + " " + m_Projection.GetType() + " " + "hiddenSelections";
			array<string> hidden_selection_array = new array<string>;

			GetGame().ConfigGetTextArray( config_path, hidden_selection_array );	
			hologram_material_path += CorrectMaterialPathName();
				
			for (int i = 0; i < hidden_selection_array.Count(); ++i)
			{
				selection_to_refresh = hidden_selection_array.Get(i);
				hidden_selection = GetHiddenSelection( selection_to_refresh );
				m_Projection.SetObjectTexture( hidden_selection, CorrectColors() );//textureName
				m_Projection.SetObjectMaterial( hidden_selection, hologram_material_path );
			}
		}
		else
		{
			super.RefreshVisual();
		}
		
	}
	
	string CorrectColors()
	{
		ItemBase item = m_Player.GetItemInHands();
		if (IsColliding() || !item.CanBePlaced(m_Player, GetProjectionPosition()))
		{
			return 	"#(argb,8,8,3)color(1.0,0.3,0.1,0.5,ca)";
		}
		return "#(argb,8,8,3)color(1.0,0.925,0.11,1.0,ca)";
		
	};
};*/
modded class Hologram // DMP_Furniture_Base
{
    // Твої змінні для gunwall
    protected vector m_GunwallAccessNormal;
    protected bool m_GunwallHasWall = false;
    protected float m_LastGunwallRaycastTime = 0;
    protected const float GUNWALL_RAYCAST_INTERVAL = 0.25; // 250 мс — оптимально, можна 0.3–0.4 якщо треба ще легше

    // Кеш для інших важких перевірок (якщо використовуєш IsFloating тощо)
    protected bool m_CachedFloating = false;
    protected float m_LastFloatingCheck = 0;

    override protected float GetProjectionRadius()
    {
        if (m_Projection && DMP_Furniture_Base.Cast(m_Projection))
        {
            vector min_max[2];
            GetProjectionCollisionBox(min_max);
            vector diagonal = GetCollisionBoxSize(min_max);
            float radius = diagonal.Length() * 0.7;
            return Math.Max(radius, 1.0);
        }
        return super.GetProjectionRadius();
    }

    override void RefreshVisual()
	{
		if (m_Projection && DMP_Furniture_Base.Cast(m_Projection))
		{
			string color;
			if (IsColliding())  // ← тут викликаємо метод IsColliding()
			{
				color = "#(argb,8,8,3)color(1.0,0.3,0.1,0.5,ca)";  // червоний (недопустимо)
			}
			else
			{
				color = "#(argb,8,8,3)color(1.0,0.925,0.11,1.0,ca)"; // жовтий/зелений (дозволено)
			}

			array<string> hiddenSelections = new array<string>;
			string config_path = "CfgVehicles " + m_Projection.GetType() + " hiddenSelections";
			GetGame().ConfigGetTextArray(config_path, hiddenSelections);

			for (int i = 0; i < hiddenSelections.Count(); ++i)
			{
				int sel = GetHiddenSelection(hiddenSelections[i]);
				m_Projection.SetObjectTexture(sel, color);
			}
			return;
		}
		super.RefreshVisual();
	}

    override string GetProjectionName(ItemBase item)
    {
        DMP_Base_Kit kit = DMP_Base_Kit.Cast(item);
        if (kit) return kit.Get_ItemName();
        return super.GetProjectionName(item);
    }

    override bool IsCollidingBBox(ItemBase action_item = null)
    {
        // Для gunwall — пропускаємо бокс-колізію (як ти робив)
        if (m_Projection && (m_Projection.IsInherited(dmp_gunwall_az_Base) || m_Projection.IsInherited(dmp_gunwall_az_small_Base)))
            return false;

        return super.IsCollidingBBox(action_item);
    }

    override bool IsBaseViable()
    {
        // Gunwall — завжди валідний (як у твоїй робочій версії)
        if (m_Projection && (m_Projection.IsInherited(dmp_gunwall_az_Base) || m_Projection.IsInherited(dmp_gunwall_az_small_Base)))
            return true;

        return super.IsBaseViable(); // ванільні 4 raycast тільки для інших
    }

    // Твій AlignToWall — але з кешем
    protected vector AlignToWall(vector ori, vector pos)
    {
        float now = GetGame().GetTime() / 1000.0;
        if (now - m_LastGunwallRaycastTime < GUNWALL_RAYCAST_INTERVAL)
        {
            // Повертаємо кешовану орієнтацію
            if (m_GunwallHasWall)
                return m_GunwallAccessNormal.VectorToAngles() + m_Parent.Get_ItemPlacingOrientation();
            else
                return BlockRotateToPlayer();
        }

        m_LastGunwallRaycastTime = now;

        vector angle = ori;
        m_GunwallHasWall = false;

        PhxInteractionLayers collisionLayerMask = PhxInteractionLayers.BUILDING | PhxInteractionLayers.DOOR | PhxInteractionLayers.ROADWAY | PhxInteractionLayers.TERRAIN | PhxInteractionLayers.ITEM_LARGE | PhxInteractionLayers.FENCE;

        vector start = GetGame().GetCurrentCameraPosition();
        float camera_to_player_distance = vector.Distance(start, GetProjectionPosition());
        vector end = start + (GetGame().GetCurrentCameraDirection() * (camera_to_player_distance + 0.4));

        vector hitNormal, hitPosObstructed;
        float hitFraction;
        Object hitObject = null;
        int hitComponentIndex;

        DayZPhysics.RayCastBullet(start, end, collisionLayerMask, m_Projection, hitObject, hitPosObstructed, hitNormal, hitFraction);

        if (hitNormal[1] > -0.001 && hitNormal[1] < 0.01 && hitNormal != vector.Zero)
        {
            hitNormal.Normalize();
            m_GunwallAccessNormal = hitNormal * -1;
            m_GunwallHasWall = true;
            angle = m_GunwallAccessNormal.VectorToAngles() + m_Parent.Get_ItemPlacingOrientation();
        }
        else
        {
            angle = BlockRotateToPlayer();
        }

        return angle;
    }

    protected vector BlockRotateToPlayer()
    {
        vector cam_ori = GetGame().GetCurrentCameraDirection().VectorToAngles();
        cam_ori[1] = 0;
        cam_ori = cam_ori + m_Parent.Get_ItemPlacingOrientation();
        return cam_ori;
    }

    // Якщо використовуєш IsFloating — теж кешуємо
    override bool IsFloating()
    {
        if (m_Projection && (m_Projection.IsInherited(dmp_gunwall_az_Base) || m_Projection.IsInherited(dmp_gunwall_az_small_Base)))
        {
            float now = GetGame().GetTime() / 1000.0;
            if (now - m_LastFloatingCheck < GUNWALL_RAYCAST_INTERVAL)
                return m_CachedFloating;

            m_LastFloatingCheck = now;

            bool hasFloor = false;
            vector from = m_Projection.GetPosition();
            vector to = from + "0 -0.5 0";
            vector contactPos, contactDir;
            int contactComponent;
            set<Object> hitObjects = new set<Object>;

            if (DayZPhysics.RaycastRV(from, to, contactPos, contactDir, contactComponent, hitObjects, null, m_Projection, false, false))
                hasFloor = true;

            m_CachedFloating = !m_GunwallHasWall && !hasFloor;
            return m_CachedFloating;
        }
        return super.IsFloating();
    }

    // Оновлення hologram — викликаємо snap тільки для gunwall і рідко
    override void UpdateHologram(float timeslice)
    {
        super.UpdateHologram(timeslice);

        ItemBase container = m_Parent;
        if (container && DMP_Furniture_Base.Cast(m_Projection))
        {
            vector containerPos = GetProjectionEntityPosition(m_Player) + container.Get_ItemPlacingPos();
            vector containerOri = AlignProjectionOnTerrain(timeslice) + container.Get_ItemPlacingOrientation();

            // Тільки для gunwall — застосовуємо snap-to-wall з кешем
            if (m_Projection.IsInherited(dmp_gunwall_az_Base) || m_Projection.IsInherited(dmp_gunwall_az_small_Base))
            {
                containerOri = AlignToWall(containerOri, containerPos);
            }

            SetProjectionPosition(containerPos);
            SetProjectionOrientation(containerOri);
            m_Projection.OnHologramBeingPlaced(m_Player);
        }
    }
};