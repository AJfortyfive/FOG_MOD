class CfgPatches
{
	class FOG_Gear_Headsets_Comtac4
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
	class FOG_Comtac4_Headset_ColorBase: Clothing
	{
        scope=0;
		displayName="Comtac 4 Amp Headset";
		descriptionShort="Comtac 4 standalone earpro.";
		model="\FOG_MOD\Gear\Headgear\Headsets\Comtac4\FOG_Comtac4_Headset_G.p3d";
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
		inventorySlot[]=
		{
			"Headgear",
            "Mask",
            "FOG_Headset_slot"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=50;
		itemSize[]={2,2};
		varWetMax=1;
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
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\Headsets\Comtac4\FOG_Comtac4_Headset_M.p3d";
			female="\FOG_MOD\Gear\Headgear\Headsets\Comtac4\FOG_Comtac4_Headset_F.p3d";
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
	class FOG_Comtac4_Headset_Tan: FOG_Comtac4_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4_CB_co.paa"
		};
	};
	class FOG_Comtac4_Headset_Black: FOG_Comtac4_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4_BLK_co.paa"
		};
	};
	class FOG_Comtac4_Headset_Grey: FOG_Comtac4_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4_GRY_co.paa"
		};
	};
	class FOG_Comtac4_Headset_RG: FOG_Comtac4_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\Comtac4\data\Comtac_4_RG_co.paa"
		};
	};
};