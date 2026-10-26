class CfgPatches
{
	class FOG_Shirt_ArcticJacket
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
	class FOG_Shirt_ArcticJacket_ColorBase: Clothing
	{
		displayName="Arctic Expedition Jacket";
		descriptionShort="Arctic Expedition Jacket. Press and hold O to roll your sleeves";
		model="\FOG_MOD\Clothes\Shirts\ArcticJacket\FOG_ArcticJacket_G.p3d";
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
		varWetMax=0.1;
		heatIsolation=0.9;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[] = 
        {
			"camo"
        };
		simpleHiddenSelections[] = 
        {
			"selection_hooddown",
            "selection_hoodnohat",
			"selection_hoodhelmet"
        };
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\arcticjacket_blue_co.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\arcticjacket.rvmat"
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
						{1.0,{"FOG_MOD\Clothes\Shirts\ArcticJacket\data\arcticjacket.rvmat"}},
						{0.7,{"FOG_MOD\Clothes\Shirts\ArcticJacket\data\arcticjacket.rvmat"}},
						{0.5,{"FOG_MOD\Clothes\Shirts\ArcticJacket\data\arcticjacket.rvmat"}},
						{0.3,{"FOG_MOD\Clothes\Shirts\ArcticJacket\data\arcticjacket.rvmat"}},
						{0.0,{"FOG_MOD\Clothes\Shirts\ArcticJacket\data\arcticjacket.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\ArcticJacket\FOG_ArcticJacket_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\ArcticJacket\FOG_ArcticJacket_F.p3d";
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
	class FOG_Shirt_ArcticJacket_Blue: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_Blue_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_Red: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_Red_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_Black: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_Black_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_Grey: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_Grey_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_White: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_White_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_CB: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_CB_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_RG: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_RG_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_MC: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_MC_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_MCB: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_MCB_co.paa"
        };
	};
	class FOG_Shirt_ArcticJacket_MCAL: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\ArcticJacket\data\FOG_ArcticJacket_MCAL_co.paa"
        };
	};
};