modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
        super.RegisterOneHanded(pType, pBehavior);
        	pType.AddItemInHandsProfileIK("seis_kunai",
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi",
 		pBehavior,
		"dz/anims/anm/player/ik/gear/steak_knife.anm");

	}
};