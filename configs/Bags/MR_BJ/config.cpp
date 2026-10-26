class CfgPatches 
{
	class FOG_Bag_BlackJack 
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
	class FOG_Bag_BlackJack_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "Mystery Ranch BlackJack";
		descriptionShort = "Backpack for long, far and successful raids by Mystery Ranch.";
		model = "\FOG_MOD\Bags\MR_BJ\BlackJack_g.p3d";
        attachments[]=
		{
            "Shoulder",
			"FOG_big_patch",
			"FOG_ifak_vest",
			"Belt_Back",
			"Belt_Right",
			"Belt_Left",
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		itemSize[] = {7, 10};
		quickBarBonus = 3;
		itemsCargoSize[] = {10, 10};
		weight = 1600;
        varWetMax=0.249;
		heatIsolation=0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[]={"FOG_MOD\Bags\MR_BJ\data\MysteryBJ.rvmat"};
        simpleHiddenSelections[]=
        {
            "slot_melee_rifle",
            "slot_melee_melee",
            "slot_shoulder_rifle",
            "slot_shoulder_melee"
        };
		class ClothingTypes 
		{
			male = "\FOG_MOD\Bags\MR_BJ\BlackJack_m.p3d";
			female = "\FOG_MOD\Bags\MR_BJ\BlackJack_m.p3d";
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
						{1.0, {"FOG_MOD\Bags\MR_BJ\data\MysteryBJ.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\MR_BJ\data\MysteryBJ.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\MR_BJ\data\MysteryBJ_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\MR_BJ\data\MysteryBJ_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\MR_BJ\data\MysteryBJ_destruct.rvmat"}}
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
	
	class FOG_Bag_BlackJack_MC : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_BJ\data\BlackJack_MC_co.paa"};
	};
	class FOG_Bag_BlackJack_MCB : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Bags\MR_BJ\data\BlackJack_MCB_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Bags\MR_BJ\data\MysteryBJ_Dark.rvmat"
		};
	};
	class FOG_Bag_BlackJack_MCT : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_BJ\data\BlackJack_MCT_co.paa"};
	};
	class FOG_Bag_BlackJack_MCAL : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_BJ\data\BlackJack_MCAL_co.paa"};
	};
	class FOG_Bag_BlackJack_RG : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_BJ\data\BlackJack_RG_co.paa"};
	};
	class FOG_Bag_BlackJack_OD : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_BJ\data\BlackJack_OD_co.paa"};
	};
	class FOG_Bag_BlackJack_CB : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_BJ\data\BlackJack_CB_co.paa"};
	};
	class FOG_Bag_BlackJack_KHK : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_BJ\data\BlackJack_KHK_co.paa"};
	};
	class FOG_Bag_BlackJack_ERDL : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\MR_BJ\data\BlackJack_M81_co.paa"};
	};
	class FOG_Bag_BlackJack_Black : FOG_Bag_BlackJack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Bags\MR_BJ\data\BlackJack_Black_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Bags\MR_BJ\data\MysteryBJ_Dark.rvmat"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyproxy_weapon: ProxyAttachment
	{
		scope = 2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		model = "\FOG_MOD\Data\proxy_weapon.p3d";
	};
};
