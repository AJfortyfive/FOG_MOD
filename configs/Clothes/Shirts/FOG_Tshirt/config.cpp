class CfgPatches
{
	class FOG_Tshirt_Black_Shit
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
	class FOG_Tshirt_ColorBase: Clothing
	{
		displayName="Combat T-Shirt";
		descriptionShort="High speed, low drag.";
		model="\FOG_MOD\Clothes\Shirts\FOG_Tshirt\FOG_Tshirt_G.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=270;
		itemSize[]={4,4};
		itemsCargoSize[]={3,3};
		quickBarBonus=1;
		varWetMax=0.79000002;
		heatIsolation=0.4;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo",
            "personality"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_bear_black.rvmat"
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
								"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_bear_black.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_bear_black.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_bear_black_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_bear_black_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_bear_black_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_Tshirt\FOG_Tshirt_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_Tshirt\FOG_Tshirt_F.p3d";
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
	class FOG_Tshirt_Black: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_co.paa"
		};
	};
	class FOG_Tshirt_Grey: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_grey_co.paa"
		};
	};
	class FOG_Tshirt_White: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_white_co.paa"
		};
	};
	class FOG_Tshirt_CB: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_cb_co.paa"
		};
	};
	class FOG_Tshirt_RG: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_rg_co.paa"
		};
	};
	class FOG_Tshirt_Red: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_red_co.paa"
		};
	};
	class FOG_Tshirt_Tan499: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_tan499_co.paa"
		};
	};
	class FOG_Tshirt_Black_Canoe: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_canoe_co.paa"
		};
	};
	class FOG_Tshirt_Tan_Canoe: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_tan499_canoe_co.paa"
		};
	};
	class FOG_Tshirt_Black_CrimeCo: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_crimeco_co.paa"
		};
	};
	class FOG_Tshirt_Tan_CrimeCo: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_tan499_crimeco_co.paa"
		};
	};
	class FOG_Tshirt_Black_FOG_Reaper: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_FOG_reaper_co.paa"
		};
	};
	class FOG_Tshirt_Tan_FOG_Reaper: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_tan499_FOG_reaper_co.paa"
		};
	};
	class FOG_Tshirt_Black_FOG1: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_FOG1_co.paa"
		};
	};
	class FOG_Tshirt_Black_FOG2: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_FOG2_co.paa"
		};
	};
	class FOG_Tshirt_Black_MLG: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_mlg_co.paa"
		};
	};
	class FOG_Tshirt_Black_Raider: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_raider_co.paa"
		};
	};
	class FOG_Tshirt_Black_Sfartaetc: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_sfartaetc_co.paa"
		};
	};
	class FOG_Tshirt_Black_Thrasher: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_black_thrasher_co.paa"
		};
	};
	class FOG_Tshirt_Grey_CHLaw_Pinup: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_grey_CHLaw_co.paa"
		};
	};
	class FOG_Tshirt_White_Pinup: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_white_pinup_co.paa"
		};
	};
	class FOG_Tshirt_White_Star: FOG_Tshirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Tshirt\Data\Tshirt_white_star_co.paa"
		};
	};
};