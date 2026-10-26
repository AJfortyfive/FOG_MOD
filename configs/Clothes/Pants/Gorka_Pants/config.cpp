class CfgPatches
{
	class FOG_Gorka_Pants_Shit
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
	class FOG_Gorka_Pants_ColorBase: Clothing
	{
		displayName="Gorka Pants";
		descriptionShort="Soviet Era, Spetsnaz cold weather uniform trousers.";
		model="\FOG_MOD\Clothes\Pants\Gorka_Pants\Gorka_Pants_G.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot[]=
		{
			"Legs"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		weight=300;
		ragQuantity=3;
		varWetMax=0.249;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camo_pants",
			"camo_pads"
		};
		hiddenSelectionsTextures[]={};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Pants\Gorka_Pants\Gorka_Pants_M.p3d";
			female="\FOG_MOD\Clothes\Pants\Gorka_Pants\Gorka_Pants_F.p3d";
		};
		class Protection
		{
			chemical=0.25;
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
								"FOG_MOD\Clothes\Pants\Gorka_Pants\data\Gorka_Pants.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\Gorka_Pants\data\Gorka_Pants.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\Gorka_Pants\data\Gorka_Pants_damage.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\Gorka_Pants\data\Gorka_Pants_damage.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\Gorka_Pants\data\Gorka_Pants_destruct.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads_destruct.rvmat"
							}
						}
					};
				};
			};
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
	class FOG_Gorka_Pants_Khaki: FOG_Gorka_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\Gorka_Pants\data\spetsnaz_pants_khaki_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
	class FOG_Gorka_Pants_Black: FOG_Gorka_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\Gorka_Pants\data\spetsnaz_pants_Black_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
	class FOG_Gorka_Pants_White: FOG_Gorka_Pants_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\Gorka_Pants\data\spetsnaz_pants_White_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
};