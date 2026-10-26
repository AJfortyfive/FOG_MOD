class CfgPatches
{
	class FOG_Pants_Crye_G3_Shit
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
	class FOG_Pants_Crye_G3_ColorBase: Clothing
	{
		displayName="Crye G3 Combat Pants";
		descriptionShort="Crye G3 Combat Pants.";
		model="\FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\FOG_Crye_G3_Pants_G.p3d";
		inventorySlot[]=
		{
			"Legs"
		};
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
        rotationFlags=34;
		weight=270;
		itemSize[]={3,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		varWetMax=0.79000002;
		heatIsolation=0.69999999;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo_belt",
			"camo_pants"
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
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\belt.rvmat",
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Pants.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\belt.rvmat",
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Pants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\belt.rvmat",
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Pants.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\belt.rvmat",
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Pants.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\belt.rvmat",
								"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Pants.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\FOG_Crye_G3_Pants_M.p3d";
			female="\FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\FOG_Crye_G3_Pants_F.p3d";
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
	class FOG_Pants_Crye_G3_M81: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_CB_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_M81_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_MC: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_MC_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_Black: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_Black_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_MCB: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_MCB_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_GTiger: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_RG_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_TIGERWD_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_AOR1: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_AOR1_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_AOR2: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_RG_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_AOR2_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_CB: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_CB_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_CB_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_RG: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_RG_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_RG_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_Grey: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Grey_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_Grey_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_DTGR: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_TIGERD_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_MARPAT: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_CB_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_MARPAT_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_MCA: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_MCA_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_MCAL: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Grey_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_MCAL_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_MCT: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_RG_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_MCT_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_RDBS: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_RDB_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_ALPF: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_ALPF_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_AMCU: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_AMCU_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_Blue: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_Blue_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_DNC: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_DNC_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_DPM: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_RG_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_DPM_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_ERDL_RED: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_ERDL_Red_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_KHK: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_KHK_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_MC_BlackTrim: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_MC_blacktrim_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_MC_FRACU: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_MC_Ranger_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_Pantera: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_RG_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_Pantera_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_RG_BlackTrim: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_RG_blacktrim_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_BTGR: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_TIGER_Blue_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_RTGR: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_TIGER_RED_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_KBTGR: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_TIGERKB_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_UCP: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Tan_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_UCP_co.paa"
		};
	};
	class FOG_Pants_Crye_G3_White: FOG_Pants_Crye_G3_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Grey_co.paa",
			"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_CombatPants_White_co.paa"
		};
	};
};