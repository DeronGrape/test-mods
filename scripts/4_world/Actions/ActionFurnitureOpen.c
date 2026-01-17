class ActionFurnitureOpen: ActionInteractBase
{
	void ActionFurnitureOpen()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "#open";
	}

	/*override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, DMP_UAConstants.DMP_DISTANCE_DEFAULT)) return false;
		
		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		array<string> arrDoors = {"doors1","doors2","doors3","doors4","doors5","doors6","iscrate"};
		if (arrDoors.Find(selection) == -1)
		{
			//nen
			return false;
		}
		// if (arrDoors.Find(selection) != -1)
        	// return true;
        	// return false;
		DMP_Furniture_Base dmpfurniture = DMP_Furniture_Base.Cast(target.GetObject());
		if (dmpfurniture)
		{
			// Обработка для других объектов типа DMP_Furniture_Base
			// if (dmpfurniture.IsDmpFacingPlayer(player))
				// return false;
			#ifdef CodeLock
				if (dmpfurniture.IsCodeLocked())
					return false;
			#endif

			if( !dmpfurniture.IsOpen())
			{
				return true;
			};
		}
		return false;
	}*/
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, DMP_UAConstants.DMP_DISTANCE_DEFAULT))
			return false;
		
		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		array<string> arrDoors = {"doors1","doors2","doors3","doors4","doors5","doors6","iscrate"};
		if (dmp_gunrack_Base.Cast(target.GetObject()))
		{
			// пропускаємо перевірку масиву дверей, але все одно перевіряємо стан
			DMP_Furniture_Base nenObj = DMP_Furniture_Base.Cast(target.GetObject());
			if (nenObj)
			{
				#ifdef CodeLock
					if (nenObj.IsCodeLocked())
						return false;
				#endif

				if (!nenObj.IsOpen())
					return true;
			}
			return false;
		}
		if (dmp_stove_Base.Cast(target.GetObject()))
		{
			// пропускаємо перевірку масиву дверей, але все одно перевіряємо стан
			BarrelHoles_ColorBase dmpstove = BarrelHoles_ColorBase.Cast(target.GetObject());
			if (dmpstove)
			{
				if (!dmpstove.IsOpen())
					return true;
			}
			return false;
		}		
		// стандартна перевірка для всіх інших
		if (arrDoors.Find(selection) == -1)
		{
			return false;
		}
		DMP_Furniture_Base dmpfurniture = DMP_Furniture_Base.Cast(target.GetObject());
		if (dmpfurniture)
		{
			#ifdef CodeLock
				if (dmpfurniture.IsCodeLocked())
					return false;
			#endif

			if (!dmpfurniture.IsOpen())
				return true;
		}

		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		DMP_Furniture_Base dmpfurniture = DMP_Furniture_Base.Cast(action_data.m_Target.GetObject());
		if(dmpfurniture)
		{	
			dmpfurniture.Open();
			return;
		}
		BarrelHoles_ColorBase dmpstove = BarrelHoles_ColorBase.Cast(action_data.m_Target.GetObject());
		if(dmpstove)
		{	
			dmpstove.Open();
			return;
		}
	}
};