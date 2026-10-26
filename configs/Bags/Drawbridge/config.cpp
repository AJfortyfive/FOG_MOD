class CfgPatches 
{
	class FOG_Bag_DrawBridge 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class cfgVehicles 
{
	class Clothing;
	class FOG_Bag_DrawBridge_ColorBase: Clothing 
	{
		scope = 0;
		displayName = "Hazard 4 Drawbridge Bag";
		descriptionShort = "Drawbridge is an ergonomical medium-size 25L backpack with an impressive amount of modular pouches and straps.";
		model = "\FOG_MOD\Bags\Drawbridge\models\DrawBridge_g.p3d";
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		rotationFlags=16;
		itemSize[] = {7, 10};
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 10};
		weight = 1200;
        varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"FOG_big_patch",
			"Backpack_1"
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_cb_co.paa"};
		
		class ClothingTypes 
		{
			male = "\FOG_MOD\Bags\Drawbridge\models\DrawBridge_m.p3d";
			female = "\FOG_MOD\Bags\Drawbridge\models\DrawBridge_m.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 300;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] =
					{
						{1.0, {"FOG_MOD\Bags\Drawbridge\data\DrawBridge.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\Drawbridge\data\DrawBridge.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem_Light 
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				
				class pickUpItem 
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class FOG_Bag_DrawBridge_CB : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_cb_co.paa"};
	};
	class FOG_Bag_DrawBridge_RG : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_rg_co.paa"};
	};
	class FOG_Bag_DrawBridge_OD : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_od_co.paa"};
	};
	class FOG_Bag_DrawBridge_Tan : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_tan_co.paa"};
	};
	class FOG_Bag_DrawBridge_Black : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_black_co.paa"};
	};
	class FOG_Bag_DrawBridge_Grey : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_grey_co.paa"};
	};
	class FOG_Bag_DrawBridge_White : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_White_co.paa"};
	};
	class FOG_Bag_DrawBridge_MC : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_MC_co.paa"};
	};
	class FOG_Bag_DrawBridge_MCAL : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_MCAL_co.paa"};
	};
	class FOG_Bag_DrawBridge_MCB : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_MCB_co.paa"};
	};
	class FOG_Bag_DrawBridge_MCA : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_MCA_co.paa"};
	};
	class FOG_Bag_DrawBridge_MCT : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_MCT_co.paa"};
	};
	class FOG_Bag_DrawBridge_AOR1 : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_AOR1_co.paa"};
	};
	class FOG_Bag_DrawBridge_AOR2 : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_AOR2_co.paa"};
	};
	class FOG_Bag_DrawBridge_M81 : FOG_Bag_DrawBridge_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Drawbridge\data\DrawBridge_M81_co.paa"};
	};
};
