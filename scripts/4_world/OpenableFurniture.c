class DMP_OpenableFurniture : DMP_Furniture_Base
{
	protected bool m_IsOpened;
	// protected bool CanOpenDoor = true;
	protected bool m_IsOpenedLocal;
	private bool m_IsOpenable;
	protected string m_OpenSoundSet = "DMP_doorMetalSmallOpenABit_SoundSet";
	protected string m_CloseSoundSet = "DMP_doorMetalTwinClose_SoundSet";
	protected vector m_OpenCloseSoundPosition = "0 0 0";
	protected Inventory_Base				inv;
	bool pickable = false;
	
	override void EEInit()
	{
		super.EEInit();

		// Примусово синхронізуємо візуальний стан
		UpdateVisualState();

		// Заблокуємо інвентар, якщо об'єкт закритий
		if (!IsOpen())
		{
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		}
		else
		{
			GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		}
	}
	
	// bool DMP_CanOpenDoor()
	// {
		// return CanOpenDoor;
	// }
	
	void DMP_OpenableFurniture()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsOpened");
		RegisterNetSyncVariableBool("CanOpenDoor");
	}

	override void Open()
	{
		m_IsOpened = true;
		// CanOpenDoor = false;
		SoundSynchRemote();
		UpdateVisualState();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		super.Open();
		SetSynchDirty();
	}

	override void Close()
	{
		m_IsOpened = false;
		// CanOpenDoor = true;
		SoundSynchRemote();
		UpdateVisualState();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		super.Close();
		SetSynchDirty();
	}
	/*override void SoundSynchRemote()
	{
		m_IsSoundSynchRemote = true;
		SetSynchDirty();
	}*/
	
	void SoundOpenPlay()
	{
		if(m_OpenSoundSet != "")
		{
			vector soundPos = GetPosition();
			if(m_OpenCloseSoundPosition != "0 0 0")
			{
				soundPos = m_OpenCloseSoundPosition;
			}
			EffectSound sound = SEffectManager.PlaySound( m_OpenSoundSet , soundPos );
			sound.SetSoundAutodestroy( true );
		}
	}
	
	void SoundClosePlay()
	{
		if(m_CloseSoundSet != "")
		{
			vector soundPos = GetPosition();
			if(m_OpenCloseSoundPosition != "0 0 0")
			{
				soundPos = m_OpenCloseSoundPosition;
			}
			EffectSound sound = SEffectManager.PlaySound( m_CloseSoundSet , soundPos );
			sound.SetSoundAutodestroy( true );
		}
	}

	override bool IsOpen()
	{
		return m_IsOpened;
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( m_IsOpened != m_IsOpenedLocal )
		{		
			if ( IsOpen() && !IsBeingPlaced() )
			{
				SoundOpenPlay();
			}
			
			if ( !IsOpen() && !IsBeingPlaced() )
			{
				SoundClosePlay();
			}	
			m_IsOpenedLocal = m_IsOpened;
		}
		UpdateVisualState();
	}
	
	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );		
		ctx.Write( m_IsOpened );
	}
	
	/*override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{	
		if ( m_IsOpened )
		{			
			Close();
			// CanOpenDoor = true;	
		}
		
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		if (!ctx.Read( m_IsOpened ) )
			return false;
		
		if ( m_IsOpened )
			Open();
		else
			Close();
		
		return true;
	}*/
	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if (!super.OnStoreLoad(ctx, version))
			return false;

		if (!ctx.Read(m_IsOpened))
			return false;

		// Завжди закриваємо після рестарту
		if (m_IsOpened)
		{
			Close();
		}
		else
		{
			// Open(); // або залишаємо закритим, залежно від того, що тобі треба
			Close();
		}

		return true;
	}
	
	void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Doors1",1);
            SetAnimationPhase("Doors2",1);
            SetAnimationPhase("Doors3",1);
            SetAnimationPhase("Doors4",1);
			SetAnimationPhase("Doors5",1);
			SetAnimationPhase("Doors6",1);
			SetAnimationPhase("coverdmp_c",1);
			
			//VisibleProxy("hide", 1, 0);
			// ShowHideSelection("coverdmp_c", 1);
			ShowHideSelection("hide", 1);
        }
        else
        {
			SetAnimationPhase("Doors1",0);
			SetAnimationPhase("Doors2",0);
			SetAnimationPhase("Doors3",0);
			SetAnimationPhase("Doors4",0);
			SetAnimationPhase("Doors5",0);
            SetAnimationPhase("Doors6",0);          
            SetAnimationPhase("coverdmp_c",0);          
			//VisibleProxy("hide", 0, 1);
			// ShowHideSelection("coverdmp_c", 0);			
			ShowHideSelection("hide", 0);			
        }
    }

    override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    override bool CanPutIntoHands( EntityAI parent )
    {
        return false;
    }
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		return IsOpen();
	}
	
	override bool IsContainer()
	{
		return true;
	}
	
	override bool CanReleaseCargo(EntityAI attachment)
	{
		return IsOpen() && !GetInventory().IsInventoryLockedForLockType( HIDE_INV_FROM_SCRIPT );
	}
 
	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionFurnitureOpen);
        AddAction(ActionFurnitureClose);
		AddAction(ActionDismantleItem);
		AddAction(ActionDetachFromTarget);
	}
};
class dmp_cratelocker_az_Base : DMP_OpenableFurniture
{
	
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalSmallOpenABit_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalTwinClose_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
};
class dmp_gear_locker_Base : DMP_OpenableFurniture
{
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalSmallOpenABit_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalTwinClose_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
};
class dmp_gear_lockerV2_Base : DMP_OpenableFurniture
{
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalSmallOpenABit_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalTwinClose_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}

};
class dmp_gunwall_az_Base : DMP_OpenableFurniture
{
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorWoodSlideOpen_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorWoodSlideClose_SoundSet", GetPosition() ); 
		sound.SetSoundAutodestroy( true );
	}
};
class dmp_gunwall_az_small_Base : DMP_OpenableFurniture
{
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorWoodSlideOpen_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorWoodSlideClose_SoundSet", GetPosition() ); 
		sound.SetSoundAutodestroy( true );
	}
	
};

class dmp_woodencrate_Base: DMP_OpenableFurniture
{
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorWoodSlideOpen_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorWoodSlideClose_SoundSet", GetPosition() ); 
		sound.SetSoundAutodestroy( true );
	}
	
	bool HasFrontAccessRestriction()
	{
		return false;
	}
};
class dmp_tools_locker_Base : DMP_OpenableFurniture
{

};

class dmp_repairkit_locker_Base : DMP_OpenableFurniture
{
	
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalSmallOpenABit_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalTwinClose_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
};
class dmp_gunrack_Base : DMP_OpenableFurniture
{
	
	bool HasFrontAccessRestriction()
	{
		return false;
	}
	
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "MediumTent_Door_Open_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "MediumTent_Door_Close_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
};
/*class DMP_Safe_Base : DMP_OpenableFurniture
{
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalSmallOpenABit_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalTwinClose_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
};
class DMP_locker_Base : DMP_OpenableFurniture
{
	
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalSmallOpenABit_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorMetalTwinClose_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
};
class DMP_crate : DMP_OpenableFurniture
{
	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorWoodGreenhouseOpen_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "DMP_doorWoodGreenhouseClose_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
};

*/