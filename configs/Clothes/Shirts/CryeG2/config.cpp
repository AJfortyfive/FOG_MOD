class CfgPatches
{
	class FOG_Shirts_Crye_G2
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters","DZ_Characters_Tops"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Crye_G2_Shirt_ColorBase: Clothing
	{
		displayName="Crye G2 Combat Shirt";
		descriptionShort="Crye G2 Combat Shirt. Press and hold O to roll your sleeves";
		model="\FOG_MOD\Clothes\Shirts\CryeG2\CryeG2_Shirt_G.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=270;
		itemSize[]={5,4};
		itemsCargoSize[]={7,6};
		quickBarBonus=1;
		varWetMax=0.7;
		heatIsolation=0.5;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[] =
        {
			"camo",
			"camocuffs",
            "personality"
        };
		simpleHiddenSelections[] =
        {
			"selection_fray",
            "selection_sleevehalf",
			"selection_underarmor",
            "personality"
        };
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_mc_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\data\cuffs_mc_co.paa"
        };
		hiddenSelectionsMaterials[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt.rvmat",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\data\cuffs.rvmat"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 700;
					healthLevels[] =
					{
						{1.0,{"FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\data\cuffs.rvmat"}},
						{0.7,{"FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\data\cuffs.rvmat"}},
						{0.5,{"FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_damage.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\data\cuffs.rvmat"}},
						{0.3,{"FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_damage.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\data\cuffs.rvmat"}},
						{0.0,{"FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_destruct.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\data\cuffs.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\CryeG2\CryeG2_Shirt_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\CryeG2\CryeG2_Shirt_F.p3d";
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
	class FOG_Crye_G2_Shirt_Black : FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_black_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_black_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_Blue : FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_blue_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_blue_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_Grey: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_Grey_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_grey_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_RG: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_RG_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_rg_co"
        };
	};
	class FOG_Crye_G2_Shirt_CB: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_CB_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_cb_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_White: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_White_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_white_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_MC: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_mc_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mc_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_M81: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_m81_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_m81_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_AOR1: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_AOR1_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_aor1_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_AOR2: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_AOR2_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_aor2_co.paa"
        };
	};
	class FOG_Crye_G2_Shirt_Mack: FOG_Crye_G2_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Clothes\Shirts\CryeG2\Data\g2_shirt_Mackenzie_fray_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_white_co.paa"
        };
	};
};