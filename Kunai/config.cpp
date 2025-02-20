class CfgPatches
{
	class seis_kunai
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};

class CfgMods
{
	class seis_kunai
	{
		dir = "Kunai";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Kunai";
		credits = "psicodelik";
		author = "Spaghettieis";
		authorID = "";
		version = "1.0";
		extra = 0;
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Kunai/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class SteakKnife;
//	class Pickaxe;
	class seis_kunai: SteakKnife
	{
		scope=2;
		displayName="Kunai";
		descriptionShort="Sturdy multi-purpose gardening tool, can also be used as a knife.";
		model="Kunai\data\kunai.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		repairableWithKits[]={4};
		repairCosts[]={5};
		itemInfo[]=
		{
			"Knife"
		};
		RestrainUnlockType=1;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Knife"
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		weight=200;
		itemBehaviour=1;
		itemSize[]={1,2};
		openItemSpillRange[]={10,20};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Kunai\data\kunai_co.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Kunai\data\kunai.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Kunai\data\kunai.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Kunai\data\kunai_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Kunai\data\kunai_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Kunai\data\kunai_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_1";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_1";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_1";
				range=3.3;
			};
		};
/*
		class Horticulture   // this and the action_types below were attempts to enable garden plots.
		{
			ToolAnim="CHOPPINGWOOD";
			DiggingTimeToComplete=1;
		};
		build_action_type=4;
		dismantle_action_type=4;  
*/
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class ChoppingTree
				{
					soundSet="ChoppingTree_SoundSet";
					id=415;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
		};
	};
};
