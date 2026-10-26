class CfgPatches
{
	class FOG_MOD_Shoes_Lerch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters","DZ_Characters_Shoes"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Lerch_Boots_ColorBase: Clothing
	{
		scope=0;
		displayName="Lerch Boots";
		descriptionShort="Worn by high tier operators in all environments, guarentee you will not roll an ankle in these bad boys.";
		model="\FOG_MOD\Gear\Shoes\Lerch_Boots\Lerch_boots_G.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		itemSize[]={3,3};
		weight=200;
		varWetMax=0.59000002;
		heatIsolation=0.4;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		soundAttType="Boots";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots.rvmat"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Shoes\Lerch_Boots\Lerch_boots_M.p3d";
			female="\FOG_MOD\Gear\Shoes\Lerch_Boots\Lerch_boots_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Lerch_Boots_Black: FOG_Lerch_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_black_co.paa"};
	};
	class FOG_Lerch_Boots_Black_Dirty: FOG_Lerch_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_black_dirty_co.paa"};
	};
	class FOG_Lerch_Boots_MC: FOG_Lerch_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_mc_co.paa"};
	};
	class FOG_Lerch_Boots_MCB: FOG_Lerch_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_mcb_co.paa"};
	};
	class FOG_Lerch_Boots_Khk: FOG_Lerch_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_khk_co.paa"};
	};
	class FOG_Lerch_Boots_RG: FOG_Lerch_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_rg_co.paa"};
	};
	class FOG_Lerch_Boots_CB: FOG_Lerch_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Lerch_Boots\data\lerchboots_cb_co.paa"};
	};
};