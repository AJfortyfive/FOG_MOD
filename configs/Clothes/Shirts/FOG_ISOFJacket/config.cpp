class CfgPatches
{
	class FOG_Shirt_ISOF_Jacket_Shit
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
	class FOG_Shirt_ISOF_Jacket_ColorBase: Clothing
	{
        scope=0;
		displayName="ISOF Combat Jacket";
		descriptionShort="Jacket worn by elite Iraqi Special Forces Teams.";
		model="\FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\FOG_ISOFJacket_G.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=870;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
		quickBarBonus=1;
        varWetMax=0.249;
		heatIsolation=0.9;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo_jacket",
            "camo_shirt"
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
								"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\ISOFjacket.rvmat",
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\ISOFjacket.rvmat",
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\ISOFjacket_damage.rvmat",
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\ISOFjacket_damage.rvmat",
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\ISOFjacket_destruct.rvmat",
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\FOG_ISOFJacket_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\FOG_ISOFJacket_F.p3d";
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
	class FOG_Shirt_ISOF_Jacket_Black: FOG_Shirt_ISOF_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\Jacket_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_Black_co.paa"
		};
	};
	class FOG_Shirt_ISOF_Jacket_MC: FOG_Shirt_ISOF_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\Jacket_mcb_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MC_OCP_co.paa"
		};
	};
	class FOG_Shirt_ISOF_Jacket_MC2: FOG_Shirt_ISOF_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\Jacket_mc_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MC_OCP_co.paa"
		};
	};
	class FOG_Shirt_ISOF_Jacket_M81: FOG_Shirt_ISOF_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\Jacket_mcb_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_M81_co.paa"
		};
	};
	class FOG_Shirt_ISOF_Jacket_MCAL: FOG_Shirt_ISOF_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.4;
		hiddenSelectionsTextures[]={"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\Jacket_mcal_co.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_White_co.paa"};
	};
	class FOG_Shirt_ISOF_Jacket_RG: FOG_Shirt_ISOF_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.4;
		hiddenSelectionsTextures[]={"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\Jacket_rg_co.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_RG_co.paa"};
	}; 
	class FOG_Shirt_ISOF_Jacket_CB: FOG_Shirt_ISOF_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.4;
		hiddenSelectionsTextures[]={"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\Jacket_cb_co.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_cb_co.paa"};
	};
	class FOG_Shirt_ISOF_Jacket_White: FOG_Shirt_ISOF_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.4;
		hiddenSelectionsTextures[]={"FOG_MOD\Clothes\Shirts\FOG_ISOFJacket\Data\Jacket_White_co.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_White_co.paa"};
	};
};