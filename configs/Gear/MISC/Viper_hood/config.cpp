class CfgPatches
{
	class FOG_MOD_ViperHood
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] =
		{
			"DZ_Characters",
			"FOG_MOD_Slots"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Clothing;
	class FOG_ViperHood_Base: Clothing
	{
		scope=0;
		displayName="Viper Hood";
		descriptionShort="A hood worn to break up the users silhouette and be worn over a helmet.";
		model="\FOG_MOD\Gear\MISC\Viper_hood\FOG_ViperHood_G.p3d";
		itemInfo[]=
		{
			"Clothing",
			"Armband"
		};
		attachments[]={"weaponWrap","FOG_ViperHood_Veil"};
		inventorySlot[]={"Armband","Back"}; 
		weight=80;
		itemSize[]={3,4};
		ragQuantity=1;
        varWetMax=0.59;
		heatIsolation=0.9;
		absorbency=0.8;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
        {
			"camo_leaf",
            "camo_shroud"
		};
		simplehiddenSelections[]=
        {
			"selection_veil",
			"selection_leaf"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\MISC\Viper_hood\FOG_ViperHood_M.p3d";
			female="\FOG_MOD\Gear\MISC\Viper_hood\FOG_ViperHood_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage.rvmat",
                                "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage.rvmat",
                                "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage.rvmat",
                                "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage.rvmat",
                                "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage.rvmat",
                                "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood.rvmat"
							}
						}
					};
				};
			};
        };
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_ViperHood_OD: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_OD_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_OD_co.paa"
		};
	};
	class FOG_ViperHood_RG: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_RG_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_RG_co.paa"
		};
	};
	class FOG_ViperHood_CB: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_CB_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_CB_co.paa"
		};
	};
	class FOG_ViperHood_Black: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_Black_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_Black_co.paa"
		};
	};
	class FOG_ViperHood_Grey: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_Grey_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_Grey_co.paa"
		};
	};
	class FOG_ViperHood_White: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_White_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_White_co.paa"
		};
	};
	class FOG_ViperHood_MC: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_MC_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_MC_co.paa"
		};
	};
	class FOG_ViperHood_MCB: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_MCB_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_MCB_co.paa"
		};
	};
	class FOG_ViperHood_MCT: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_MCT_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_MCT_co.paa"
		};
	};
	class FOG_ViperHood_MCAL: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_MCAL_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_MCAL_co.paa"
		};
	};
	class FOG_ViperHood_M81: FOG_ViperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Foliage_M81_co.paa",
            "FOG_MOD\Gear\MISC\Viper_hood\data\Viper_Hood_M81_co.paa"
		};
	};
	class BurlapStrip: Inventory_Base
	{
		scope=2;
		inventorySlot[]+={"FOG_ViperHood_Veil"}; 
	};
};