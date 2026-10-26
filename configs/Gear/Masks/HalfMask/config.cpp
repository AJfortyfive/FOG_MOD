class CfgPatches
{
	class FOG_Masks_HalfMask
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
	class FOG_HalfMask_ColorBase: Clothing
	{
        scope=0;
		displayName="Half Mask";
		descriptionShort="when the residents become evil, wear this to conceal your identity. Its kinda warm too.";
		model="\FOG_MOD\Gear\Masks\HalfMask\FOG_HalfMask_G.p3d";
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
		weight=100;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.75;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_BandanaFace"
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
								"FOG_MOD\Gear\Masks\HalfMask\Data\halfmask.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\HalfMask\Data\halfmask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\HalfMask\Data\halfmask.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\HalfMask\Data\halfmask_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\HalfMask\Data\halfmask_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\HalfMask\FOG_HalfMask_M.p3d";
			female="\FOG_MOD\Gear\Masks\HalfMask\FOG_HalfMask_F.p3d";
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
	class FOG_HalfMask_Grey: FOG_HalfMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\HalfMask\data\halfmask_co.paa"
		};
	};
	class FOG_HalfMask_Black: FOG_HalfMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\HalfMask\data\halfmask_black_co.paa"
		};
	};
	class FOG_HalfMask_White: FOG_HalfMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\HalfMask\data\halfmask_white_co.paa"
		};
	};
	class FOG_HalfMask_RG: FOG_HalfMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\HalfMask\data\halfmask_RG_co.paa"
		};
	};
	class FOG_HalfMask_CB: FOG_HalfMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\HalfMask\data\halfmask_CB_co.paa"
		};
	};
};