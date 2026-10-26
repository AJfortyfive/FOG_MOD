class CfgPatches
{
	class FOG_Operator_Boots_shit
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
	class FOG_Operator_Boots_ColorBase: Clothing
	{
		scope=0;
		displayName="Operator Combat Boots";
		descriptionShort="Worn by high tier operators in all environments, guarentee you will not roll an ankle in these bad boys.";
		model="\FOG_MOD\Gear\Shoes\FOG_Operator_Boots\FOG_Operator_Boots_G.p3d";
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
		weight=400;
		varWetMax=0.8;
		heatIsolation=0.7;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		soundAttType="Boots";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\operator_boots.rvmat"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Shoes\FOG_Operator_Boots\FOG_Operator_Boots_M.p3d";
			female="\FOG_MOD\Gear\Shoes\FOG_Operator_Boots\FOG_Operator_Boots_F.p3d";
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
								"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\operator_boots.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\operator_boots.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\operator_boots_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\operator_boots_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\operator_boots_destruct.rvmat"
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
	class FOG_Operator_Boots_CB: FOG_Operator_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\Operator_Boot_CB_co.paa"};
	};
	class FOG_Operator_Boots_Black: FOG_Operator_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\Operator_Boot_BLK_co.paa"};
	};
	class FOG_Operator_Boots_RG: FOG_Operator_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\Operator_Boot_RG_co.paa"};
	};
	class FOG_Operator_Boots_Tan: FOG_Operator_Boots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\FOG_Operator_Boots\data\Operator_Boot_Tan_co.paa"};
	};
};