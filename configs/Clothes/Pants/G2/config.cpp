class CfgPatches
{
	class FOG_Pants_Crye_G2
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
	class FOG_Pants_Crye_G2_ColorBase: Clothing
	{
		displayName="Crye G2 Combat Pants";
		descriptionShort="Crye G2 Combat Pants.";
		model="\FOG_MOD\Clothes\Pants\G2\FOG_Crye_G2_G.p3d";
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
			"camo"
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
								"FOG_MOD\Clothes\Pants\G2\Data\CryeG2_Pants.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\G2\Data\CryeG2_Pants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\G2\Data\CryeG2_Pants.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\G2\Data\CryeG2_Pants_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\G2\Data\CryeG2_Pants_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Pants\G2\FOG_Crye_G2_M.p3d";
			female="\FOG_MOD\Clothes\Pants\G2\FOG_Crye_G2_F.p3d";
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
					soundSet="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Pants_Crye_G2_MC: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_MC_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_MCB: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_MCB_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_MCT: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_MCT_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_MCA: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_MCA_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_MCAL: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_MCAL_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_3CD: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_3CD_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_DTG: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_DTS_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_WTG: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_WTG_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_M81: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_m81_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_AOR1: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_AOR1_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_AOR2: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_AOR2_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_CB: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_CB_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_RG: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_RG_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Red: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_Red_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_GRY: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_Grey_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Black: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_Black_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Blue: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_blue_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_ALPF: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_ALPF_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_ATACS: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_ATACS_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_DNC: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_DNC_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_KHK: FOG_Pants_Crye_G2_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2\data\CryeG2_Pants_KHK_co.paa"
		};
	};
};