	class CfgPatches
{
	class FOG_MOD_Masks_AVONM53
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters", "DZ_Characters_Masks","FOG_MOD_Slots","FOG_MOD_Scripts"
		};
	};
};
class CfgVehicles
{
    class GasMask;
    class FOG_AVONM53_Gasmask_Base: GasMask
	{
		scope=0;
		displayName="AVON M53A1 Gasmask";
		descriptionShort="Gas Mask used by Special Warfare operators with an external filtration system. Can be used alone, but will not last long.";
		model="\FOG_MOD\Gear\Masks\AVON_M53A1\FOG_AVON_M53A1_G.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		attachments[]=
		{
			"FOG_C420_PAPR"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		repairableWithKits[]={8,6};
		repairCosts[]={30,25};
		rotationFlags=2;
		weight=730;
		itemSize[]={3,4};
		varWetMax=0.5;
		heatIsolation=0.7;
		visibilityModifier=0.9;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		varQuantityInit=225;
		varQuantityMin=0;
		varQuantityMax=225;
		quantityBar=1;
		stackedUnit="ml";
		varQuantityDestroyOnMin=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"camo_glass",
            "camo_mask"
		};
		simpleHiddenSelections[] = 
        {
			"selection_filter",
            "selection_hose"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask_glass.rvmat",
            "FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask.rvmat"
		};
		class Protection
		{
			biological=1;
			chemical=1;
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
							
							{}
						},
						
						{
							0.7,
							
							{}
						},
						
						{
							0.5,
							
							{}
						},
						
						{
							0.3,
							
							{}
						},
						
						{
							0.0,
							
							{}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\AVON_M53A1\FOG_AVON_M53A1_M.p3d";
			female="\FOG_MOD\Gear\Masks\AVON_M53A1\FOG_AVON_M53A1_M.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundImpactType="plastic";
		soundVoiceType="gasmask";
		soundVoicePriority=5;
	};
	class FOG_AVONM53_Black: FOG_AVONM53_Gasmask_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "#(argb,8,8,3)color(0,0,0,1,CO)",
            "FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask_Black_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\AVON_M53A1\data\glassblack.rvmat",
            "FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask.rvmat"
		};
	};
	class FOG_AVONM53_Red: FOG_AVONM53_Gasmask_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "#(argb,8,8,3)color(1,0,0,1,CO)",
            "FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask_Black_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\AVON_M53A1\data\glassred.rvmat",
            "FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask.rvmat"
		};
	};
	class FOG_AVONM53_Clear: FOG_AVONM53_Gasmask_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "#(argb,8,8,3)color(0,0,0,0.5,co)",
            "FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask_Black_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask_glass.rvmat",
            "FOG_MOD\Gear\Masks\AVON_M53A1\data\M53A1_Mask.rvmat"
		};
	};
	class Inventory_Base;
	class FOG_C420PAPR_Filter : Inventory_Base 
	{
		scope = 2;
		displayName = "C420 PAPR Filter";
		descriptionShort="A filtration device for the AVON M53A1 gas mask.";
		itemsize[] = {2, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Gear\Masks\AVON_M53A1\FOG_C420_PAPR_Filter.p3d";
		weight = 100;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		quantityBar=1;
		varQuantityDestroyOnMin=0;
		varWetMax=0.249;
		inventorySlot[]=
		{
			"FOG_C420_PAPR"
		};
		class Protection
		{
			biological=1;
			chemical=1;
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
								"FOG_MOD\Gear\Masks\AVON_M53A1\data\C420_PAPR_Filter.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\AVON_M53A1\data\C420_PAPR_Filter.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\AVON_M53A1\data\C420_PAPR_Filter.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\AVON_M53A1\data\C420_PAPR_Filter.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\AVON_M53A1\data\C420_PAPR_Filter.rvmat"
							}
						}
					};
				};
			};
        };
    };
};