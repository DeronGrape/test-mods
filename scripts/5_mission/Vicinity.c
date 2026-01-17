modded class VicinityItemManager
{
	private float m_FurnitureCheckCounter = 0.0;
	private const float FURNITURE_CHECK_INTERVAL = 0.5;
	
	protected bool IsFurnitureVisible(DMP_Furniture_Base furniture, vector playerPos)
	{
		// позиція меблів
		vector furniturePos = furniture.GetPosition();

		// фронт меблів
		vector furnitureDir = furniture.GetDirection(); // фронт-вектор меблів
		furnitureDir.Normalize();

		// вектор від меблів до гравця
		vector toPlayer = playerPos - furniturePos;
		toPlayer.Normalize();

		// косинус кута між фронтом меблів і напрямком на гравця
		float dot = vector.Dot(furnitureDir, toPlayer);

		// якщо dot < 0, гравець позаду меблів → невидимі
		if (dot > 0)
			return false;

		return true; // меблі спереду → видимі
	}
	
	override void RefreshVicinityItems()
	{
		super.RefreshVicinityItems();

		// m_FurnitureCheckCounter = m_FurnitureCheckCounter + UPDATE_FREQUENCY;
		// if (m_FurnitureCheckCounter < FURNITURE_CHECK_INTERVAL)
			// return;

		// m_FurnitureCheckCounter = 0;

		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		if (!player)
			return;

		vector playerPos = player.GetPosition();
		array<EntityAI> toRemove = new array<EntityAI>();

		foreach (EntityAI entity : m_VicinityItems)
		{
			DMP_Furniture_Base furniture;
			if (!Class.CastTo(furniture, entity))
				continue;

			//  ВИКЛЮЧЕННЯ МЕБЕЛІ
			if (!furniture.HasFrontAccessRestriction())
				continue;

			// невеликий distance check (оптимізація)
			if (vector.DistanceSq(furniture.GetPosition(), playerPos) > 16.0)
				continue;

			if (!IsFurnitureVisible(furniture, playerPos))
				toRemove.Insert(furniture);
		}

		foreach (EntityAI ent : toRemove)
			m_VicinityItems.RemoveItem(ent);
	}
}; 