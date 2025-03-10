class seis_kunai extends ToolBase
{
	override bool IsMeleeFinisher()
	{
		return true;
	}
	
	override array<int> GetValidFinishers()
	{
		return {EMeleeHitType.FINISHER_LIVERSTAB,EMeleeHitType.FINISHER_NECKSTAB};
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionBurnSewTarget);
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionSkinning);
		AddAction(ActionMineBush);
		AddAction(ActionMineTreeBark);
		AddAction(ActionBurnSewSelf);
		AddAction(ActionDigWorms);
		AddAction(ActionShaveTarget);
		AddAction(ActionDisarmMine);
		AddAction(ActionDisarmExplosive);
		AddAction(ActionShave);
		AddAction(ActionCraftBolts);
//		AddAction(ActionBuryAshes);
//		AddAction(ActionDigInStash);
//		AddAction(ActionDigOutStash);
//		AddAction(ActionDigGardenPlot);
//		AddAction(ActionDismantleGardenPlot);
//		AddAction(ActionCreateGreenhouseGardenPlot);
		AddAction(ActionMineRock1H);

	}
}