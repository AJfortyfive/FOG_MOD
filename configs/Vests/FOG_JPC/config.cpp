class CfgPatches
{
	class FOG_Vest_JPC_stuff
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
	class Clothing;
	class FOG_Vest_JPC_Base: Clothing
	{
		scope=0;
		displayName="JPC Plate Carrier";
		descriptionShort="Crye Jumpable Plate Carrier is a lightweight and minimal vest designed for maximum mobility, weight savings, and packability. At just over a few pounds for the entire carrier, the JPC offers a variety of configuration options to suit an operators needs in terms of load carriage and comfort.";
		model="\FOG_MOD\Vests\FOG_JPC\FOG_JPC_g.p3d";
		attachments[]=
		{
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"VestPouch",
			"FOG_vest_belly",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest",
			"FOG_vest_panel"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		inventorySlot[]=
		{
			"Vest"
		};
		weight=6000;
		itemSize[]={4,4};
		quickBarBonus=3;
		varWetMax=0.49000001;
		heatIsolation=0.60000001;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]= {"camo_base","camo_cum","camo_radio"};
		simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\FOG_JPC\Data\jpc_main.rvmat",
            "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund.rvmat",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
            
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Vests\FOG_JPC\FOG_JPC_m.p3d";
			female="\FOG_MOD\Vests\FOG_JPC\FOG_JPC_f.p3d";
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
								"FOG_MOD\Vests\FOG_JPC\Data\jpc_main.rvmat",
                                "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\FOG_JPC\Data\jpc_main.rvmat",
                                "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_damage.rvmat",
                                "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_damage.rvmat",
                                "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_destruct.rvmat",
                                "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_destruct.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.3;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
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
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Vest_JPC_CB: FOG_Vest_JPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_CB_CO.paa",
            "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_CB_CO.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_cb_co.paa"
		};
	};
	class FOG_Vest_JPC_MC: FOG_Vest_JPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_MC_CO.paa",
            "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_MC_CO.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_mc_co.paa"
		};
	};
	class FOG_Vest_JPC_Black: FOG_Vest_JPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_BLK_CO.paa",
            "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_BLK_CO.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_blk_co.paa"
		};
	};
	class FOG_Vest_JPC_RG: FOG_Vest_JPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_RG_CO.paa",
            "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_RG_CO.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_rg_co.paa"
		};
	};
	class FOG_Vest_JPC_AOR1: FOG_Vest_JPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_AOR1_CO.paa",
            "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_CB_CO.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_aor1_co.paa"
		};
	};
	class FOG_Vest_JPC_AOR2: FOG_Vest_JPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_AOR2_CO.paa",
            "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_RG_CO.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_aor2_co.paa"
		};
	};
	class FOG_Vest_JPC_ALP: FOG_Vest_JPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_JPC\Data\jpc_main_ALP_CO.paa",
            "FOG_MOD\Vests\FOG_JPC\Data\jpc_cummerbund_BLK_CO.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_blk_co.paa"
		};
	};
};