class CfgPatches
{
	class FOG_Helmet_Accessories_IR_Marker
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
	class FOG_IR_Marker_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "IR_Marker";
		descriptionShort="Goes on your helmet, idk if it works though, probably just for the roleplayers. Goes on your helmets Battery Pack slot.";
		itemsize[] = {2, 1};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\IR_Marker\FOG_IR_Marker.p3d";
		inventorySlot[] = {"SF_BattPack"};
		weight = 50;
		hiddenSelections[]={"camo"};
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
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
								"FOG_MOD\Helmets\Accessories\IR_Marker\data\IR_Marker.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\IR_Marker\data\IR_Marker.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\IR_Marker\data\IR_Marker.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\IR_Marker\data\IR_Marker.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\IR_Marker\data\IR_Marker.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_IR_Marker : FOG_IR_Marker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FOG_MOD\Helmets\Accessories\IR_Marker\data\IR_Marker_co.paa"};
	};
};