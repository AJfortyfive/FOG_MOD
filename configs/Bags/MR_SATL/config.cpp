class CfgPatches 
{
	class FOG_Bag_SATL
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
	class FOG_Bag_SATL_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "Mystery Ranch SATL";
		descriptionShort = "Backpack for long, far and successful raids by Mystery Ranch.";
		model = "\FOG_MOD\Bags\MR_SATL\FOG_MR_SATL_G.p3d";
        attachments[]=
		{
			"Pistol",
			"FOG_big_patch",
			"FOG_ifak_vest",
			"Belt_Back",
			"Belt_Left",
			"Chemlight",
            "FOG_navagation_slot",
			"WalkieTalkie",
			"Backpack_1"
		};
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		rotationFlags=16;
		itemSize[] = {7, 10};
		quickBarBonus = 4;
		itemsCargoSize[] = {10, 10};
		weight = 1600;
        varWetMax=0.249;
		heatIsolation=0.75;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camo"};
		class ClothingTypes 
		{
			male = "\FOG_MOD\Bags\MR_SATL\FOG_MR_SATL_M.p3d";
			female = "\FOG_MOD\Bags\MR_SATL\FOG_MR_SATL_F.p3d";
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
						{1.0, {"FOG_MOD\Bags\MR_SATL\data\SATL.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\MR_SATL\data\SATL.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\MR_SATL\data\SATL.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\MR_SATL\data\SATL.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\MR_SATL\data\SATL.rvmat"}}
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
	
	class FOG_Bag_SATL_MC : FOG_Bag_SATL_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_SATL\data\SATL_MC_co.paa"};
	};
	class FOG_Bag_SATL_RG : FOG_Bag_SATL_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_SATL\data\SATL_RG_co.paa"};
	};
	class FOG_Bag_SATL_CB : FOG_Bag_SATL_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_SATL\data\SATL_CB_co.paa"};
	};
	class FOG_Bag_SATL_KHK : FOG_Bag_SATL_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_SATL\data\SATL_KHK_co.paa"};
	};
	class FOG_Bag_SATL_Black : FOG_Bag_SATL_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_SATL\data\SATL_Black_co.paa"};
	};
	class FOG_Bag_SATL_Grey : FOG_Bag_SATL_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_SATL\data\SATL_GRY_co.paa"};
	};
};
