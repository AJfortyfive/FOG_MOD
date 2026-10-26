	class CfgPatches
{
	class FOG_Masks_M50Gasmask
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters", "DZ_Characters_Masks"
		};
	};
};
class CfgVehicles
{
    class GasMask;
    class FOG_M50_Gasmask_Base: GasMask
	{
		scope=0;
		displayName="M50 Gasmask";
		descriptionShort="Gas Mask used by Special Warfare operators with an external filtration system. Can be used alone, but will not last long.";
		model="\FOG_MOD\Gear\Masks\M50_Gasmask\FOG_M50_G.p3d";
		inventorySlot[]=
		{
			"Mask",
            "FOG_M50_Belt"
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
		varWetMax=0.49000001;
		heatIsolation=0.60000002;
		visibilityModifier=0.89999998;
		noNVStrap=0;
        noMask=1;
		noHelmet=0;
		noEyewear=1;
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
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\M50_Gasmask\data\M50.rvmat"
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
								"FOG_MOD\Gear\Masks\M50_Gasmask\data\M50.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\M50_Gasmask\data\M50.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\M50_Gasmask\data\M50_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\M50_Gasmask\data\M50_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\M50_Gasmask\data\M50_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\M50_Gasmask\FOG_M50.p3d";
			female="\FOG_MOD\Gear\Masks\M50_Gasmask\FOG_M50.p3d";
		};
		class Protection
		{
			biological=1;
			chemical=1;
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
	class FOG_M50_Gasmask_Black: FOG_M50_Gasmask_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Masks\M50_Gasmask\data\M50_black_co.paa"};
	};
};
