class CfgPatches
{
	class FOG_MOD_Headgear_Boonie
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Boonie_ColorBase: Clothing
	{
        scope=0;
		displayName="Tactical Boonie";
		descriptionShort="Stylish, yet tactical.";
		model="\FOG_MOD\Gear\Headgear\Boonie\FOG_Boonie_G.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=10;
		itemSize[]={3,2};
        varWetMax=0.249;
		heatIsolation=0.2;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Gear\Headgear\Boonie\data\boonie.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\Boonie\data\boonie.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\Boonie\data\boonie_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\Boonie\data\boonie_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\Boonie\data\boonie_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\Boonie\FOG_Boonie_M.p3d";
			female="\FOG_MOD\Gear\Headgear\Boonie\FOG_Boonie_M.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Boonie_MC: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_mc_co.paa"
		};
	};
	class FOG_Boonie_MCB: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_mcb_co.paa"
		};
	};
	class FOG_Boonie_AOR1: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_AOR1_co.paa"
		};
	};
	class FOG_Boonie_AOR2: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_AOR2_co.paa"
		};
	};
	class FOG_Boonie_M81: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_M81_co.paa"
		};
	};
	class FOG_Boonie_Black: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_black_co.paa"
		};
	};
	class FOG_Boonie_Grey: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_gry_co.paa"
		};
	};
	class FOG_Boonie_Khk: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_khk_co.paa"
		};
	};
	class FOG_Boonie_RG: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_rg_co.paa"
		};
	};
	class FOG_Boonie_CB: FOG_Boonie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Boonie\data\boonie_cb_co.paa"
		};
	};
};