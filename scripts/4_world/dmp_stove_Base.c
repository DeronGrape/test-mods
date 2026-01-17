class dmp_stove_Base : BarrelHoles_ColorBase
{	
	override bool CanDisplayAttachmentCategory(string category_name)
	{
		// якщо піч відкрита — показуємо всі категорії
		if (IsOpen())
		{
			return true;
		}
		// якщо піч закрита — нічого не показуємо
		return false;
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{	
		// Якщо піч відкрита — можна все
		if (IsOpen())
			return true;

		// Якщо піч закрита — нічого
		return false;
	}
	
	override bool CanShowSmoke()
	{
		return false;
	}

	//  Метод візуального оновлення + додамо звук
	void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Doors1", 1);			
		}
		else
		{
			SetAnimationPhase("Doors1", 0);			
		}
	}

	//  Метод звуку відкривання
	string GetBarrelOpenSoundset()
	{
		return "DMP_doorMetalSmallOpenABit_SoundSet";
	}
	
	string GetBarrelCloseSoundset()
	{
		return "DMP_doorMetalTwinClose_SoundSet";
	}
	override bool CanDisplayCargo()
	{
		return true;
	}
	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}
	// override vector GetFireEffectPosition()
	// {
		// return GetMemoryPointPos("fire");
	// }
	override void SetActions()
	{
		super.SetActions();
		// AddAction(ActionAttachOnSelection);
		// AddAction(ActionTogglePlaceObject);
		// AddAction(ActionPlaceObject);
		AddAction(ActionOpenDMP_Stove);
		AddAction(ActionCloseDMP_Stove);

		RemoveAction(ActionOpenBarrelHoles);
		RemoveAction(ActionCloseBarrelHoles);
		// RemoveAction(ActionAttachOnSelection);

		AddAction(ActionDismantleItem);
		AddAction(ActionDetachFromTarget);
	}
};
