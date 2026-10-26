class CfgPatches
{
	class FOG_MOD_SoftCap
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
	class FOG_SoftCap_ColorBase: Clothing
	{
        scope=0;
		displayName="Patrol Cap";
		descriptionShort="Standard Issue US Army Softcap, typically worn parallel with the marching surface, displaying the wearers rank and last name sewn on as patches.";
		model="\FOG_MOD\Gear\Headgear\SoftCap\FOG_SoftCap_G.p3d";
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
			"Headgear"
		};
		weight=10;
		itemSize[]={3,2};
        varWetMax=0.6;
		heatIsolation=0.3;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Gear\Headgear\SoftCap\data\softcap.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\SoftCap\data\softcap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\SoftCap\data\softcap.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\SoftCap\data\softcap_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\SoftCap\data\softcap_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\SoftCap\FOG_SoftCap_M.p3d";
			female="\FOG_MOD\Gear\Headgear\SoftCap\FOG_SoftCap_F.p3d";
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
	class FOG_SoftCap_MC: FOG_SoftCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\SoftCap\data\softcap_mc_blank_co.paa"
		};
	};
	class FOG_SoftCap_MCB: FOG_SoftCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\SoftCap\data\softcap_mcb_blank_co.paa"
		};
	};
	class FOG_SoftCap_Black: FOG_SoftCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\SoftCap\data\softcap_Black_co.paa"
		};
	};
	class FOG_SoftCap_Grey: FOG_SoftCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\SoftCap\data\softcap_Grey_co.paa"
		};
	};
	class FOG_SoftCap_RG: FOG_SoftCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\SoftCap\data\softcap_RG_co.paa"
		};
	};
	class FOG_SoftCap_CB: FOG_SoftCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\SoftCap\data\softcap_CB_co.paa"
		};
	};
};