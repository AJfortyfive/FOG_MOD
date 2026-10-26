class CfgPatches
{
	class FOG_M32_Headset_Stuff
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
	class FOG_M32_Headset_ColorBase: Clothing
	{
        scope=0;
		displayName="EARMOR M32 Headset";
		descriptionShort="EARMOR M32 standalone earpro.";
		model="\FOG_MOD\Gear\Headgear\Headsets\M32\FOG_M32_G.p3d";
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
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\Headsets\M32\FOG_M32_M.p3d";
			female="\FOG_MOD\Gear\Headgear\Headsets\M32\FOG_M32_M.p3d";
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
	class FOG_M32_Headset_RG: FOG_M32_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\M32\data\m32_rg_co.paa"
		};
	};
	class FOG_M32_Headset_Black: FOG_M32_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\M32\data\m32_black_co.paa"
		};
	};
	class Inventory_Base;
	class FOG_M32_Helmet_ColorBase: Inventory_Base
	{
        scope=0;
		displayName="EARMOR M32 Headset";
		descriptionShort="EARMOR M32 Headphones for helmets.";
		Model = "\FOG_MOD\Gear\Headgear\Headsets\M32\FOG_M32_Helmet.p3d";
        itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		inventorySlot[] = {"SF_Comtacs"};
		weight = 50;
		hiddenSelections[]={"camo"};
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
		class AnimationSources
		{
			class arc_rotate
			{
				source="user";
				animPeriod=0.3;
				initPhase=0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
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
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\M32\data\M32_headset_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_M32_Helmet_RG : FOG_M32_Helmet_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Headgear\Headsets\M32\data\m32_rg_co.paa"
        };
	};
	class FOG_M32_Helmet_Black : FOG_M32_Helmet_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Headgear\Headsets\M32\data\m32_black_co.paa"
        };
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFOG_M32_G: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_Headset_slot"
		};
		model="\FOG_MOD\Gear\Headgear\Headsets\M32\FOG_M32_G.p3d";
	};
};