class CfgPatches 
{
	class FOG_Gear_Vest_SSMK4
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts","DZ_Characters_Vests"};
	};
};

class cfgVehicles 
{
	class Clothing;
	class FOG_Vest_SSMK4_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "Spiritus Systems MK4";
		descriptionShort = "The Spiritus Systems Micro Fight Chassis MK4 was designed to be extremely efficient, modular, and lightweight. Performing as a stand-alone system, It can be configured for wear in low visibility environments that require minimal printing through clothing with maximum equipment storage. It can also be configured for high visibility operations where a full spectrum of equipment is required.";
		model = "FOG_MOD\Vests\Unarmored\SSMK4\FOG_SSMK4_G.p3d";
		attachments[]=
		{
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"FOG_vest_belly"
		};
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 3;
		weight = 1000;
		itemSize[] = {3, 3};
        itemsCargoSize[] = {10, 2};
        varWetMax=0.249;
		heatIsolation=0.3;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo_base","camo_radiopouch"};
        simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm.rvmat",
            "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_radio.rvmat"
		};	
		class ClothingTypes 
        {
			male = "FOG_MOD\Vests\Unarmored\SSMK4\FOG_SSMK4_M.p3d";
			female = "FOG_MOD\Vests\Unarmored\SSMK4\FOG_SSMK4_F.p3d";
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
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm.rvmat",
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_radio.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm.rvmat",
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_radio.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm_damage.rvmat",
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_radio_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm_damage.rvmat",
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_radio_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm_destruct.rvmat",
                                "FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_radio_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents 
        {
			class SoundWeapon 
            {
				class pickUpItem 
                {
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				
				class drop {
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FOG_Vest_SSMK4_CB: FOG_Vest_SSMK4_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_cb_co.paa",
			"FOG_MOD\Vests\Unarmored\SSMK4\data\radio_cb_co.paa"
		};
	};
    class FOG_Vest_SSMK4_RG: FOG_Vest_SSMK4_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_RG_co.paa",
			"FOG_MOD\Vests\Unarmored\SSMK4\data\radio_od_co.paa"
		};
	};
    class FOG_Vest_SSMK4_Black: FOG_Vest_SSMK4_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_blk_co.paa",
			"FOG_MOD\Vests\Unarmored\SSMK4\data\radio_black_co.paa"
		};
	};
    class FOG_Vest_SSMK4_Grey: FOG_Vest_SSMK4_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_wg_co.paa",
			"FOG_MOD\Vests\Unarmored\SSMK4\data\radio_grey_co.paa"
		};
	};
    class FOG_Vest_SSMK4_MC: FOG_Vest_SSMK4_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_MC_co.paa",
			"FOG_MOD\Vests\Unarmored\SSMK4\data\radio_mc_co.paa"
		};
	};
    class FOG_Vest_SSMK4_MCA: FOG_Vest_SSMK4_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_MCA_co.paa",
			"FOG_MOD\Vests\Unarmored\SSMK4\data\radio_cb_co.paa"
		};
	};
    class FOG_Vest_SSMK4_MCT: FOG_Vest_SSMK4_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_MCTP_co.paa",
			"FOG_MOD\Vests\Unarmored\SSMK4\data\radio_od_co.paa"
		};
	};
    class FOG_Vest_SSMK4_M81: FOG_Vest_SSMK4_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_M81_co.paa",
			"FOG_MOD\Vests\Unarmored\SSMK4\data\radio_od_co.paa"
		};
	};
};