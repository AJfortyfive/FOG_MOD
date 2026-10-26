class CfgPatches
{
	class FOG_Enhanced_PCU_Shit
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
	class FOG_Enhanced_PCU_ColorBase: Clothing
	{
		displayName="Enhanced PCU";
		descriptionShort="A PCU jacked designed for extreme conditions, well insulated and water resistant.";
		model="\FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\FOG_Enhanced_PCU_G.p3d";
		inventorySlot[]={"Body"};
		itemInfo[]={"Clothing","Body"};
        attachments[]={"FOG_small_patch"};
		weight=800;
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};
		quickBarBonus=2;
		ragQuantity=3;
        varWetMax=0.249;
		heatIsolation=0.9;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]={"camo"};
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
								"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\FOG_Enhanced_PCU_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\FOG_Enhanced_PCU_F.p3d";
		};
		class Protection
		{
			chemical=0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Enhanced_PCU_MC: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_MC_co.paa"
		};
	};
	class FOG_Enhanced_PCU_Black: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_blk_co.paa"
		};
	};
	class FOG_Enhanced_PCU_Grey: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_gry_co.paa"
		};
	};
	class FOG_Enhanced_PCU_Tan: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_tan_co.paa"
		};
	};
	class FOG_Enhanced_PCU_RG: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_rg_co.paa"
		};
	};
	class FOG_Enhanced_PCU_CB: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_enhanced_cb_co.paa"
		};
	};
	class FOG_Enhanced_PCU_MC2: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_mc2_co.paa"
		};
	};
	class FOG_Enhanced_PCU_USMC: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\PCU_USMC_co.paa"
		};
	};
	class FOG_Enhanced_PCU_DNC: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_desert_night_co.paa"
		};
	};
	class FOG_Enhanced_PCU_White: FOG_Enhanced_PCU_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Enhanced_PCU\data\pcu_white_co.paa"
		};
	};
};