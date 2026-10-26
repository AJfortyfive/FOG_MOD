class CfgPatches
{
	class FOG_MOD_SniperHood
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_SniperHood_Base: Clothing
	{
		scope=0;
		displayName="Sniper Hood";
		descriptionShort="A hood worn to break up the users silhouette and be worn over a helmet.";
		model="\FOG_MOD\Gear\MISC\Sniper_Hood\FOG_Sniper_Hood_G.p3d";
		itemInfo[]=
		{
			"Clothing",
			"Armband"
		};
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
			"camo"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\MISC\Sniper_Hood\FOG_Sniper_Hood_M.p3d";
			female="\FOG_MOD\Gear\MISC\Sniper_Hood\FOG_Sniper_Hood_F.p3d";
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
								"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood.rvmat"
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
	class FOG_SniperHood_Black: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_black_co.paa"
		};
	};
	class FOG_SniperHood_RG: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_rg_co.paa"
		};
	};
	class FOG_SniperHood_CB: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_cb_co.paa"
		};
	};
	class FOG_SniperHood_Grey: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_grey_co.paa"
		};
	};
	class FOG_SniperHood_MC: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_mc_co.paa"
		};
	};
	class FOG_SniperHood_MC_Black: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_mc_black_co.paa"
		};
	};
	class FOG_SniperHood_MCB: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_mcb_co.paa"
		};
	};
	class FOG_SniperHood_MCT: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_mct_co.paa"
		};
	};
	class FOG_SniperHood_MCAL: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_mcal_co.paa"
		};
	};
	class FOG_SniperHood_M81: FOG_SniperHood_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Sniper_Hood\data\sniperhood_m81_co.paa"
		};
	};
};