class CfgPatches
{
	class FOG_Helmet_Accessories_Comtac4
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters","DZ_Characters_Headgear"
		};
	};
};
class CfgVehicles
{	
	class Inventory_Base;
	class FOG_Comtac_IV_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Comtac IV";
		descriptionShort="Headphones with Arc Rail Adapters. Designed to help reduce exposure to hazardous levels of noise, improve situational awareness and at the same time enable two-way radio communication in noisy environments. Worn on the helmet.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\ComtacPeltors4\comtac4.p3d";
		inventorySlot[] = {"SF_Comtacs"};
		weight = 50;
		hiddenSelections[]={"camo"};
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
		class AnimationSources
		{
			class arc_rotate
			{
				source="user";
				animPeriod=0.3;
				initPhase=0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
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
								"FOG_MOD\Helmets\Accessories\ComtacPeltors4\data\comtac4.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors4\data\comtac4.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors4\data\comtac4_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors4\data\comtac4_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors4\data\comtac4_destruct.rvmat"
							}
						}
					};
				};
			};
        };
	};
	class FOG_Comtac_IV_CB : FOG_Comtac_IV_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\ComtacPeltors4\data\comtac4_cb.paa"};
	};
	class FOG_Comtac_IV_RG : FOG_Comtac_IV_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\ComtacPeltors4\data\comtac4_rg.paa"};
	};
	class FOG_Comtac_IV_Black : FOG_Comtac_IV_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\ComtacPeltors4\data\comtac4_blk.paa"};
	};
};