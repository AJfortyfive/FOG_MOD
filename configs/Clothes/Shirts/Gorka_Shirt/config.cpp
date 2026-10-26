class CfgPatches
{
	class FOG_Gorka_Jacket_Shit
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
	class FOG_Gorka_Jacket_ColorBase: Clothing
	{
		displayName="Gorka Jacket";
		descriptionShort="Soviet Era, Spetsnaz cold weather uniform jacket.";
		model="\FOG_MOD\Clothes\Shirts\Gorka_Shirt\Gorka_Shirt_G.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=600;
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};
		quickBarBonus=2;
		ragQuantity=3;
		varWetMax=0.249;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo_shirt",
			"camo_pads"
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
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_Shirt.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_Shirt.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_Shirt_damage.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_Shirt_damage.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_Shirt_destruct.rvmat",
								"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\Gorka_pads_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\Gorka_Shirt\Gorka_Shirt_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\Gorka_Shirt\Gorka_Shirt_F.p3d";
		};
		class Protection
		{
			chemical=0.25;
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
	class FOG_Gorka_Jacket_Khaki: FOG_Gorka_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\spetsnaz_shirt_khaki_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
	class FOG_Gorka_Jacket_Black: FOG_Gorka_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\spetsnaz_shirt_Black_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
	class FOG_Gorka_Jacket_Green: FOG_Gorka_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\spetsnaz_shirt_green_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
	class FOG_Gorka_Jacket_Partizan: FOG_Gorka_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\spetsnaz_shirt_Partizan_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
	class FOG_Gorka_Jacket_Autumn: FOG_Gorka_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\spetsnaz_shirt_Autmn_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
	class FOG_Gorka_Jacket_Summer: FOG_Gorka_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\spetsnaz_shirt_Summer_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
	class FOG_Gorka_Jacket_White: FOG_Gorka_Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\spetsnaz_shirt_White_co.paa",
			"FOG_MOD\Clothes\Shirts\Gorka_Shirt\data\kneepads_black_co.paa"
		};
	};
};