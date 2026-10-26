class CfgPatches 
{
	class FOG_Vest_SPC
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
	class FOG_Vest_SPC_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "Crye SPC";
		descriptionShort = "The SPC is a lightweight and versatile plate carrier designed for special operations forces. It features a modular design with multiple attachment points for pouches and accessories, allowing for customization based on mission requirements.";
		model = "FOG_MOD\Vests\SPC\FOG_SPC_G.p3d";
		attachments[] =
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
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 2;
		weight = 6000;
		itemSize[] = {4, 4};
        varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		simpleHiddenSelections[] = {"selection_radio"};
		hiddenSelections[] =
        {
			"camo_vest",
			"camo_radiopouch"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\SPC\data\SPC.rvmat",
			"FOG_MOD\Vests\SPC\data\wing_expander.rvmat"
		};		
		class ClothingTypes {
			male = "FOG_MOD\Vests\SPC\FOG_SPC_M.p3d";
			female = "FOG_MOD\Vests\SPC\FOG_SPC_F.p3d";
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
                                "FOG_MOD\Vests\SPC\data\SPC.rvmat",
								"FOG_MOD\Vests\SPC\data\wing_expander.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\SPC\data\SPC.rvmat",
								"FOG_MOD\Vests\SPC\data\wing_expander.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\SPC\data\SPC.rvmat",
								"FOG_MOD\Vests\SPC\data\wing_expander.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\SPC\data\SPC.rvmat",
								"FOG_MOD\Vests\SPC\data\wing_expander.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\SPC\data\SPC.rvmat",
								"FOG_MOD\Vests\SPC\data\wing_expander.rvmat"
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
	
	class FOG_Vest_SPC_MC : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_MC_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_mc_co.paa"
		};
	};
	class FOG_Vest_SPC_MCB : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_MCB_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_mcb_co.paa"
		};
	};
	class FOG_Vest_SPC_MCA : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_MCA_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_cb_co.paa"
		};
	};
	class FOG_Vest_SPC_MCAL : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_MCAL_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_blk_co.paa"
		};
	};
	class FOG_Vest_SPC_AMCU : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_AMCU_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_cb_co.paa"
		};
	};
	class FOG_Vest_SPC_M81 : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_M81_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_cb_co.paa"
		};
	};
	class FOG_Vest_SPC_AOR1 : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_AOR1_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_cb_co.paa"
		};
	};
	class FOG_Vest_SPC_AOR2 : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_AOR2_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_rg_co.paa"
		};
	};
	class FOG_Vest_SPC_499Tan : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_499Tan_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_cb_co.paa"
		};
	};
	class FOG_Vest_SPC_BLK : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_BLK_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_blk_co.paa"
		};
	};
	class FOG_Vest_SPC_GRY : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_GRY_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_gry_co.paa"
		};
	};
	class FOG_Vest_SPC_RG : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_RG_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_rg_co.paa"
		};
	};
	class FOG_Vest_SPC_CB : FOG_Vest_SPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\SPC\data\SPC_CB_co.paa",
			"FOG_MOD\Vests\SPC\data\wing_expander_cb_co.paa"
		};
	};
};