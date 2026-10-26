class CfgPatches
{
	class FOG_Helmet_Accessories_MK1Pack
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
	class FOG_SF_BatteryPack_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "FAST SF Battery Pack";
		descriptionShort="Battery Pack with an accompanying Helstar IR Strobe.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\MK1BatteryPack\Fast_SF_Battery_Pack.p3d";
		inventorySlot[] = {"SF_BattPack"};
		attachments[]={"FOG_small_patch","BatteryD"};
		weight = 50;
		hiddenSelections[]={"batterypack","helstar3"};
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
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\SF_BatteryPack.rvmat",
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\SF_BatteryPack.rvmat",
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\SF_BatteryPack_damage.rvmat",
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\SF_BatteryPack_damage.rvmat",
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\SF_BatteryPack_destruct.rvmat",
								"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar.rvmat"
							}
						}
					};
				};
			};
        };
	};
	class FOG_SF_BatteryPack_Tan : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_tan_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_CB : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_cb_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_RG : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_rg_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_Black : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_blk_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_Grey : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_grey_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_White : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_white_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_MC : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_mc_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_MCB : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_mcb_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_MCT : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_mct_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
	class FOG_SF_BatteryPack_DPM : FOG_SF_BatteryPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\battery_pack_dpm_co.paa","FOG_MOD\Helmets\Accessories\MK1BatteryPack\data\helstar_co.paa"};
	};
};