class ActionFurnitureClose: ActionInteractBase
{
	void ActionFurnitureClose()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.CloseDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "#close";
	}

	/*override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, DMP_UAConstants.DMP_DISTANCE_DEFAULT)) return false;

		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		array<string> arrDoors = {"doors1","doors2","doors3","doors4","doors5","doors6","iscrate"};
		if (arrDoors.Find(selection) == -1)
		{
			return false;
		}
		DMP_Furniture_Base dmpfurniture = DMP_Furniture_Base.Cast(target.GetObject());
		if(dmpfurniture)			
			return dmpfurniture.IsOpen();
			
		return false;
	}*/
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, DMP_UAConstants.DMP_DISTANCE_DEFAULT)) return false;
		DMP_Furniture_Base dmpfurniture = DMP_Furniture_Base.Cast(target.GetObject());
		if(dmpfurniture)			
			return dmpfurniture.IsOpen();
			
		return false;
		BarrelHoles_ColorBase dmpstove = BarrelHoles_ColorBase.Cast(target.GetObject());
		if(dmpstove)			
			return dmpstove.IsOpen();
			
		return false;
		
		/*if (dmp_gunrack_Base.Cast(target.GetObject()))
		{
			// пропускаємо перевірку масиву дверей, але все одно перевіряємо стан
			DMP_Furniture_Base nenObj = DMP_Furniture_Base.Cast(target.GetObject());
			if (nenObj)
			{
				return nenObj.IsOpen();
			}
			return false;
		}
		if (dmp_gunrack_Base.Cast(target.GetObject()))
		{
			// пропускаємо перевірку масиву дверей, але все одно перевіряємо стан
			DMP_Furniture_Base nenObj = DMP_Furniture_Base.Cast(target.GetObject());
			if (nenObj)
			{
				return nenObj.IsOpen();
			}
			return false;
		}
		
		if (dmp_tools_locker_Base.Cast(target.GetObject()))
		{
			// пропускаємо перевірку масиву дверей, але все одно перевіряємо стан
			DMP_Furniture_Base tkaObj = DMP_Furniture_Base.Cast(target.GetObject());
			if (tkaObj)
			{
				return tkaObj.IsOpen();
			}
			return false;
		}*/
		
		/*string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		array<string> arrDoors = {"doors1","doors2","doors3","doors4","doors5","doors6","iscrate"};
		if (arrDoors.Find(selection) == -1)
		{
			return false;
		}*/
	}

	/*override void OnStartServer( ActionData action_data )
	{
		DMP_Furniture_Base dmpfurniture = DMP_Furniture_Base.Cast(action_data.m_Target.GetObject());
		if(dmpfurniture)		
		{	
			dmpfurniture.Close();
			return;
		}
	}*/
	
	override void OnExecuteServer( ActionData action_data )
	{
		Object target_object = action_data.m_Target.GetObject();
		DMP_Furniture_Base dmpfurniture = DMP_Furniture_Base.Cast( target_object );	
		if( dmpfurniture )
		{
			dmpfurniture.Close();
		}
		BarrelHoles_ColorBase dmpstove = BarrelHoles_ColorBase.Cast( target_object );	
		if( dmpstove )
		{
			dmpstove.Close();
		}
	}
};