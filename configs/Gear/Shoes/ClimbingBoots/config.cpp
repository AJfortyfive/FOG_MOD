class CfgPatches
{
	class FOG_MOD_Shoes_ClimbingBoots
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
	class FOG_ClimbingBoots_ColorBase: Clothing
	{
		displayName="Climbing Boots";
		descriptionShort="High-quality climbing boots designed for rugged terrain and extreme conditions. These boots provide excellent grip, support, and protection for your feet during climbing activities.";
		model="\FOG_MOD\Gear\Shoes\ClimbingBoots\FOG_ClimbingBoots_G.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		itemSize[]={3,3};
		weight=1350;
		durability=0.5;
		varWetMax=0.3;
		heatIsolation=0.9;
		visibilityModifier=0.89999998;
		repairableWithKits[]={3};
		repairCosts[]={25};
		soundAttType="Boots";
		soundImpactType="default";
		hiddenSelections[]=
		{
			"camo"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Shoes\ClimbingBoots\FOG_ClimbingBoots_M.p3d";
			female="\FOG_MOD\Gear\Shoes\ClimbingBoots\FOG_ClimbingBoots_F.p3d";
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
								"FOG_MOD\Gear\Shoes\ClimbingBoots\Data\ClimbingBoots.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Shoes\ClimbingBoots\Data\ClimbingBoots.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Shoes\ClimbingBoots\Data\ClimbingBoots.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Shoes\ClimbingBoots\Data\ClimbingBoots_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Shoes\ClimbingBoots\Data\ClimbingBoots_destruct.rvmat"
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
						damage=0.75;
					};
					class Blood
					{
						damage=0.60000002;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0.60000002;
					};
					class Shock
					{
						damage=0.75;
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
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_ClimbingBoots_Brown: FOG_ClimbingBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\FOG_MOD\Gear\Shoes\ClimbingBoots\data\ClimbingBoots_co.paa"
		};
	};
};