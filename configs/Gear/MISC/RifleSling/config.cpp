class CfgPatches
{
	class FOG_MOD_Riflesling
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
	class FOG_Riflesling_Base: Clothing
	{
		scope=0;
		displayName="Rifle Sling";
		descriptionShort="A sling used to carry a rifle over the shoulder.";
		model="\FOG_MOD\Gear\MISC\RifleSling\FOG_Riflesling_M.p3d";
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
		simpleHiddenSelections[]=
		{
            "Position_LH_Back",
            "Position_LH_front2point",
            "Position_LH_fronthigh",
            "Position_LH_lowlefthip",
            "Position_RH_Back",
            "Position_RH_front2point",
            "Position_RH_fronthigh",
            "Position_RH_lowlefthip",
            "slot_LH_Back",
            "slot_LH_front2point",
            "slot_LH_fronthigh",
            "slot_LH_lowlefthip",
            "slot_RH_Back",
            "slot_RH_front2point",
            "slot_RH_fronthigh",
            "slot_RH_lowlefthip"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\MISC\RifleSling\FOG_Riflesling_M.p3d";
			female="\FOG_MOD\Gear\MISC\RifleSling\FOG_Riflesling_M.p3d";
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
								"FOG_MOD\Gear\MISC\RifleSling\data\gunSling.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\MISC\RifleSling\data\gunSling.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\MISC\RifleSling\data\gunSling.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\MISC\RifleSling\data\gunSling.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\MISC\RifleSling\data\gunSling.rvmat"
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
	class FOG_Riflesling_MC: FOG_Riflesling_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\RifleSling\data\gunSling_multicam_co.paa"
		};
	};
};