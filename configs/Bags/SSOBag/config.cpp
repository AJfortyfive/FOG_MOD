class CfgPatches 
{
	class FOG_Bag_SSOBag 
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
	class FOG_Bag_SSOBag_ColorBase: Clothing 
	{
		scope = 0;
		displayName = "SSO Attack 2 Raid Bag";
		descriptionShort = "60-liter raid backpack intended for carrying in a field conditions of personal things and equipment.";
		model = "\FOG_MOD\Bags\SSOBag\models\SSOBag_g.p3d";
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";

		itemSize[] = {7, 10};
		quickBarBonus = 3;
		itemsCargoSize[] = {10, 10};
		weight = 1400;
		varWetMax=0.4;
		heatIsolation=0.68;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		rotationFlags=16;
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\SSOBag\data\SSOBag_co.paa"};
		
		class ClothingTypes 
		{
			male = "\FOG_MOD\Bags\SSOBag\models\SSOBag_m.p3d";
			female = "\FOG_MOD\Bags\SSOBag\models\SSOBag_m.p3d";
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
						{1.0, {"FOG_MOD\Bags\SSOBag\data\SSOBag.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\SSOBag\data\SSOBag.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\SSOBag\data\SSOBag_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\SSOBag\data\SSOBag_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\SSOBag\data\SSOBag_destruct.rvmat"}}
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
	
	class FOG_Bag_SSO_Tan : FOG_Bag_SSOBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\SSOBag\data\SSOBag_co.paa"};
	};
	class FOG_Bag_SSO_Black : FOG_Bag_SSOBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\SSOBag\data\SSOBag_black_co.paa"};
	};
	class FOG_Bag_SSO_MC : FOG_Bag_SSOBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\SSOBag\data\SSOBag_mc_co.paa"};
	};
	class FOG_Bag_SSO_CB : FOG_Bag_SSOBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\SSOBag\data\SSOBag_cb_co.paa"};
	};
	class FOG_Bag_SSO_MCB : FOG_Bag_SSOBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\SSOBag\data\SSOBag_mcb_co.paa"};
	};
	class FOG_Bag_SSO_Toxic : FOG_Bag_SSOBag_ColorBase 
	{
		scope = 2;
		displayName = "Toxic's SSO";
		descriptionShort = "Yea he's toxic, but I love him anyways.";
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\SSOBag\data\SSOBag_rg_cb_co.paa"};
	};
};
