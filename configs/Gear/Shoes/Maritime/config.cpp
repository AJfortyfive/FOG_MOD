class CfgPatches
{
	class FOG_MOD_Maritime_Shoes
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
	class FOG_Maritime_Shoes_ColorBase: Clothing
	{
		scope=0;
		displayName="Altama Maritime Boots";
		descriptionShort="Designed for tactical water operations, the Altama Maritime Boot features a streamlined, narrow fit that easily accommodates most military dive fins. Meant to be worn sockless, its fin-compatible design ensures a secure fit and optimal performance in aquatic environments.";
		model="\FOG_MOD\Gear\Shoes\Maritime\FOG_Maritime_G.p3d";
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
		varWetMax=0.2;
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
			"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots.rvmat"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Shoes\Maritime\FOG_Maritime_M.p3d";
			female="\FOG_MOD\Gear\Shoes\Maritime\FOG_Maritime_F.p3d";
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
								"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots_destruct.rvmat"
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
	class FOG_Maritime_Shoes_Black: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_BLK_co.paa"};
	};
	class FOG_Maritime_Shoes_Grey: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_GRY_co.paa"};
	};
	class FOG_Maritime_Shoes_RG: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_RG_co.paa"};
	};
	class FOG_Maritime_Shoes_CB: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots_CB_co.paa"};
	};
	class FOG_Maritime_Shoes_KHK: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots_KHK_co.paa"};
	};
	class FOG_Maritime_Shoes_Blue: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Blue_co.paa"};
	};
	class FOG_Maritime_Shoes_Red: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Red_co.paa"};
	};
	class FOG_Maritime_Shoes_MC: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_MC_co.paa"};
	};
	class FOG_Maritime_Shoes_MC_T: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_MC_TAN_co.paa"};
	};
	class FOG_Maritime_Shoes_MCB: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_MCB_co.paa"};
	};
	class FOG_Maritime_Shoes_MCB_T: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_MCB_TAN_co.paa"};
	};

	class FOG_Maritime_Shoes_DTGR: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_DTGR_co.paa"};
	};
	class FOG_Maritime_Shoes_M81: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_M81_co.paa"};
	};
	class FOG_Maritime_Shoes_M81Red: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_m81Red_co.paa"};
	};
	class FOG_Maritime_Shoes_Culston: FOG_Maritime_Shoes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\Maritime\Data\Maritime_Boots_Culston_co.paa"};
	};
};