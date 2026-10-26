class CfgPatches 
{
	class FOG_Vest_FirstSpear
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
	class FOG_Vest_FirstSpear_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "First Spear Siege-R";
		descriptionShort = "The First Spear Siege-R Optimized plate carrier equipped with the M.A.S.S. Shoulder System. Provides reliable all-around protection while offering ample workspace for equipment placement.";
		model = "FOG_MOD\Vests\FirstSpear\FOG_Firstspear_M.p3d";
		attachments[] =
        {
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"Belt_Back",
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
		quickBarBonus = 2;
		weight = 9000;
		itemSize[] = {6, 5};
        varWetMax=0.249;
		heatIsolation=0.8;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		hiddenSelections[] =
        {
            "camo_vest",
            "camo_parts",
            "camo_radio"
        };
        simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest.rvmat",
			"FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts.rvmat",
            "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
		};		
		class ClothingTypes {
			male = "FOG_MOD\Vests\FirstSpear\FOG_Firstspear_M.p3d";
			female = "FOG_MOD\Vests\FirstSpear\FOG_Firstspear_M.p3d";
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
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest.rvmat",
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest.rvmat",
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest.rvmat",
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest.rvmat",
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest.rvmat",
                                "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
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
	
	class FOG_Vest_FirstSpear_RG : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_RG_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_RG_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_rg_co.paa"
		};
	};
	class FOG_Vest_FirstSpear_Grey : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_Grey_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_Grey_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_gray_co.paa"
		};
	};
	class FOG_Vest_FirstSpear_CB : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_CB_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_CB_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_cb_co.paa"
		};
	};
	class FOG_Vest_FirstSpear_Black : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_Black_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_Black_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_black.paa"
		};
	};
	class FOG_Vest_FirstSpear_MC : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_MC_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_MC_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_mc_co.paa"
		};
	};
	class FOG_Vest_FirstSpear_MCT : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_MCT_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_MCT_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_mct_co.paa"
		};
	};
	class FOG_Vest_FirstSpear_MCB : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_MCB_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_MCB_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_mcb_co.paa"
		};
	};
	class FOG_Vest_FirstSpear_MCAL : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_MCAL_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_MCAL_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_mcal_co.paa"
		};
	};
	class FOG_Vest_FirstSpear_M81 : FOG_Vest_FirstSpear_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Vest_M81_co.paa",
            "FOG_MOD\Vests\FirstSpear\data\Firstspear_Parts_M81_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_m81_co.paa"
		};
	};
};
