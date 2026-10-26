	class CfgPatches
{
	class FOG_Masks_OpscoreSOTR
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
    class FOG_OpsCore_SOTR_Base: GasMask
	{
		scope=0;
		displayName="OpsCore SOTR";
		descriptionShort="The OpsCore half-mask Special Operations Tactical Respirator, intended for ground applications, is designed to provide protection against a wide range of contaminants. Can be used alone, but will not last long.";
		model="\FOG_MOD\Gear\Masks\OpscoreSOTR\FOG_OpscoreSOTR_G.p3d";
		inventorySlot[]=
		{
			"Mask"
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
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\OpscoreSOTR\data\opscore_sotr.rvmat"
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
								"FOG_MOD\Gear\Masks\OpscoreSOTR\data\opscore_sotr.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\OpscoreSOTR\data\opscore_sotr.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\OpscoreSOTR\data\opscore_sotr.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\OpscoreSOTR\data\opscore_sotr.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\OpscoreSOTR\data\opscore_sotr.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\OpscoreSOTR\FOG_OpscoreSOTR_M.p3d";
			female="\FOG_MOD\Gear\Masks\OpscoreSOTR\FOG_OpscoreSOTR_M.p3d";
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
	class FOG_OpsCore_SOTR: FOG_OpsCore_SOTR_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Masks\OpscoreSOTR\data\opscore_sotr_co.paa"};
	};
};
