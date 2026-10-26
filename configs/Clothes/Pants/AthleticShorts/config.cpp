class CfgPatches
{
	class FOG_MOD_Pants_AthleticShorts
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
	class FOG_AthleticShorts_Base: Clothing
	{
		displayName="Athletic Shorts";
		descriptionShort="Just some athletic shorts for working out in.";
		model="\FOG_MOD\Clothes\Pants\AthleticShorts\FOG_AthleticShorts_G.p3d";
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
		varWetMax=0.8;
		heatIsolation=0.2;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo",
            "camo_acc",
            "personality"
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
								"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts.rvmat",
                                "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts.rvmat",
                                "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts.rvmat",
                                "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_damage.rvmat",
                                "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_destruct.rvmat",
                                "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_destruct.rvmat"
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
			male="\FOG_MOD\Clothes\Pants\AthleticShorts\FOG_AthleticShorts_M.p3d";
			female="\FOG_MOD\Clothes\Pants\AthleticShorts\FOG_AthleticShorts_F.p3d";
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
	class FOG_AthleticShorts_Black: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Black_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_Grey: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Grey_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_White: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_White_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_Red: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Red_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_CB: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_CB_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_Tan: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Tan_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_RG: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_RG_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_Ranger: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Ranger_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_MC: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_MC_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_MCB: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_MCB_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
	class FOG_AthleticShorts_M81: FOG_AthleticShorts_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_M81_co.paa",
            "FOG_MOD\Clothes\Pants\AthleticShorts\data\AthleticShorts_Spandex_Black_co.paa"
		};
	};
};