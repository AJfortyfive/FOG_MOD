class CfgPatches 
{
	class FOG_Vest_Osprey_stuff
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
	class FOG_Vest_Osprey_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "CQC Osprey MK4A";
		descriptionShort = "Osprey plate carrier is actively used by the British army and specialists. The Assault preset is provided with heavy armor plates and a maximum of pouches for ammunition and grenades.";
		model = "FOG_MOD\Vests\FOG_Osprey\FOG_Osprey_G.p3d";
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
            "camo_radiopouch",
         	"camo_vest"
        };
        simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat",
			"FOG_MOD\Vests\FOG_Osprey\data\fog_osprey.rvmat"
		};		
		class ClothingTypes {
			male = "FOG_MOD\Vests\FOG_Osprey\FOG_Osprey_M.p3d";
			female = "FOG_MOD\Vests\FOG_Osprey\FOG_Osprey_F.p3d";
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
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat",
                                "FOG_MOD\Vests\FOG_Osprey\data\fog_osprey.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat",
                                "FOG_MOD\Vests\FOG_Osprey\data\fog_osprey.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat",
                                "FOG_MOD\Vests\FOG_Osprey\data\fog_osprey.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat",
                                "FOG_MOD\Vests\FOG_Osprey\data\fog_osprey.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat",
                                "FOG_MOD\Vests\FOG_Osprey\data\fog_osprey.rvmat"
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
	
	class FOG_Vest_Osprey_RG : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_rg_co.paa"
		};
	};
	class FOG_Vest_Osprey_Grey : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_grey_co.paa"
		};
	};
	class FOG_Vest_Osprey_CB : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_cb_co.paa"
		};
	};
	class FOG_Vest_Osprey_Black : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_black_co.paa"
		};
	};
	class FOG_Vest_Osprey_MC : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MC_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_MC_co.paa"
		};
	};
	class FOG_Vest_Osprey_MC_Black : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MC_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_MC_Black_co.paa"
		};
	};
	class FOG_Vest_Osprey_MCT : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCT_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_MCT_co.paa"
		};
	};
	class FOG_Vest_Osprey_MCB : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCB_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_MCB_co.paa"
		};
	};
	class FOG_Vest_Osprey_MCAL : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCAL_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_MCAL_co.paa"
		};
	};
	class FOG_Vest_Osprey_M81 : FOG_Vest_Osprey_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_M81_co.paa",
			"FOG_MOD\Vests\FOG_Osprey\data\osprey_M81_co.paa"
		};
	};
};
