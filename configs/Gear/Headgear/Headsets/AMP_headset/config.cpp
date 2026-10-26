class CfgPatches
{
	class FOG_Gear_Headsets_AMP
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
	class FOG_AMP_Headset_ColorBase: Clothing
	{
        scope=0;
		displayName="Opscore Amp Headset";
		descriptionShort="Opscore Amp standalone earpro.";
		model="\FOG_MOD\Gear\Headgear\Headsets\AMP_headset\FOG_AMP_Headset_G.p3d";
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
		inventorySlot[]=
		{
			"Headgear",
            "Mask",
            "FOG_Headset_slot"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=50;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.2;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\Headsets\AMP_headset\FOG_AMP_Headset_M.p3d";
			female="\FOG_MOD\Gear\Headgear\Headsets\AMP_headset\FOG_AMP_Headset_F.p3d";
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
	class FOG_AMP_Headset_Tan: FOG_AMP_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS_TAN_co.paa"
		};
	};
	class FOG_AMP_Headset_Black: FOG_AMP_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS_BLK_co.paa"
		};
	};
	class FOG_AMP_Headset_Grey: FOG_AMP_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS_GRY_co.paa"
		};
	};
	class FOG_AMP_Headset_RG: FOG_AMP_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Headsets\AMP_headset\data\OpsCore_AMPS_RG_co.paa"
		};
	};
};