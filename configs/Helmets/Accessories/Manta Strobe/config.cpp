class CfgPatches
{
	class FOG_Helmet_Accessories_MantaStrobe
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
	class FOG_Manta_Strobe_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Manta Strobe";
		descriptionShort="JTAC stuff. Goes on your helmets Battery Pack slot";
		itemsize[] = {2, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\Manta Strobe\FOG_Manta.p3d";
		inventorySlot[] = {"SF_BattPack"};
		weight = 50;
		hiddenSelections[]={"camo"};
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
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
								"FOG_MOD\Helmets\Accessories\Manta Strobe\data\Manta_strobe.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\Manta Strobe\data\Manta_strobe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\Manta Strobe\data\Manta_strobe.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\Manta Strobe\data\Manta_strobe.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\Manta Strobe\data\Manta_strobe.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Manta_Strobe_Tan : FOG_Manta_Strobe_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FOG_MOD\Helmets\Accessories\Manta Strobe\data\acc_soc_manta_co.paa"};
	};
};