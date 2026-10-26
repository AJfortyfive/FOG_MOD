class CfgPatches
{
	class FOG_Masks_Dripclava
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
	class FOG_Dripclava_ColorBase: Clothing
	{
        scope=0;
		displayName="Dripclava";
		descriptionShort="I dont think they use this for milsim... im just here to piss off A3 modders.. ";
		model="\FOG_MOD\Gear\Masks\Dripclava\FOG_Dripclava_G.p3d";
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
			"Headgear"
		};
		weight=100;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.75;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
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
					hitpoints=300;
					healthLevels[]=
					{
						{1.0,{"FOG_MOD\Gear\Masks\Dripclava\data\dripclava.rvmat"}},
						{0.7,{"FOG_MOD\Gear\Masks\Dripclava\data\dripclava.rvmat"}},
						{0.5,{"FOG_MOD\Gear\Masks\Dripclava\data\dripclava.rvmat"}},
						{0.3,{"FOG_MOD\Gear\Masks\Dripclava\data\dripclava.rvmat"}},
						{0.0,{"FOG_MOD\Gear\Masks\Dripclava\data\dripclava.rvmat"}}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\Dripclava\FOG_Dripclava_M.p3d";
			female="\FOG_MOD\Gear\Masks\Dripclava\FOG_Dripclava_F.p3d";
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
	class FOG_Dripclava_Black: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_blk_co.paa"
		};
	};
	class FOG_Dripclava_Grey: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_gry_co.paa"
		};
	};
	class FOG_Dripclava_White: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_white_co.paa"
		};
	};
	class FOG_Dripclava_RG: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_rg_co.paa"
		};
	};
	class FOG_Dripclava_CB: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_cb_co.paa"
		};
	};
	class FOG_Dripclava_Tan: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_tan_co.paa"
		};
	};
	class FOG_Dripclava_Tan449: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_tan449_co.paa"
		};
	};
	class FOG_Dripclava_Red: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_red_co.paa"
		};
	};
	class FOG_Dripclava_Purple: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_purp_co.paa"
		};
	};
	class FOG_Dripclava_Lime: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_lime_co.paa"
		};
	};
	class FOG_Dripclava_LBlue: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_lblue_co.paa"
		};
	};
	class FOG_Dripclava_MC: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_mc_co.paa"
		};
	};
	class FOG_Dripclava_LV: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_LV_co.paa"
		};
	};
	class FOG_Dripclava_LVSupreme: FOG_Dripclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Dripclava\data\dripclava_LVsupreme_co.paa"
		};
	};
};