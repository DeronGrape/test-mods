modded class ActionConstructor 
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
		actions.Insert(ActionFurnitureClose);
		actions.Insert(ActionFurnitureOpen);
		actions.Insert(ActionOpenDMP_Stove);
		actions.Insert(ActionCloseDMP_Stove);
		
		//CodeLock
		// #ifdef CodeLock
		// actions.Insert(DMP_ActionInteractLock);
        // actions.Insert(DMP_ActionManageLock);
		// actions.Insert(DMP_ActionAttachCodeLock);
		// actions.Insert(DMP_ActionDestroyCodeLock);
        // actions.Insert(DMP_ActionLockAdmin);
		// #endif
	
		//Dismantle Item
		actions.Insert(ActionDismantleItem);
		
    }
};