modded class ItemBase
{	

	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		return true;
	}
	
	override bool CanLoadAttachment( EntityAI attachment )
	{				
		return true;
	}
	
	vector Get_ItemPlacingPos()
	{
		if(ConfigIsExisting("itemPlacingPos"))
			return ConfigGetVector("itemPlacingPos");		
		return "0 0 0";
	}

	vector Get_ItemPlacingOrientation()
	{

		if(ConfigIsExisting("itemPlacingOri"))
			return ConfigGetVector("itemPlacingOri");		
		return "0 0 0";
		
	}
	
	bool EnableCollisionsFurThis()
	{
		return true;
	}
	
	string Get_ItemName()
	{
		if(ConfigIsExisting("kitItemName"))
			return ConfigGetString("kitItemName");
		return GetType().Substring(0,GetType().Length() - 4);
	}

	string Get_KitName()
	{
		if(ConfigIsExisting("kitName"))
			return ConfigGetString("kitName");
		return GetType()+ "_Kit";
	}

	bool IsInvEmpty()
	{   
		if (GetNumberOfItems() < 1 &&  GetInventory().AttachmentCount() < 1)
		{
			return true;
		}
		return false;
	}

	/*void VisibleProxy(string selectionName, bool hide = false, bool useDelay = true)
	{
		if (useDelay) 
		{	
			TimeDelay(selectionName, hide);
		} 
		else 
		{
			ShowHideSelection(selectionName, hide);
		}
	}*/

	void ShowHideSelection(string selectionName, bool hide)
	{
		TStringArray selectionNames = new TStringArray;
		ConfigGetTextArray("simpleHiddenSelections", selectionNames);
		int selectionId = selectionNames.Find(selectionName);
		SetSimpleHiddenSelectionState(selectionId, hide);
	}

	/*void TimeDelay(string selectionName, bool hide = false)
	{
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ShowHideSelection, 2000, false, selectionName, hide);	
	}*/
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionAttachOnSelection);
	};
};