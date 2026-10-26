class CfgPatches 
{
	class FOG_Bag_6SHTBag 
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
	class FOG_Bag_6ShTBag_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "6SH118 Raid Backpack";
		descriptionShort = "Large capacity backpack, also cleverly nicknamed the Couch Bag";
		model = "FOG_MOD\Bags\6Sh118T\models\Bag6SHT_g.p3d";
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		rotationFlags=16;
		itemSize[] = {10, 12};
		quickBarBonus = 2;
		itemsCargoSize[] = {10, 18};
		weight = 1600;
		varWetMax=0.048999999;
		heatIsolation=0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\6Sh118T\data\6sh118T_co.paa"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		class ClothingTypes 
		{
			male = "FOG_MOD\Bags\6Sh118T\models\Bag6SHT.p3d";
			female = "FOG_MOD\Bags\6Sh118T\models\Bag6SHT.p3d";
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
						{1.0, {"FOG_MOD\Bags\6Sh118T\data\6sh118T.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\6Sh118T\data\6sh118T.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\6Sh118T\data\6sh118T_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\6Sh118T\data\6sh118T_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\6Sh118T\data\6sh118T_destruct.rvmat"}}
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
	
	class FOG_Bag_6ShBagT_Green : FOG_Bag_6ShTBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\6Sh118T\data\6sh118T_co.paa"};
	};
	class FOG_Bag_6ShBagT_BlackEMR : FOG_Bag_6ShTBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\6Sh118T\data\6sh118T_black_EMR_co.paa"};
	};
	class FOG_Bag_6ShBagT_Black : FOG_Bag_6ShTBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\6Sh118T\data\6sh118T_Black_co.paa"};
	};
	class FOG_Bag_6ShBagT_RG : FOG_Bag_6ShTBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\6Sh118T\data\6sh118T_RG_co.paa"};
	};
	class FOG_Bag_6ShBagT_CB : FOG_Bag_6ShTBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\6Sh118T\data\6sh118T_CB_co.paa"};
	};
	class FOG_Bag_6ShBagT_White : FOG_Bag_6ShTBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\6Sh118T\data\6sh118T_White_co.paa"};
	};
	class FOG_Bag_6ShBagT_EMR_White : FOG_Bag_6ShTBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\6Sh118T\data\6sh118T_EMR_White_co.paa"};
	};
};