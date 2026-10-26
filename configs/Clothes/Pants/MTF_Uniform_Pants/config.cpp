class CfgPatches
{
	class FOG_MTF_Pants_Shit
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
	class FOG_MTF_Pants_ColorBase: Clothing
	{
		displayName="MTF Uniform Pants";
		descriptionShort="Standard issue uniform trousers worn by MTF Operators.";
		model="\FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\MTF_Pants_G.p3d";
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
								"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_destruct.rvmat"
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
			male="\FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\MTF_Pants_M.p3d";
			female="\FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\MTF_Pants_F.p3d";
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
	class FOG_MTF_Pants_Black: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_Black_co.paa"
		};
	};
	class FOG_MTF_Pants_Blue: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_Blue_co.paa"
		};
	};
	class FOG_MTF_Pants_Grey: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_Grey_co.paa"
		};
	};
	class FOG_MTF_Pants_RG: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_RG_co.paa"
		};
	};
	class FOG_MTF_Pants_OD: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_OD_co.paa"
		};
	};
	class FOG_MTF_Pants_KHK: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_KHK_co.paa"
		};
	};
	class FOG_MTF_Pants_CB: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_CB_co.paa"
		};
	};
	class FOG_MTF_Pants_ERDL: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_ERDL_co.paa"
		};
	};
	class FOG_MTF_Pants_MC: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_MC_co.paa"
		};
	};
	class FOG_MTF_Pants_MCB: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_MCB_co.paa"
		};
	};
	class FOG_MTF_Pants_FK: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_FK_co.paa"
		};
	};
	class FOG_MTF_Pants_TS: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_TS_co.paa"
		};
	};
	class FOG_MTF_Pants_White: FOG_MTF_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\MTF_Uniform_Pants\data\MTF_Pants_White_co.paa"
		};
	};
};