	class CfgPatches
{
	class FOG_Masks_MSAMillenium
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
    class FOG_MSAMillenium_Gasmask_Base: GasMask
	{
		scope=0;
		displayName="MSA Millenium Gasmask";
		descriptionShort="Gas Mask used by Special Warfare operators with an external filtration system. Can be used alone, but will not last long.";
		model="\FOG_MOD\Gear\Masks\MSAMillenium\FOG_GM_MSA_Millenium_G.p3d";
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
			"camo",
            "glass"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Gas_Mask.rvmat",
            "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Visor.rvmat"
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
                                "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Gas_Mask.rvmat",
                                "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Visor.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Gas_Mask.rvmat",
                                "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Visor.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Gas_Mask.rvmat",
                                "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Visor.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Gas_Mask.rvmat",
                                "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Visor.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Gas_Mask.rvmat",
                                "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Visor.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\MSAMillenium\FOG_GM_MSA_Millenium_M.p3d";
			female="\FOG_MOD\Gear\Masks\MSAMillenium\FOG_GM_MSA_Millenium_F.p3d";
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
	class FOG_MSAMillenium_Gasmask_Black: FOG_MSAMillenium_Gasmask_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Gas_Mask_co.paa",
            "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Visor_ca.paa"
        };
	};
	class FOG_MSAMillenium_Gasmask_Dark: FOG_MSAMillenium_Gasmask_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Gear\Masks\MSAMillenium\data\MSA_Millennium_Gas_Mask_co.paa",
            "#(argb,8,8,3)color(0.152941,0.152941,0.152941,1.0,CO)"
        };
	};
};