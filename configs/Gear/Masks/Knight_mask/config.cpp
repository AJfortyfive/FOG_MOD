class CfgPatches
{
	class FOG_Knight_Mask_Stuff
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
	class FOG_Knight_Mask_ColorBase: Clothing
	{
        scope=0;
		displayName="Knight's Mask";
		descriptionShort="This mask belongs to a very scary Raider. He'll be back for it...";
		model="\FOG_MOD\Gear\Masks\Knight_mask\FOG_Knight_Mask_G.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=100;
		itemSize[]={3,3};
		varWetMax=0.249;
		heatIsolation=0.9;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava",
            "Clipping_Mich2001"
		};
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
								"FOG_MOD\Gear\Masks\Knight_mask\Data\FOG_Knight_Mask.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\Knight_mask\Data\FOG_Knight_Mask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\Knight_mask\Data\FOG_Knight_Mask_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\Knight_mask\Data\FOG_Knight_Mask_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\Knight_mask\Data\FOG_Knight_Mask_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\Knight_mask\FOG_Knight_Mask_M.p3d";
			female="\FOG_MOD\Gear\Masks\Knight_mask\FOG_Knight_Mask_F.p3d";
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
	class FOG_Knight_Mask: FOG_Knight_Mask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Knight_mask\data\FOG_Knight_Mask_co.paa"
		};
	};
	class FOG_Knight_Mask_Black: FOG_Knight_Mask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Knight_mask\data\FOG_Knight_Mask_black_co.paa"
		};
	};
};