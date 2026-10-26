class CfgPatches
{
	class FOG_MOD_Pants_ArcticPants
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
	class FOG_ArcticPants_ColorBase: Clothing
	{
		displayName="Arctic Weather Pants";
		descriptionShort="This shit'll keep ya dick warm. Put ya hand right there, you feel that heat?";
		model="\FOG_MOD\Clothes\Pants\ArcticPants\FOG_ArcticPants_G.p3d";
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
		varWetMax=0.2;
		heatIsolation=0.9;
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
								"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_destruct.rvmat"
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
			male="\FOG_MOD\Clothes\Pants\ArcticPants\FOG_ArcticPants_M.p3d";
			female="\FOG_MOD\Clothes\Pants\ArcticPants\FOG_ArcticPants_F.p3d";
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
	class FOG_ArcticPants_White: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_White_co.paa"
		};
	};
	class FOG_ArcticPants_Grey: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_Grey_co.paa"
		};
	};
	class FOG_ArcticPants_Blue: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_Blue_co.paa"
		};
	};
	class FOG_ArcticPants_Red: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_Red_co.paa"
		};
	};
	class FOG_ArcticPants_RG: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_RG_co.paa"
		};
	};
	class FOG_ArcticPants_CB: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_CB_co.paa"
		};
	};
	class FOG_ArcticPants_Black: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_Black_co.paa"
		};
	};
	class FOG_ArcticPants_MC: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_MC_co.paa"
		};
	};
	class FOG_ArcticPants_MCB: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_MCB_co.paa"
		};
	};
	class FOG_ArcticPants_MCAL: FOG_ArcticPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\ArcticPants\data\ArcticPants_MCAL_co.paa"
		};
	};
};