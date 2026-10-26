class CfgPatches 
{
	class FOG_Bag_MRCommsBag
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Radio", "DZ_Characters", "DZ_Scripts"};
	};
};

class cfgVehicles 
{
	class Clothing;
	class FOG_Bag_CommsBag_Base: Clothing 
	{
		scope = 0;
		displayName = "Mystery Ranch Commo Bag";
		descriptionShort = "Talk to angels, bring the rain.";
		model = "\FOG_MOD\Bags\CommsBag\FOG_CommsBag_G.p3d";
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing", "Back"};
		itemSize[] = {7, 10};
		rotationFlags=16;
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 10};
		weight = 1200;
        varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_Tan_co.paa"};
		
		class ClothingTypes 
		{
			male = "\FOG_MOD\Bags\CommsBag\FOG_CommsBag_M.p3d";
			female = "\FOG_MOD\Bags\CommsBag\FOG_CommsBag_M.p3d";
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
						{1.0, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_destruct.rvmat"}}
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
	
	class FOG_Bag_CommsBag_CB : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_CG_co.paa"};
	};
	class FOG_Bag_CommsBag_RG : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_RG_co.paa"};
	};
	class FOG_Bag_CommsBag_Tan : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_Tan_co.paa"};
	};
	class FOG_Bag_CommsBag_Black : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_Black_co.paa"};
	};
	class FOG_Bag_CommsBag_White : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_White_co.paa"};
	};
	class FOG_Bag_CommsBag_MC : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_MC_co.paa"};
	};
	class FOG_Bag_CommsBag_MCAL : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_MCAL_co.paa"};
	};
	class FOG_Bag_CommsBag_MCB : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_MCB_co.paa"};
	};
	class FOG_Bag_CommsBag_MCT : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_MCT_co.paa"};
	};
	class FOG_Bag_CommsBag_M81 : FOG_Bag_CommsBag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_M81_co.paa"};
	};
	class Transmitter_Base;
	class FOG_Bag_CommsBag_Transmitter_Base: Transmitter_Base 
	{
		scope = 0;
		displayName = "Mystery Ranch Commo Bag";
		descriptionShort = "Talk to angels, bring the rain. This bag works the same as the field transceiver.";
		model = "\FOG_MOD\Bags\CommsBag\FOG_CommsBag_G.p3d";
		inventorySlot[] = {"Back"};
		itemSize[] = {7, 10};
		quickBarBonus = 3;
		itemsCargoSize[] = {9, 10};
		weight = 1200;
        varWetMax=0.249;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		oldpower=0;
		simulation="itemTransmitter";
		inputRange=8;
		range=50000;
		attachments[]=
		{
			"CarBattery",
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.050000001;
			plugType=5;
			attachmentAction=1;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_Tan_co.paa"};
		class ClothingTypes 
		{
			male = "\FOG_MOD\Bags\CommsBag\FOG_CommsBag_M.p3d";
			female = "\FOG_MOD\Bags\CommsBag\FOG_CommsBag_M.p3d";
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
						{1.0, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_destruct.rvmat"}}
					};
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
	class FOG_Bag_CommsBag_Transmitter_Base_CB : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_CG_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_RG : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_RG_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_Tan : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_Tan_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_Black : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_Black_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_White : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_White_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_MC : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_MC_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_MCAL : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_MCAL_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_MCB : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_MCB_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_MCT : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_MCT_co.paa"};
	};
	class FOG_Bag_CommsBag_Transmitter_Base_M81 : FOG_Bag_CommsBag_Transmitter_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\CommsBag\data\MR_CommsBag_M81_co.paa"};
	};
};
