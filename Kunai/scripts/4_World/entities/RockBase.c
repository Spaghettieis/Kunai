modded class RockBase 
{
	override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		super.GetMaterialAndQuantityMap(item, output_map);

		switch (item.GetType())
		{
		case "seis_kunai":
			output_map.Insert("SmallStone",1);
			break;
		}
	}

	override float GetDamageToMiningItemEachDrop(ItemBase item)
	{
		super.GetDamageToMiningItemEachDrop(item);

		if (item)
		{
			switch (item.GetType())
			{
			case "seis_kunai":
				return 25;
			}
		}
		
		return 25;
	}
};



