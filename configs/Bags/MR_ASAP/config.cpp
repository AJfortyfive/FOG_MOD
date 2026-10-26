class CfgPatches 
{
	class FOG_Bag_MRASAP
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
	class FOG_Bag_MRASAP_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "Mystery Ranch ASAP";
		descriptionShort = "Extremely versatile full-format load bearing backpack for military use.";
		model = "\FOG_MOD\Bags\MR_ASAP\MR_asap_G.p3d";
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		rotationFlags=16;
		itemSize[] = {7, 10};
		quickBarBonus = 3;
		itemsCargoSize[] = {7, 10};
		weight = 600;
		varWetMax=0.4;
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
			"Backpack_1"
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_ASAP\data\mysteryASAP_CB_co.paa"};
		
		class ClothingTypes 
		{
			male = "\FOG_MOD\Bags\MR_ASAP\MR_asap_M.p3d";
			female = "\FOG_MOD\Bags\MR_ASAP\MR_asap_M.p3d";
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
						{1.0, {"FOG_MOD\Bags\MR_ASAP\data\mr_asap.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\MR_ASAP\data\mr_asap.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\MR_ASAP\data\mr_asap_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\MR_ASAP\data\mr_asap_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\MR_ASAP\data\mr_asap_destruct.rvmat"}}
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
	
	class FOG_Bag_MRASAP_Black : FOG_Bag_MRASAP_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_ASAP\data\mysteryASAP_blk_co.paa"};
	};
	class FOG_Bag_MRASAP_Grey : FOG_Bag_MRASAP_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_ASAP\data\mysteryASAP_gry_co.paa"};
	};
	class FOG_Bag_MRASAP_RG : FOG_Bag_MRASAP_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_ASAP\data\mysteryASAP_RG_co.paa"};
	};
	class FOG_Bag_MRASAP_CB : FOG_Bag_MRASAP_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_ASAP\data\mysteryASAP_CB_co.paa"};
	};
	class FOG_Bag_MRASAP_MC : FOG_Bag_MRASAP_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_ASAP\data\mysteryASAP_mc_co.paa"};
	};
};
