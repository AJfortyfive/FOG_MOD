class CfgPatches
{
	class FOG_MOD_Acc_FC_Torus
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
    class Inventory_Base ;
	class FOG_FC_Torus_BattPack_ColorBase : Inventory_Base 
	{
		scope = 0;
		displayName = "FC Torus Battery Pack";
		descriptionShort="The battery pack is held in a sleeve which is affixed to the helmet with Velcro and can be retained by three anchors by Ferro Concepts";
		itemsize[] = {2, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\FC_Torus_BattPack.p3d";
		attachments[]= {"BatteryD"};
		inventorySlot[] = {"SF_BattPack"};
		weight = 600;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_FC_Torus_BattPack_MC : FOG_FC_Torus_BattPack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31_mc_co.paa"};
	};
	class FOG_FC_Torus_BattPack_MCB : FOG_FC_Torus_BattPack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31_mcb_co.paa"};
	};
	class FOG_FC_Torus_BattPack_Black : FOG_FC_Torus_BattPack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31_black_co.paa"};
	};
	class FOG_FC_Torus_BattPack_CB : FOG_FC_Torus_BattPack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31_cb_co.paa"};
	};
	class FOG_FC_Torus_BattPack_RG : FOG_FC_Torus_BattPack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\data\Ferro31_rg_co.paa"};
	};
};