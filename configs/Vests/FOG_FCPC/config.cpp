class CfgPatches 
{
	class FOG_Vest_FCPC_stuff
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
	class FOG_Vest_FCPC_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "FCPC V5";
		descriptionShort = "Ferro Concepts Plate Carrier V5. Lightweight, has adjustable straps and MOLLE webbing for customization, and is made of durable materials.";
		model = "FOG_MOD\Vests\FOG_FCPC\FOG_FCPC_G.p3d";
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
		hiddenSelections[] =
        {
			"camo",
            "camo_radiopocket"
        };
        simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket.rvmat"
		};		
		class ClothingTypes {
			male = "FOG_MOD\Vests\FOG_FCPC\FOG_FCPC_M.p3d";
			female = "FOG_MOD\Vests\FOG_FCPC\FOG_FCPC_F.p3d";
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
                                "FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
                                "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
                                "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
                                "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
                                "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\FOG_FCPC\data\FCPC_destruct.rvmat",
                                "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_destruct.rvmat"
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
	class FOG_Vest_FCPC_RG : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_RG_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_RG_co.paa"
		};
	};
	class FOG_Vest_FCPC_CB : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_CB_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_CB_co.paa"
		};
	};
	class FOG_Vest_FCPC_Black : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_Black_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_Black_co.paa"
		};
	};
	class FOG_Vest_FCPC_Grey : FOG_Vest_FCPC_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_Grey_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_Grey_co.paa"
		};
	};
	class FOG_Vest_FCPC_White : FOG_Vest_FCPC_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_White_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_White_co.paa"
		};
	};
	class FOG_Vest_FCPC_Red : FOG_Vest_FCPC_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_Red_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_Black_co.paa"
		};
	};
	class FOG_Vest_FCPC_Purple : FOG_Vest_FCPC_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_Purple_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_Black_co.paa"
		};
	};
	class FOG_Vest_FCPC_Pink : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_Pink_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_White_co.paa"
		};
	};
	class FOG_Vest_FCPC_MC : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_MC_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_MC_co.paa"
		};
	};
	class FOG_Vest_FCPC_MCB : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_MCB_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_MCB_co.paa"
		};
	};
	class FOG_Vest_FCPC_MCA : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_MCA_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_MCA_co.paa"
		};
	};
	class FOG_Vest_FCPC_MCAL : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_MCAL_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_MCAL_co.paa"
		};
	};
	class FOG_Vest_FCPC_MCT : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_MCT_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_MCT_co.paa"
		};
	};
	class FOG_Vest_FCPC_AOR1 : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_AOR1_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_AOR1_co.paa"
		};
	};
	class FOG_Vest_FCPC_AOR2 : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_AOR2_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_AOR2_co.paa"
		};
	};
	class FOG_Vest_FCPC_M81 : FOG_Vest_FCPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"FOG_MOD\Vests\FOG_FCPC\data\Vest_Ferro_FCPC_M81_co.paa",
            "FOG_MOD\Vests\FOG_FCPC\data\Ferro_Radio_Pocket_M81_co.paa"
		};
	};
};