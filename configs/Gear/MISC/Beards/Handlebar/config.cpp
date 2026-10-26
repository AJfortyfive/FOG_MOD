class CfgPatches
{
	class FOG_Beards_Handlebar
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
	class FOG_Beard_Handlebar_ColorBase: Clothing
	{
        scope=0;
		displayName="Handlebar Beard";
		descriptionShort="Only shows on Male character models.";
		model="\FOG_MOD\Gear\MISC\Beards\Handlebar\FOG_HandlebarBeard_G.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Mask"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=5;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.2;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
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
					hitpoints=900;
					healthLevels[]=
					{
						{1.0,{""}},
						{0.7,{""}},
						{0.5,{""}},
						{0.3,{""}},
						{0.0,{""}}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\MISC\Beards\Handlebar\FOG_HandlebarBeard_M.p3d";
			female="\FOG_MOD\Gear\MISC\Beards\Handlebar\FOG_HandlebarBeard_F.p3d";
		};
	};
	class FOG_Beard_Handlebar_LightBrown: FOG_Beard_Handlebar_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Beards\Handlebar\data\hair_shared_beard_co.paa"
		};
	};
	class FOG_Beard_Handlebar_Brown: FOG_Beard_Handlebar_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Beards\Handlebar\data\hair_shared_beard_brown_co.paa"
		};
	};
	class FOG_Beard_Handlebar_Black: FOG_Beard_Handlebar_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Beards\Handlebar\data\hair_shared_beard_black_co.paa"
		};
	};
	class FOG_Beard_Handlebar_Grey: FOG_Beard_Handlebar_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Beards\Handlebar\data\hair_shared_beard_grey_co.paa"
		};
	};
};