class DMP_UnOpenableFurniture extends DMP_Furniture_Base
{
	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}
}

class dmp_gearstand : DMP_UnOpenableFurniture 
{
	bool HasFrontAccessRestriction()
	{
		return false;
	}
};