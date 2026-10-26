class CfgPatches
{
	class FOG_MOD_Vests_Accessories
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data","FOG_MOD_Slots"
		};
	};
};
class CfgVehicles
{
    class Container_Base;
	class Inventory_Base;
	class FOG_FlagRoll_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Flag Roll";
		descriptionShort="A rolled up flag, can attach to certain panels.";
		itemsize[] = {1, 3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\MISC\FlagRoll\FOG_FlagRoll.p3d";
		rotationFlags=17;
		inventorySlot[]=
		{
            "FOG_FlagRoll"
		};
		weight = 100;
		hiddenSelections[]=
        {
            "camo_flag",
            "camo_straps"
        };
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\rollflag.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\bungee.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\rollflag.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\bungee.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\rollflag_damage.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\bungee.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\rollflag_damage.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\bungee.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\rollflag_destruct.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\bungee.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_FlagRoll_US : FOG_FlagRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\rollflag_us_co.paa",
            "FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\bungee_co.paa"
        };
	};
	class FOG_FlagRoll_US_Black : FOG_FlagRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\rollflag_blk_us_co.paa",
            "FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\bungee_co.paa"
        };
	};
	class FOG_FlagRoll_Pirate : FOG_FlagRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\rollflag_pirate_co.paa",
            "FOG_MOD\Vests\Accessories\MISC\FlagRoll\data\bungee_co.paa"
        };
	};
	class FOG_Pouch_Admin_Small_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Admin Pouch";
		descriptionShort="Admin Pouch, only fits certain plate carriers.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\FOG_PouchRoninSmall.p3d";
		inventorySlot[]=
		{
            "TV110adminpouch",
            "TV110medkit",
            "TV110utilitypouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Admin_Small_CB : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_cb_co.paa"};
	};
	class FOG_Pouch_Admin_Small_RG : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_rg_co.paa"};
	};
	class FOG_Pouch_Admin_Small_Black : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_black_co.paa"};
	};
	class FOG_Pouch_Admin_Small_Grey : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_grey_co.paa"};
	};
	class FOG_Pouch_Admin_Small_MC : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_mc_co.paa"};
	};
	class FOG_Pouch_Admin_Small_MCB : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_mcb_co.paa"};
	};
	class FOG_Pouch_Admin_Small_MCT : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_mct_co.paa"};
	};
	class FOG_Pouch_Admin_Small_ALP : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_mcal_co.paa"};
	};
	class FOG_Pouch_Admin_Small_AOR1 : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_aor1_co.paa"};
	};
	class FOG_Pouch_Admin_Small_AOR2 : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_aor2_co.paa"};
	};
	class FOG_Pouch_Admin_Small_M81 : FOG_Pouch_Admin_Small_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\SmallAdmin\data\pouch_small_ronin_m81_co.paa"};
	};
	class FOG_Pouch_Admin_Spiritus_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Spiritus Admin Pouch";
		descriptionShort="Spiritus Admin Pouch, only fits certain plate carriers.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Pouches\FCAdminSmall\FCPC_adminpouch.p3d";
		inventorySlot[]=
		{
            "TV110adminpouch",
            "TV110medkit",
            "TV110utilitypouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Admin_Spiritus_MC : FOG_Pouch_Admin_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MC_co.paa"};
	};
	class FOG_Pouch_Admin_Spiritus_MCB : FOG_Pouch_Admin_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MCB_co.paa"};
	};
	class FOG_Pouch_Admin_Spiritus_M81 : FOG_Pouch_Admin_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_M81_co.paa"};
	};
	class FOG_Pouch_Admin_Spiritus_Black : FOG_Pouch_Admin_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_Black_co.paa"};
	};
	class FOG_Pouch_Admin_Spiritus_CB : FOG_Pouch_Admin_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_CB_co.paa"};
	};
	class FOG_Pouch_Admin_Spiritus_RG : FOG_Pouch_Admin_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_RG_co.paa"};
	};
	class FOG_Pouch_Tall_Spiritus_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Spiritus Tall Admin Pouch";
		descriptionShort="Spiritus Systems Admin Pouch, only taller.";
		itemsize[] = {3, 4};
		itemsCargoSize[] = {3,4};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Pouches\SpiritusTall\FOG_SpiritusTallPouch.p3d";
		inventorySlot[]=
		{
            "TV110adminpouch",
            "TV110medkit",
            "TV110utilitypouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Tall_Spiritus_MC : FOG_Pouch_Tall_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MC_co.paa"};
	};
	class FOG_Pouch_Tall_Spiritus_MCB : FOG_Pouch_Tall_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MCB_co.paa"};
	};
	class FOG_Pouch_Tall_Spiritus_M81 : FOG_Pouch_Tall_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_M81_co.paa"};
	};
	class FOG_Pouch_Tall_Spiritus_Black : FOG_Pouch_Tall_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_Black_co.paa"};
	};
	class FOG_Pouch_Tall_Spiritus_CB : FOG_Pouch_Tall_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_CB_co.paa"};
	};
	class FOG_Pouch_Tall_Spiritus_RG : FOG_Pouch_Tall_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_RG_co.paa"};
	};
	class FOG_Pouch_Mutant_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Spiritus Systems Mutant Pouch";
		descriptionShort="Spiritus Systems Mutant General Purpose Pouch, only fits certain plate carriers.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Pouches\Mutant\FOG_Pouch_Mutant.p3d";
		inventorySlot[]=
		{
            "TV110adminpouch",
            "TV110medkit",
            "TV110utilitypouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mutant_CB : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_CB_co.paa"};
	};
	class FOG_Pouch_Mutant_RG : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_RG_co.paa"};
	};
	class FOG_Pouch_Mutant_Black : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_black_co.paa"};
	};
	class FOG_Pouch_Mutant_Grey : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_grey_co.paa"};
	};
	class FOG_Pouch_Mutant_White : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_white_co.paa"};
	};
	class FOG_Pouch_Mutant_MC : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_mc_co.paa"};
	};
	class FOG_Pouch_Mutant_MCB : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_mcb_co.paa"};
	};
	class FOG_Pouch_Mutant_MCT : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_mct_co.paa"};
	};
	class FOG_Pouch_Mutant_MCA : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_MCA_co.paa"};
	};
	class FOG_Pouch_Mutant_MCAL : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_mcal_co.paa"};
	};
	class FOG_Pouch_Mutant_AOR1 : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_aor1_co.paa"};
	};
	class FOG_Pouch_Mutant_AOR2 : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_aor2_co.paa"};
	};
	class FOG_Pouch_Mutant_M81 : FOG_Pouch_Mutant_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\Mutant\data\Mutant_Pouch_m81_co.paa"};
	};
	class FOG_Pouch_JSTA_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Spiritus Systems JSTA Pouch";
		descriptionShort="Spiritus Systems JSTA General Purpose Pouch, only fits certain plate carriers.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Pouches\JSTA\FOG_Pouch_JSTA.p3d";
		inventorySlot[]=
		{
            "TV110adminpouch",
            "TV110medkit",
            "TV110utilitypouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_JSTA_CB : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_CB_co.paa"};
	};
	class FOG_Pouch_JSTA_RG : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_RG_co.paa"};
	};
	class FOG_Pouch_JSTA_Black : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_black_co.paa"};
	};
	class FOG_Pouch_JSTA_Grey : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_grey_co.paa"};
	};
	class FOG_Pouch_JSTA_White : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_white_co.paa"};
	};
	class FOG_Pouch_JSTA_MC : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_mc_co.paa"};
	};
	class FOG_Pouch_JSTA_MCB : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_mcb_co.paa"};
	};
	class FOG_Pouch_JSTA_MCT : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_mct_co.paa"};
	};
	class FOG_Pouch_JSTA_MCA : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_MCA_co.paa"};
	};
	class FOG_Pouch_JSTA_MCAL : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_mcal_co.paa"};
	};
	class FOG_Pouch_JSTA_AOR1 : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_aor1_co.paa"};
	};
	class FOG_Pouch_JSTA_AOR2 : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_aor2_co.paa"};
	};
	class FOG_Pouch_JSTA_M81 : FOG_Pouch_JSTA_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\JSTA\data\JTSA_Pouch_m81_co.paa"};
	};
	class FOG_Pouch_Belly_Base : Container_Base 
	{
		scope = 0;
		displayName = "Shaw Dangler";
		descriptionShort="Belly Bag, only fits certain plate carriers.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Belly\BellyPouch\FOG_JPC_BellyPouch.p3d";
		inventorySlot[] = {"FOG_vest_belly"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\bellypouch.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\bellypouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\bellypouch_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\bellypouch_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\bellypouch_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Belly_Black : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_black_co.paa"};
	};
	class FOG_Pouch_Belly_CB : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_cb_co.paa"};
	};
	class FOG_Pouch_Belly_RG : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_rg_co.paa"};
	};
	class FOG_Pouch_Belly_Grey : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_grey_co.paa"};
	};
	class FOG_Pouch_Belly_White : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_white_co.paa"};
	};
	class FOG_Pouch_Belly_MC : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_mc_co.paa"};
	};
	class FOG_Pouch_Belly_MCB : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_mcb_co.paa"};
	};
	class FOG_Pouch_Belly_MCT : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_mct_co.paa"};
	};
	class FOG_Pouch_Belly_MCA : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_mca_co.paa"};
	};
	class FOG_Pouch_Belly_MCAL : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_mcal_co.paa"};
	};
	class FOG_Pouch_Belly_AOR1 : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_aor1_co.paa"};
	};
	class FOG_Pouch_Belly_AOR2 : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_aor2_co.paa"};
	};
	class FOG_Pouch_Belly_DNC : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_dnc_co.paa"};
	};
	class FOG_Pouch_Belly_M81 : FOG_Pouch_Belly_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\BellyPouch\data\ShawDangler_m81_co.paa"};
	};
	class FOG_Pouch_FannyPack_Base : Container_Base 
	{
		scope = 0;
		displayName = "Fanny Pack";
		descriptionShort="A Fanny Pack, wear it on your belt.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Belly\FannyPack\FOG_Fanny.p3d";
		inventorySlot[] = {"FOG_FannyPack"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\fanny.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\fanny.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\fanny.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\fanny_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\fanny_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_FannyPack_Black : FOG_Pouch_FannyPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\Fanny_Black_co.paa"};
	};
	class FOG_Pouch_FannyPack_RG : FOG_Pouch_FannyPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\Fanny_RG_co.paa"};
	};
	class FOG_Pouch_FannyPack_CB : FOG_Pouch_FannyPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\Fanny_CB_co.paa"};
	};
	class FOG_Pouch_FannyPack_KHK : FOG_Pouch_FannyPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\Fanny_KHK_co.paa"};
	};
	class FOG_Pouch_FannyPack_MC : FOG_Pouch_FannyPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\Fanny_MC_co.paa"};
	};
	class FOG_Pouch_FannyPack_MCB : FOG_Pouch_FannyPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\Fanny_MCB_co.paa"};
	};
	class FOG_Pouch_FannyPack_AOR2 : FOG_Pouch_FannyPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\Fanny_AOR2_co.paa"};
	};
	class FOG_Pouch_FannyPack_M81 : FOG_Pouch_FannyPack_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FannyPack\data\Fanny_M81_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_Base : Container_Base 
	{
		scope = 0;
		displayName = "Spiritus Systems Dangler";
		descriptionShort="Spiritus Systems Dangler, only fits certain plate carriers.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\FOG_spiritusbelly.p3d";
		inventorySlot[] = {"FOG_vest_belly"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Belly_Spiritus_Black : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_Black_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_Grey : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_Grey_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_White : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_White_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_CB : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_CB_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_RG : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_RG_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_MC : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_MC_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_MCB : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_MCB_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_MCA : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_MCA_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_MCAL : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_MCAL_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_MCT : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_MCT_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_AOR1 : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_AOR1_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_AOR2 : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_AOR2_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_DNC : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_DNC_co.paa"};
	};
	class FOG_Pouch_Belly_Spiritus_M81 : FOG_Pouch_Belly_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusBelly\data\Pouch_SS_Dangler_M81_co.paa"};
	};
	class FOG_Pouch_FerroDangler_Base : Container_Base 
	{
		scope = 0;
		displayName = "Ferro Concepts Dangler";
		descriptionShort="Belly Bag, only fits certain plate carriers.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {4,2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Belly\FerroDangler\FOG_Ferro_Dangler.p3d";
		inventorySlot[] = {"FOG_vest_belly"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_FerroDangler_Black : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_Black_co.paa"};
	};
	class FOG_Pouch_FerroDangler_CB : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_CB_co.paa"};
	};
	class FOG_Pouch_FerroDangler_RG : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_RG_co.paa"};
	};
	class FOG_Pouch_FerroDangler_Grey : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_Grey_co.paa"};
	};
	class FOG_Pouch_FerroDangler_MC : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_MC_co.paa"};
	};
	class FOG_Pouch_FerroDangler_MCB : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_MCB_co.paa"};
	};
	class FOG_Pouch_FerroDangler_MCT : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_MCT_co.paa"};
	};
	class FOG_Pouch_FerroDangler_MCAL : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_MCAL_co.paa"};
	};
	class FOG_Pouch_FerroDangler_AOR1 : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_AOR1_co.paa"};
	};
	class FOG_Pouch_FerroDangler_AOR2 : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_AOR2_co.paa"};
	};
	class FOG_Pouch_FerroDangler_DNC : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_DNC_co.paa"};
	};
	class FOG_Pouch_FerroDangler_M81 : FOG_Pouch_FerroDangler_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\FerroDangler\data\Ferro_Dangler_M81_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_Base : Container_Base 
	{
		scope = 0;
		displayName = "Spiritus Systems Lunchbox Dangler";
		descriptionShort="Spiritus Systems Lunchbox Dangler, only fits certain plate carriers.";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\FOG_SpiritusLunchbox.p3d";
		inventorySlot[] = {"FOG_vest_belly"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Belly_Lunchbox_Black : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_Black_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_Grey : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_Grey_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_White : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_White_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_CB : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_CB_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_RG : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_RG_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_MC : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_MC_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_MCB : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_MCB_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_MCA : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_MCA_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_MCAL : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_MCAL_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_MCT : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_MCT_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_AOR1 : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_AOR1_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_AOR2 : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_AOR2_co.paa"};
	};
	class FOG_Pouch_Belly_Lunchbox_M81 : FOG_Pouch_Belly_Lunchbox_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Belly\SpiritusLunchbox\data\SpiritusLunchbox_M81_co.paa"};
	};
	class FOG_Pouch_Grenade_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Double Grenade Pouch";
		descriptionShort="Grenade Pouch, holds 2 grenades, only fits certain plate carriers.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\FOG_JPC_grenpouch.p3d";
		attachments[]={"VestGrenadeA","VestGrenadeB",};
		inventorySlot[]=
		{
            "TV110adminpouch",
            "TV110medkit",
            "TV110utilitypouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\grenadepouch.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\grenadepouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\grenadepouch_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\grenadepouch_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\grenadepouch_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Grenade_MC : FOG_Pouch_Grenade_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\C_GrenadePouch_MC_co.paa"};
	};
	class FOG_Pouch_Grenade_CB : FOG_Pouch_Grenade_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\C_GrenadePouch_CB_co.paa"};
	};
	class FOG_Pouch_Grenade_Grey : FOG_Pouch_Grenade_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\C_GrenadePouch_grey_co.paa"};
	};
	class FOG_Pouch_Grenade_RG : FOG_Pouch_Grenade_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\C_GrenadePouch_RG_co.paa"};
	};
	class FOG_Pouch_Grenade_Black : FOG_Pouch_Grenade_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Pouches\GrenadePouch\data\C_GrenadePouch_black_co.paa"};
	};
	class FOG_Pouch_IFAK_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "IFAK Pouch";
		descriptionShort="IFAK Pouch that holds medical items in slots. Only fits certain plate carriers.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Medical\IFAK\FOG_JPC_IFAK.p3d";
		attachments[]= 
        {
            "MedicalBandage",
            "FOG_BloodTest_Kit",
            "FOG_TransfusionKit",
            "FOG_EpinephrineA",
            "FOG_EpinephrineB",
            "FOG_Morphine",
            "FOG_tetracycline",
            "FOG_VitaminBottle",
            "FOG_painkillers2"
        };
		inventorySlot[]=
		{
            "TV110adminpouch",
            "TV110medkit",
            "TV110utilitypouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Medical\IFAK\data\ifak.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Medical\IFAK\data\ifak.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Medical\IFAK\data\ifak_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Medical\IFAK\data\ifak_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Medical\IFAK\data\ifak_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_IFAK_Brown : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_Tan_co.paa"};
	};
	class FOG_Pouch_IFAK_CB : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_CB_co.paa"};
	};
	class FOG_Pouch_IFAK_RG : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_RG_co.paa"};
	};
	class FOG_Pouch_IFAK_Grey : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_Grey_co.paa"};
	};
	class FOG_Pouch_IFAK_Black : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_Black_co.paa"};
	};
	class FOG_Pouch_IFAK_White : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_White_co.paa"};
	};
	class FOG_Pouch_IFAK_MC : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_MC_co.paa"};
	};
	class FOG_Pouch_IFAK_MCB : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_MCB_co.paa"};
	};
	class FOG_Pouch_IFAK_MCT : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_MCT_co.paa"};
	};
	class FOG_Pouch_IFAK_MCA : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_MCA_co.paa"};
	};
	class FOG_Pouch_IFAK_MCAL : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_MCAL_co.paa"};
	};
	class FOG_Pouch_IFAK_AOR1 : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_AOR1_co.paa"};
	};
	class FOG_Pouch_IFAK_AOR2 : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_AOR2_co.paa"};
	};
	class FOG_Pouch_IFAK_M81 : FOG_Pouch_IFAK_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\IFAK\data\IFAK_M81_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Ferro Concepts Trauma Roll";
		descriptionShort="A quick access, medical kit that sits on the operators plate carrier and holds first aid items. Only fits certain plate carriers.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Medical\TraumaRoll\FOG_Ferro_Roll.p3d";
		attachments[]= 
        {
            "MedicalBandage",
            "FOG_BloodTest_Kit",
            "FOG_TransfusionKit",
            "FOG_EpinephrineA",
            "FOG_EpinephrineB",
            "FOG_Morphine"
        };
		inventorySlot[] = {"FOG_vest_belly"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
                                "FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_destruct.rvmat"
							}
						}
					};
				};
			};
        };
	};
	class FOG_Pouch_TraumaRoll_Black : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_Black_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_Grey : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_Grey_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_CB : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_CB_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_Tan : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_Tan_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_RG : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_RG_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_MC : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_MC_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_MCB : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_MCB_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_MCT : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_MCT_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_MCAL : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_MCAL_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_AOR1 : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_AOR1_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_AOR2 : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_AOR2_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_M81 : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_M81_co.paa"};
	};
	class FOG_Pouch_TraumaRoll_TGRMCB : FOG_Pouch_TraumaRoll_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\TraumaRoll\data\Pouch_Ferro_Roll_TGRMCB_co.paa"};
	};
	class FOG_Pouch_Mag_Dope_Base : Container_Base 
	{
		scope = 0;
		displayName = "DOPE Mag Pouches";
		descriptionShort="DOPE Mag Pouches, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\FOG_dopemags.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo_dope","camo_panelzip"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\dope.rvmat",
                                "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\dope.rvmat",
                                "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\dope.rvmat",
                                "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\dope_damage.rvmat",
                                "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\dope_destruct.rvmat",
                                "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_Dope_RG : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_RG_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_RG_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_CB : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_CB_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_CB_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_Black : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_Black_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_Black_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_Grey : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_Grey_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_Grey_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_MC : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_MC_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_MC_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_MCB : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_MCB_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_MCB_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_MCA : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_MCA_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_MCA_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_MCT : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_MCT_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_MCT_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_MCAL : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_MCAL_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_ALP_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_M81 : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_M81_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_M81_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_AOR1 : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_AOR1_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_AOR1_co.paa"
        };
	};
	class FOG_Pouch_Mag_Dope_AOR2 : FOG_Pouch_Mag_Dope_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Vests\Accessories\Placards\FC_dope_magpouch\data\DOPE_AOR2_co.paa",
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\FC_Panel_AOR2_co.paa"
        };
	};
	class FOG_Pouch_Mag_AVS_Base : Container_Base 
	{
		scope = 0;
		displayName = "AVS Mag Pouches";
		descriptionShort="AVS Mag Pouches, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\FOG_AVS_MagPouch.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_AVS_CB : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_CB_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_RG : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_RG_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Grey : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_Grey_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Black : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_Black_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_MC : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_MC_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_ALP : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_MCAL_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_MCB : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_MCB_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_MCT : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_MCT_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_AOR1 : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_AOR1_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_AOR2 : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_AOR2_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_M81 : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_M81_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_Base : FOG_Pouch_Mag_AVS_Base 
	{
		scope = 0;
		displayName = "AVS Mag Pouches (Folded)";
		descriptionShort="AVS Mag Pouches, should fit any plate carrier.";
		Model = "\FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\FOG_AVS_MagPouch_Open.p3d";
	};
	class FOG_Pouch_Mag_AVS_Fold_CB : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_CB_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_RG : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_RG_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_Grey : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_Grey_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_Black : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_Black_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_MC : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_MC_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_ALP : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_MCAL_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_MCB : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_MCB_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_MCT : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_MCT_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_AOR1 : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_AOR1_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_AOR2 : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_AOR2_co.paa"};
	};
	class FOG_Pouch_Mag_AVS_Fold_M81 : FOG_Pouch_Mag_AVS_Fold_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\AVSmagpouch\data\Pouch_CRYE_AVS_M81_co.paa"};
	};
	class FOG_Pouch_Mag_DW_Base : Container_Base 
	{
		scope = 0;
		displayName = "DoubleWide Pouch";
		descriptionShort="DoubleWide Placard Pouch, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\FOG_doublewide_mag.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_DW_Black : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_Black_co.paa"};
	};
	class FOG_Pouch_Mag_DW_RG : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_RG_co.paa"};
	};
	class FOG_Pouch_Mag_DW_CB : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_CB_co.paa"};
	};
	class FOG_Pouch_Mag_DW_Grey : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_Grey_co.paa"};
	};
	class FOG_Pouch_Mag_DW_MC : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MC_co.paa"};
	};
	class FOG_Pouch_Mag_DW_MCB : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MCB_co.paa"};
	};
	class FOG_Pouch_Mag_DW_MCT : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MCT_co.paa"};
	};
	class FOG_Pouch_Mag_DW_MCA : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MCA_co.paa"};
	};
	class FOG_Pouch_Mag_DW_MCAL : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_MCAL_co.paa"};
	};
	class FOG_Pouch_Mag_DW_M81 : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_M81_co.paa"};
	};
	class FOG_Pouch_Mag_DW_AOR1 : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_AOR1_co.paa"};
	};
	class FOG_Pouch_Mag_DW_AOR2 : FOG_Pouch_Mag_DW_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\FC_dw_magpouch\data\SpiritusGP_AOR2_co.paa"};
	};
	class FOG_Pouch_Mag_Kangaroo_Base : Container_Base 
	{
		scope = 0;
		displayName = "Kangaroo Mag Pouches";
		descriptionShort="Kangaroo Mag Pouches, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\kang_magpouch.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\kangaroo2.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\kangaroo2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\kangaroo2_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\kangaroo2_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\kangaroo2_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_Kangaroo_MC : FOG_Pouch_Mag_Kangaroo_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\Kangaroo2_mc_co.paa"};
	};
	class FOG_Pouch_Mag_Kangaroo_AOR1 : FOG_Pouch_Mag_Kangaroo_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\Kangaroo2_aor1_co.paa"};
	};
	class FOG_Pouch_Mag_Kangaroo_AOR2 : FOG_Pouch_Mag_Kangaroo_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\Kangaroo2_aor2_co.paa"};
	};
	class FOG_Pouch_Mag_Kangaroo_Black : FOG_Pouch_Mag_Kangaroo_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\Kangaroo2_blk_co.paa"};
	};
	class FOG_Pouch_Mag_Kangaroo_RG : FOG_Pouch_Mag_Kangaroo_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\Kangaroo2_rg_co.paa"};
	};
	class FOG_Pouch_Mag_Kangaroo_CB : FOG_Pouch_Mag_Kangaroo_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\Kangaroo2_cb_co.paa"};
	};
	class FOG_Pouch_Mag_Kangaroo_ALP : FOG_Pouch_Mag_Kangaroo_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Kang_magpouch\data\Kangaroo2_ALP_co.paa"};
	};
	class FOG_Pouch_Mag_BlueFor_Base : Container_Base 
	{
		scope = 0;
		displayName = "BlueForce Mag Pouches";
		descriptionShort="BlueForce Magazine Sleeve Pouches, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\bluefor_magpouch.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_BlueFor_MC : FOG_Pouch_Mag_BlueFor_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_mag_mc.paa"};
	};
	class FOG_Pouch_Mag_BlueFor_RG : FOG_Pouch_Mag_BlueFor_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_mag_rg.paa"};
	};
	class FOG_Pouch_Mag_BlueFor_CB : FOG_Pouch_Mag_BlueFor_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_mag_cb.paa"};
	};
	class FOG_Pouch_Mag_BlueFor_Black : FOG_Pouch_Mag_BlueFor_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_mag_blk.paa"};
	};
	class FOG_Pouch_Mag_BlueFor_AOR1 : FOG_Pouch_Mag_BlueFor_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_mag_aor1.paa"};
	};
	class FOG_Pouch_Mag_BlueFor_AOR2 : FOG_Pouch_Mag_BlueFor_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_mag_aor2.paa"};
	};
	class FOG_Pouch_Mag_BlueFor_ALP : FOG_Pouch_Mag_BlueFor_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\Bluefor_magpouch\data\blueforce_mag_alpine.paa"};
	};
	class FOG_Pouch_Mag_KTAR_Base : Container_Base 
	{
		scope = 0;
		displayName = "FC KTAR Mag Pouches";
		descriptionShort="KTAR Mag Pouches designed by Ferro Concepts, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\FCPC_KTARpouch.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\FC_KTAR.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\FC_KTAR.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\FC_KTAR_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\FC_KTAR_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\FC_KTAR_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_KTAR_RG : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_RG_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_CB : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_CB_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_Black : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_Black_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_Grey : FOG_Pouch_Mag_KTAR_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_Grey_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_White : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_White_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_MC : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_MC_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_MCB : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_MCB_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_MCA : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_MCA_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_MCAL : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_MCAL_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_MCT : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_MCT_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_M81 : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_M81_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_AOR1 : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_AOR1_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_AOR2 : FOG_Pouch_Mag_KTAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\KTAR_magpouch\data\Ferro_Placard_KTAR_AOR2_co.paa"};
	};
	class FOG_Pouch_Mag_KTAR_Tan : FOG_Pouch_Mag_KTAR_CB{};
	class FOG_Pouch_Mag_TEAR_Base : Container_Base 
	{
		scope = 0;
		displayName = "FC TEAR Mag Pouches";
		descriptionShort="TEAR Mag Pouches designed by Ferro Concepts, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\FCPC_TEARpouch.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\FC_Tear.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\FC_Tear.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\FC_Tear_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\FC_Tear_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\FC_Tear_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_TEAR_RG : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_RG_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_CB : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_CB_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_Black : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_Black_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_Grey : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_Grey_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_White : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_White_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_MC : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_MC_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_MCB : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_MCB_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_MCT : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_MCT_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_MCA : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_MCA_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_MCAL : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_MCAL_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_M81 : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_M81_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_AOR1 : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_AOR1_co.paa"};
	};
	class FOG_Pouch_Mag_TEAR_AOR2 : FOG_Pouch_Mag_TEAR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Placards\TEAR_magpouch\data\Ferro_Placard_TEAR_AOR2_co.paa"};
	};
	class FOG_Pouch_Mag_LV119_Base : Container_Base 
	{
		scope = 0;
		displayName = "LV119 Placard";
		descriptionShort="Detatched LV119 placard, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\LV119_detach\FOG_LV119_Placard.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_LV119_CB: FOG_Pouch_Mag_LV119_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard_CB_co.paa"
		};
	};
    class FOG_Pouch_Mag_LV119_RG: FOG_Pouch_Mag_LV119_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard_RG_co.paa"
		};
	};
    class FOG_Pouch_Mag_LV119_OD: FOG_Pouch_Mag_LV119_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard_OD_co.paa"
		};
	};
    class FOG_Pouch_Mag_LV119_Black: FOG_Pouch_Mag_LV119_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard_Black_co.paa"
		};
	};
    class FOG_Pouch_Mag_LV119_MC: FOG_Pouch_Mag_LV119_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard_MC_co.paa"
		};
	};
    class FOG_Pouch_Mag_LV119_MCB: FOG_Pouch_Mag_LV119_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\LV119_detach\data\Spiritus_LV119Placard_MCB_co.paa"
		};
	};
	class FOG_Placard_Paraclete_Base : Container_Base 
	{
		scope = 0;
		displayName = "Paraclete Placard";
		descriptionShort="Placard designed by Paraclete, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\paraclete\FOG_Paraclete.p3d";
		inventorySlot[] = {"VestPouch"};
		attachments[]=
		{
			"FOG_MRB_esstac",
            "FOG_small_patch"
		};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\paraclete\data\paraclete.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\paraclete\data\paraclete.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\paraclete\data\paraclete.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\paraclete\data\paraclete.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\paraclete\data\paraclete.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Placard_Paraclete_MC: FOG_Placard_Paraclete_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\paraclete\data\Paraclete_Pouch_mc_co.paa"
		};
	};
	class FOG_Placard_Paraclete_RG: FOG_Placard_Paraclete_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_rg_co.paa"
		};
	};
	class FOG_Placard_Paraclete_CB: FOG_Placard_Paraclete_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_cb_co.paa"
		};
	};
	class FOG_Placard_Paraclete_Grey: FOG_Placard_Paraclete_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_grey_co.paa"
		};
	};
	class FOG_Placard_Paraclete_Black: FOG_Placard_Paraclete_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_black_co.paa"
		};
	};
	class FOG_Placard_Paraclete_White: FOG_Placard_Paraclete_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_white_co.paa"
		};
	};
	class FOG_Pouch_Mag_SSMK4_Base : Container_Base 
	{
		scope = 0;
		displayName = "Micro Flight Chassis";
		descriptionShort="Spiritus Systems Micro Flight Chassis repurposed as a placard, should fit any plate carrier.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\SpiritusMk4\FOG_SpiritusMk4.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Unarmored\SSMK4\data\v_ss_nm_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_SSMK4_CB: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_cb_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSMK4_RG: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_RG_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSMK4_Black: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_blk_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSMK4_Grey: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_wg_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSMK4_MC: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_MC_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSMK4_MCA: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_MCA_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSMK4_MCT: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_MCTP_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSMK4_M81: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\SSMK4\data\ssys_M81_co.paa"
		};
	};
	class FOG_Pouch_Mag_SSCCS_Base : Container_Base 
	{
		scope = 0;
		displayName = "Spiritus Systems CCS Placard";
		descriptionShort="Spiritus Systems CCS Placard, should fit any plate carrier.";
		itemSize[] = {4,4};
		itemsCargoSize[] = {6,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\FOG_SpiritusCCS.p3d";
		inventorySlot[] = {"VestPouch"};
		weight = 200;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Mag_SSCCS_CB: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_CB_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_RG: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_RG_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_Black: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_Black_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_Grey: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_Grey_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_White: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_White_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_MC: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_MC_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_MCB: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_MCB_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_MCAL: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_MCAL_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_MCT: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_MCT_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_M81: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_M81_co.paa"
		};
	};
    class FOG_Pouch_Mag_SSCCS_AOR2: FOG_Pouch_Mag_SSCCS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Accessories\Placards\SpiritusCCS\data\Spiritus_CCS_AOR2_co.paa"
		};
	};
	class FOG_Panel_CryeZipon_Base : Container_Base 
	{
		scope = 0;
		displayName = "Crye ZIPON 1.0 Panel";
		descriptionShort="Panel configuration. Fits on certain plate carriers.";
		itemSize[] = {4,4};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Panels\CryeZipon\FOG_CryeZIPON_Panel.p3d";
		attachments[]=
		{
			"FOG_big_patch_only",
            "FOG_FlagRoll",
            "Backpack_1"
		};
		inventorySlot[] = {"FOG_vest_panel"};
		weight = 300;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Panel_CryeZipon_CB : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_CB_co.paa"};
	};
	class FOG_Panel_CryeZipon_RG : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_RG_co.paa"};
	};
	class FOG_Panel_CryeZipon_Black : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_Black_co.paa"};
	};
	class FOG_Panel_CryeZipon_Grey : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_Grey_co.paa"};
	};
	class FOG_Panel_CryeZipon_White : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_White_co.paa"};
	};
	class FOG_Panel_CryeZipon_MC : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_MC_co.paa"};
	};
	class FOG_Panel_CryeZipon_MCB : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_MCB_co.paa"};
	};
	class FOG_Panel_CryeZipon_MCA : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_MCA_co.paa"};
	};
	class FOG_Panel_CryeZipon_MCAL : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_MCAL_co.paa"};
	};
	class FOG_Panel_CryeZipon_MCT : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_MCT_co.paa"};
	};
	class FOG_Panel_CryeZipon_M81 : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_M81_co.paa"};
	};
	class FOG_Panel_CryeZipon_AOR1 : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_AOR1_co.paa"};
	};
	class FOG_Panel_CryeZipon_AOR2 : FOG_Panel_CryeZipon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\CryeZipon\data\CRYE_ZIPON_AOR2_co.paa"};
	};
	class FOG_JPC_Panel_Flag_Base : Container_Base 
	{
		scope = 0;
		displayName = "AVS Bag Panel";
		descriptionShort="Panel configuration. Fits on certain plate carriers.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Panels\AVSPanel\FOG_JPC_Panel1.p3d";
		attachments[]=
		{
			"FOG_big_patch_only",
            "FOG_FlagRoll",
            "Backpack_1"
		};
		inventorySlot[] = {"FOG_vest_panel"};
		weight = 300;
		hiddenSelections[]={"camo","flag"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_JPC_Panel_CB_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_CB_co.paa"};
	};
	class FOG_JPC_Panel_RG_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_RG_co.paa"};
	};
	class FOG_JPC_Panel_Black_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_Black_co.paa"};
	};
	class FOG_JPC_Panel_Grey_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_Grey_co.paa"};
	};
	class FOG_JPC_Panel_White_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_White_co.paa"};
	};
	class FOG_JPC_Panel_MC_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_MC_co.paa"};
	};
	class FOG_JPC_Panel_MCB_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_MCB_co.paa"};
	};
	class FOG_JPC_Panel_M81_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_M81_co.paa"};
	};
	class FOG_JPC_Panel_AOR1_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_AOR1_co.paa"};
	};
	class FOG_JPC_Panel_AOR2_Flag_US : FOG_JPC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\AVSPanel\data\CRYE_Sack_Panel_AOR2_co.paa"};
	};
	class FOG_FC_Panel_Flag_Base : Container_Base 
	{
		scope = 0;
		displayName = "Ferro Concepts Adapt Panel";
		descriptionShort="Panel configuration. Fits on certain plate carriers.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Panels\FCPanel\FCPC_backpanel.p3d";
		inventorySlot[] = {"FOG_vest_panel"};
		attachments[]=
		{
			"FOG_big_patch_only",
            "FOG_FlagRoll",
            "Backpack_1"
		};
		weight = 300;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_FC_Panel_Black_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_Black_co.paa"
        };
	};
	class FOG_FC_Panel_CB_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_CB_co.paa"
        };
	};
	class FOG_FC_Panel_RG_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_RG_co.paa"
        };
	};
	class FOG_FC_Panel_Grey_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_Grey_co.paa"
        };
	};
	class FOG_FC_Panel_White_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_White_co.paa"
        };
	};
	class FOG_FC_Panel_MC_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_MC_co.paa"
        };
	};
	class FOG_FC_Panel_MCB_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_MCB_co.paa"
        };
	};
	class FOG_FC_Panel_MCT_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_MCT_co.paa"
        };
	};
	class FOG_FC_Panel_MCA_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_MCA_co.paa"
        };
	};
	class FOG_FC_Panel_ALP_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_ALP_co.paa"
        };
	};
	class FOG_FC_Panel_M81_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_M81_co.paa"
        };
	};
	class FOG_FC_Panel_AOR1_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_AOR1_co.paa"
        };
	};
	class FOG_FC_Panel_AOR2_Flag_US : FOG_FC_Panel_Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Accessories\Panels\FCPanel\data\Panel_ADAPT_AOR2_co.paa"
        };
	};
	class FOG_Panel_FerroBanger_Base : Container_Base 
	{
		scope = 0;
		displayName = "Ferro Concepts Banger Panel";
		descriptionShort="Panel configuration. Fits on certain plate carriers.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Panels\FerroBanger\FOG_FerroBanger_Panel.p3d";
		attachments[]=
		{
			"FOG_big_patch_only",
            "FOG_FlagRoll",
            "Backpack_1",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC"
		};
		inventorySlot[] = {"FOG_vest_panel"};
		weight = 300;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Panel_FerroBanger_CB : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_CB_co.paa"};
	};
	class FOG_Panel_FerroBanger_RG : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_RG_co.paa"};
	};
	class FOG_Panel_FerroBanger_Black : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_Black_co.paa"};
	};
	class FOG_Panel_FerroBanger_Grey : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_Grey_co.paa"};
	};
	class FOG_Panel_FerroBanger_White : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_White_co.paa"};
	};
	class FOG_Panel_FerroBanger_MC : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_MC_co.paa"};
	};
	class FOG_Panel_FerroBanger_MCB : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_MCB_co.paa"};
	};
	class FOG_Panel_FerroBanger_MCA : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_MCA_co.paa"};
	};
	class FOG_Panel_FerroBanger_MCAL : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_MCAL_co.paa"};
	};
	class FOG_Panel_FerroBanger_MCT : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_MCT_co.paa"};
	};
	class FOG_Panel_FerroBanger_M81 : FOG_Panel_FerroBanger_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\FerroBanger\data\Ferro_Banger_M81_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_Base : Container_Base 
	{
		scope = 0;
		displayName = "GMR Mini Map Panel";
		descriptionShort="Panel configuration. Fits on certain plate carriers.";
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\FOG_Panel_GMR_Minimap.p3d";
		attachments[]=
		{
			"FOG_big_patch_only",
            "FOG_FlagRoll",
            "Backpack_1"
		};
		inventorySlot[] = {"FOG_vest_panel"};
		weight = 300;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Panel_GMR_MiniMap_CB : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_CB_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_RG : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_RG_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_Black : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_Black_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_Grey : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_Grey_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_White : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_White_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_MC : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_MC_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_MCB : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_MCB_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_MCAL : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_MCAL_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_MCT : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_MCT_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_M81 : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_M81_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_AOR1 : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_AOR1_co.paa"};
	};
	class FOG_Panel_GMR_MiniMap_AOR2 : FOG_Panel_GMR_MiniMap_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\GMR_Minimap\data\GMR_Minimap_AOR2_co.paa"};
	};
	class FOG_Vest_PhoneCase1_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "FMA ShockProof Phone Case";
		descriptionShort="Cosmetic, fits on most plate carriers.";
		itemSize[] = {2,2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\MISC\PhoneCase1\FOG_PhoneCase1.p3d";
		inventorySlot[] = {"FOG_big_patch"};
        attachments[]= {"BatteryD","FOG_big_patch_only"};
		weight = 50;
		hiddenSelections[]={"camo_mount","camo_phone"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug.rvmat",
								"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Vest_PhoneCase1_Tan : FOG_Vest_PhoneCase1_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug_Tan_co.paa","FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23_Tan_co.paa"};
	};
	class FOG_Vest_PhoneCase1_Grey : FOG_Vest_PhoneCase1_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug_GRY_co.paa","FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23_GRY_co.paa"};
	};
	class FOG_Vest_PhoneCase1_Black : FOG_Vest_PhoneCase1_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug_BLK_co.paa","FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23_BLK_co.paa"};
	};
	class FOG_Vest_PhoneCase1_RG : FOG_Vest_PhoneCase1_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Case_Jug_RG_co.paa","FOG_MOD\Vests\Accessories\MISC\PhoneCase1\data\Phone_S23_RG_co.paa"};
	};
	class FOG_PouchAdmin_Chest_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Ferro Concepts Admin Pouch";
		descriptionShort="Cosmetic, fits on most plate carriers. (goes in the patch slot)";
		itemSize[] = {2,2};
		itemsCargoSize[] = {2,2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\MISC\FerroAdmin\FOG_FerroAdmin.p3d";
		inventorySlot[] = {"FOG_big_patch"};
        attachments[]= {"FOG_small_patch"};
		weight = 50;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_PouchAdmin_Chest_RG : FOG_PouchAdmin_Chest_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin_RG_co.paa"};
	};
	class FOG_PouchAdmin_Chest_CB : FOG_PouchAdmin_Chest_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin_CB_co.paa"};
	};
	class FOG_PouchAdmin_Chest_Grey : FOG_PouchAdmin_Chest_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin_Grey_co.paa"};
	};
	class FOG_PouchAdmin_Chest_Black : FOG_PouchAdmin_Chest_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin_Black_co.paa"};
	};
	class FOG_PouchAdmin_Chest_White : FOG_PouchAdmin_Chest_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin_White_co.paa"};
	};
	class FOG_PouchAdmin_Chest_MC : FOG_PouchAdmin_Chest_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\FerroAdmin\data\Pouch_Ferro_Admin_MC_co.paa"};
	};
	class FOG_NavBoard_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "S&S NavBoard FlipMod";
		descriptionShort="Cosmetic, fits on most plate carriers.";
		itemSize[] = {2,2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\MISC\NavBoard\FOG_NavBoard.p3d";
		inventorySlot[] = {"FOG_big_patch"};
        attachments[]= {"BatteryD"};
		weight = 50;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
								"FOG_MOD\Vests\Accessories\MISC\NavBoard\data\navboard.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\NavBoard\data\navboard.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\NavBoard\data\navboard.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\NavBoard\data\navboard_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\MISC\NavBoard\data\navboard_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_NavBoard : FOG_NavBoard_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\MISC\NavBoard\data\navboard_co.paa"};
	};
	class BandageDressing;
	class FOG_Tourniquet: BandageDressing
	{
		scope=2;
		displayName="Quick Application Tourniquet";
		descriptionShort="Quick Application Tourniquet";
		model="\FOG_MOD\Vests\Accessories\Medical\Tourniquet\FOG_Tourniquet.p3d";
		inventorySlot[]=
		{
			"FOG_tourniquet"
		};
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Medical\Tourniquet\data\Med_TQ_Cat_G7_co.paa"};
        repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
	};
};