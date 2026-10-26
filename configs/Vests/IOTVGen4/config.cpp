class CfgPatches 
{
	class FOG_Vest_Gen4_stuff
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
	class FOG_Vest_Gen4_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "IOTV Gen4 Body Armor";
		descriptionShort = "The Improved Outer Tactical Vest (IOTV) Gen IV is designed to permit maximum freedom of movement required to assume correct firing positions with the agility to execute and maneuver tasks. Optimal design characteristics ensure the best possible weight distribution of both the ballistic body armor system as well as additional load bearing equipment, thus providing enhanced comfort, wear duration, and mobility.";
		model = "FOG_MOD\Vests\IOTVGen4\models\Gen4_g.p3d";
		attachments[]=
		{
			"WalkieTalkie",
            "Chemlight",
			"FOG_big_patch",
			"FOG_tourniquet",
            "Belt_Left",
            "VestHolster",
			"VestPouch",
			"FOG_vest_belly",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest",
			"FOG_vest_panel"
		};
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 3;
		weight = 9000;
		itemSize[] = {5, 6};
        varWetMax=0.249;
		heatIsolation=0.8;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		hiddenSelections[]=
        {
			"camo",
            "camo_radio"
		};
        simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\IOTVGen4\data\Gen4.rvmat",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
		};		
		class ClothingTypes {
			male = "FOG_MOD\Vests\IOTVGen4\models\Gen4_m.p3d";
			female = "FOG_MOD\Vests\IOTVGen4\models\Gen4_f.p3d";
		};
		
		class DamageSystem 
        {
			class GlobalHealth 
            {
				class Health 
                {
					hitpoints = 350;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] =
					{
						{1.0, {"FOG_MOD\Vests\IOTVGen4\data\Gen4.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"}}, 
						{0.7, {"FOG_MOD\Vests\IOTVGen4\data\Gen4.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"}}, 
						{0.5, {"FOG_MOD\Vests\IOTVGen4\data\Gen4_damage.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Vests\IOTVGen4\data\Gen4_damage.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Vests\IOTVGen4\data\Gen4_destruct.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
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
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.4;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
			};
		};
		class AnimEvents {
			class SoundWeapon {
				class pickUpItem {
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
	
	class FOG_Vest_Gen4_Black : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_black_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"
        };
	};
	class FOG_Vest_Gen4_Grey : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_grey_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Grey_co.paa"
        };
	};
	class FOG_Vest_Gen4_White : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_white_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_White_co.paa"
        };
	};	
	class FOG_Vest_Gen4_RG : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_rg_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa"
        };
	};	
	class FOG_Vest_Gen4_CB : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_cb_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
        };
	};	
	class FOG_Vest_Gen4_MC : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_mc_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MC_co.paa"
        };
	};
	class FOG_Vest_Gen4_MCT : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_mct_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCT_co.paa"
        };
	};
	class FOG_Vest_Gen4_MCB : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_mcb_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCB_co.paa"
        };
	};
	class FOG_Vest_Gen4_MCA : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_mca_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCA_co.paa"
        };
	};
	class FOG_Vest_Gen4_MCAL : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_mcal_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCAL_co.paa"
        };
	};
	class FOG_Vest_Gen4_AOR1 : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_aor1_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_AOR1_co.paa"
        };
	};
	class FOG_Vest_Gen4_AOR2 : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_aor2_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_AOR2_co.paa"
        };
	};
	class FOG_Vest_Gen4_M81 : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_m81_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_M81_co.paa"
        };
	};	
	class FOG_Vest_Gen4_UCP : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_ucp_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"
        };
	};
	class FOG_Vest_Gen4_NWU : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_MARPAT_B_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"
        };
	};
	class FOG_Vest_Gen4_MARPAT : FOG_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Vests\IOTVGen4\data\Gen4_MARPAT_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
        };
	};
	class FOG_Vest_Gen4_Green : FOG_Vest_Gen4_Black{};
	class FOG_Vest_Gen4_EMR : FOG_Vest_Gen4_Black{};
	class FOG_Vest_Gen4_Tan : FOG_Vest_Gen4_Black{};
};