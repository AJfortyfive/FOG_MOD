class CfgPatches
{
	class FOG_Mustache_Stuff
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
	class FOG_Mustache_ColorBase: Clothing
	{
        scope=0;
		displayName="Mustache";
		descriptionShort="Instantly grow a stache that would make Ron Jeremy jealous.";
		model="\FOG_MOD\Gear\Masks\Mustache\Mustache_G.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Mask"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=5;
		itemSize[]={2,2};
		varWetMax=0.249;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		heatIsolation=0.8;
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\Mustache\data\Mustache.rvmat"
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
								"FOG_MOD\Gear\Masks\Mustache\data\Mustache.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\Mustache\data\Mustache.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\Mustache\data\Mustache_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\Mustache\data\Mustache_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\Mustache\data\Mustache_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\Mustache\Mustache_MF.p3d";
			female="\FOG_MOD\Gear\Masks\Mustache\Mustache_MF.p3d";
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
	class FOG_Mustache_Brown: FOG_Mustache_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Mustache\data\Mustache_Brown_co.paa"
		};
	};
};