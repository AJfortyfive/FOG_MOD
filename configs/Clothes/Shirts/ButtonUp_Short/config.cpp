class CfgPatches
{
	class FOG_MOD_Shirt_ButtonUp
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
	class FOG_ButtonUp_ColorBase: Clothing
	{
		displayName="Button Up Short Sleeve";
		descriptionShort="A simple short sleeve button up shirt, comes in a variety of colors.";
		model="\FOG_MOD\Clothes\Shirts\ButtonUp_Short\FOG_ButtonUp_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={3,3};
		itemsCargoSize[]={5,4};
		quickBarBonus=1;
		varWetMax=0.6;
		heatIsolation=0.45;
		ragQuantity=2;
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
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp.rvmat"
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
								"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\ButtonUp_Short\FOG_ButtonUp_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\ButtonUp_Short\FOG_ButtonUp_F.p3d";
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
	class FOG_ButtonUp_Black: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_Black_co.paa"
		};
	};
	class FOG_ButtonUp_Grey: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_Grey_co.paa"
		};
	};
	class FOG_ButtonUp_Red: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_Red_co.paa"
		};
	};
	class FOG_ButtonUp_RG: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_RG_co.paa"
		};
	};
	class FOG_ButtonUp_CB: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_CB_co.paa"
		};
	};
	class FOG_ButtonUp_Floral_YR: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_Floral_YellowRed_co.paa"
		};
	};
	class FOG_ButtonUp_Floral_BW: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_Floral_BlueWhite_co.paa"
		};
	};
    class FOG_ButtonUp_Floral_BB: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_Floral_BlackBlue_co.paa"
		};
	};
    class FOG_ButtonUp_Floral_MD: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_FloralMultiDark_co.paa"
		};
	};
    class FOG_ButtonUp_Floral_Dark: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_FloralDark_co.paa"
		};
	};
    class FOG_ButtonUp_Floral_Bright: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_FloralBright_co.paa"
		};
	};
    class FOG_ButtonUp_Flamingo1: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_Flamingoman1_co.paa"
		};
	};
    class FOG_ButtonUp_Flamingo2: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_Flamingoman2_co.paa"
		};
	};
    class FOG_ButtonUp_SkinnyPalms: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_SkinnyPalms_co.paa"
		};
	};
    class FOG_ButtonUp_Waves: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_waves_co.paa"
		};
	};
    class FOG_ButtonUp_SunsetPalms: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_SunsetPalms_co.paa"
		};
	};
    class FOG_ButtonUp_Clouds: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_clouds_co.paa"
		};
	};
    class FOG_ButtonUp_MC: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_MC_co.paa"
		};
	};
    class FOG_ButtonUp_MCB: FOG_ButtonUp_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ButtonUp_Short\data\ButtonUp_MCB_co.paa"
		};
	};
};