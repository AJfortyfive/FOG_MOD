class CfgPatches
{
	class FOG_Gear_Shoes_XAForces
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_XAForces_Shoes_ColorBase: Clothing
	{
		scope=0;
		displayName="Salomon XA Forces";
		descriptionShort="The Salomon XA Forces is a tactical shoe designed for military and law enforcement personnel. It features a lightweight, breathable upper, a cushioned midsole for comfort, and a rugged outsole for traction on various terrains.";
		model="\FOG_MOD\Gear\Shoes\XAForces\FOG_XAForces_G.p3d";
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
		varWetMax=0.4;
		heatIsolation=0.65;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		soundAttType="Boots";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces.rvmat"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Shoes\XAForces\FOG_XAForces_M.p3d";
			female="\FOG_MOD\Gear\Shoes\XAForces\FOG_XAForces_F.p3d";
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
								"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces.rvmat"
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
	class FOG_XAForces_Shoes_Black: FOG_XAForces_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces_BLK_co.paa"};
	};
	class FOG_XAForces_Shoes_Grey: FOG_XAForces_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces_GRY_co.paa"};
	};
	class FOG_XAForces_Shoes_RG: FOG_XAForces_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces_RG_co.paa"};
	};
	class FOG_XAForces_Shoes_CB: FOG_XAForces_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces_CB_co.paa"};
	};
	class FOG_XAForces_Shoes_Tan: FOG_XAForces_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\XAForces\data\Saloman_XA_Forces_TAN_co.paa"};
	};
};