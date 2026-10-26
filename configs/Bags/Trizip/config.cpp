class CfgPatches 
{
	class FOG_Bag_Trizip 
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
	class FOG_Bag_Trizip_ColorBase: Clothing 
	{
		scope = 0;
		displayName = "Camelbak Trizip Bag";
		descriptionShort = "Mid-sized versatile assault pack. Spacious, sturdy and comfortable, this backpack is loved both by military and hikers worldwide. 34L of total space, hydration system, easy access to side pockets, near-perfect suspension and MOLLE attachment system make it a great choice for up to 72 hours autonomous hikes... or carrying a good load of loot.";
		model = "\FOG_MOD\Bags\Trizip\models\Trizip_g.p3d";
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		rotationFlags=16;
		itemSize[] = {7, 10};
		quickBarBonus = 3;
		itemsCargoSize[] = {6, 10};
		weight = 600;
		varWetMax=0.6;
		heatIsolation=0.4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_co.paa"};
		
		class ClothingTypes 
		{
			male = "\FOG_MOD\Bags\Trizip\models\Trizip_m.p3d";
			female = "\FOG_MOD\Bags\Trizip\models\Trizip_m.p3d";
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
						{1.0, {"FOG_MOD\Bags\Trizip\data\Trizip.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\Trizip\data\Trizip.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\Trizip\data\Trizip_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\Trizip\data\Trizip_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\Trizip\data\Trizip_destruct.rvmat"}}
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
	
	class FOG_Bag_Trizip_Puke : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_co.paa"};
	};
	class FOG_Bag_Trizip_Black : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_black_co.paa"};
	};
	class FOG_Bag_Trizip_RG : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_rg_co.paa"};
	};
	class FOG_Bag_Trizip_OD : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_od_co.paa"};
	};
	class FOG_Bag_Trizip_CB : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_cb_co.paa"};
	};
	class FOG_Bag_Trizip_RGCB : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_rgcb_co.paa"};
	};
	class FOG_Bag_Trizip_MARPAT : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_MARPAT_co.paa"};
	};
	class FOG_Bag_Trizip_ATACSFG : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_ATACSFG_co.paa"};
	};
	class FOG_Bag_Trizip_DCU : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_dcu_co.paa"};
	};
	class FOG_Bag_Trizip_ERDL : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_erdl_co.paa"};
	};
	class FOG_Bag_Trizip_MC : FOG_Bag_Trizip_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Bags\Trizip\data\Trizip_mc_co.paa"};
	};
};
