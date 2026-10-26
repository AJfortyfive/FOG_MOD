class CfgPatches
{
	class FOG_Pants_UFProHT
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters","DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Pants_UFProHT_ColorBase: Clothing
	{
		displayName="UFPro HT Pants";
		descriptionShort="UF Pro HT Gen 2 Pants.";
		model="\FOG_MOD\Clothes\Pants\UFProHT\FOG_UFProHT_G.p3d";
		inventorySlot[]=
		{
			"Legs"
		};
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		varWetMax=0.7;
		heatIsolation=0.7;
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
								"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.85000002;
					};
					class Blood
					{
						damage=0.85000002;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.85000002;
					};
					class Blood
					{
						damage=0.85000002;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Pants\UFProHT\FOG_UFProHT_M.p3d";
			female="\FOG_MOD\Clothes\Pants\UFProHT\FOG_UFProHT_F.p3d";
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
	class FOG_Pants_UFProHT_Black: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_Black_co.paa"
		};
	};
	class FOG_Pants_UFProHT_Grey: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_Grey_co.paa"
		};
	};
	class FOG_Pants_UFProHT_RG: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_RG_co.paa"
		};
	};
	class FOG_Pants_UFProHT_CB: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_CB_co.paa"
		};
	};
	class FOG_Pants_UFProHT_White: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_White_co.paa"
		};
	};
	class FOG_Pants_UFProHT_M81: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_M81_co.paa"
		};
	};
	class FOG_Pants_UFProHT_MC: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_MC_co.paa"
		};
	};
	class FOG_Pants_UFProHT_MCB: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_MCB_co.paa"
		};
	};
	class FOG_Pants_UFProHT_MCT: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_MCT_co.paa"
		};
	};
	class FOG_Pants_UFProHT_MCA: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_MCA_co.paa"
		};
	};
	class FOG_Pants_UFProHT_MCAL: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_MCAL_co.paa"
		};
	};
	class FOG_Pants_UFProHT_AOR1: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_AOR1_co.paa"
		};
	};
	class FOG_Pants_UFProHT_AOR2: FOG_Pants_UFProHT_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\UFProHT\data\UFPro_HT_G2_AOR2_co.paa"
		};
	};
};