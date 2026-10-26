class CfgPatches 
{
	class FOG_Vest_Thor 
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
	class FOG_Vest_Thor_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "Thor Integrated Carrier";
		descriptionShort = "The THOR full protection assault body armor equipped with soft and hard armor elements to protect against shrapnel and bullets of pistol and rifle calibers. Manufactured by NFM.";
		model = "FOG_MOD\Vests\Thor\Thor_g.p3d";
		attachments[] =
        {
			"WalkieTalkie",
			"Chemlight",
			"FOG_big_patch",
			"FOG_tourniquet",
			"VestHolster",
			"VestPouch",
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
		itemSize[] = {5, 5};
        varWetMax=0.249;
		heatIsolation=0.8;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[] = {"camo","camo_radiopouch"};
        simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\Thor\data\Thor.rvmat",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
		};
		class ClothingTypes 
        {
			male = "FOG_MOD\Vests\Thor\Thor_m.p3d";
			female = "FOG_MOD\Vests\Thor\Thor_f.p3d";
		};
		
		class DamageSystem 
        {
			class GlobalHealth 
            {
				class Health 
                {
					hitpoints = 315;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"FOG_MOD\Vests\Thor\data\Thor.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"}}, 
						{0.7, {"FOG_MOD\Vests\Thor\data\Thor.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"}}, 
						{0.5, {"FOG_MOD\Vests\Thor\data\Thor_damage.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"}}, 
						{0.3, {"FOG_MOD\Vests\Thor\data\Thor_damage.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"}}, 
						{0.0, {"FOG_MOD\Vests\Thor\data\Thor_destruct.rvmat","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"}}
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
	
	class FOG_Vest_Thor_Black : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_Black_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"
        };
	};
	class FOG_Vest_Thor_Grey: FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_Grey_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Grey_co.paa"
        };
	};
	class FOG_Vest_Thor_White : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_White_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_White_co.paa"
        };
	};
	class FOG_Vest_Thor_CB : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_CB_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
        };
	};
	class FOG_Vest_Thor_RG : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_RG_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa"
        };
	};
	class FOG_Vest_Thor_Tan : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_Tan_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
        };
	};
	class FOG_Vest_Thor_Pink : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_Pink_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_White_co.paa"
        };
	};
	class FOG_Vest_Thor_EMR : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_EMR_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa"
        };
	};
	class FOG_Vest_Thor_MC : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_MC_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MC_co.paa"
        };
	};
	class FOG_Vest_Thor_MCB : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_MCB_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCB_co.paa"
        };
	};
	class FOG_Vest_Thor_MCT : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_MCT_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCT_co.paa"
        };
	};
	class FOG_Vest_Thor_MCA : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_MCA_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCA_co.paa"
        };
	};
	class FOG_Vest_Thor_MCAL : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_MCAL_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCAL_co.paa"
        };
	};
	class FOG_Vest_Thor_M81 : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_M81_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_M81_co.paa"
        };
	};
	class FOG_Vest_Thor_AOR1 : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_AOR1_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_AOR1_co.paa"
        };
	};
	class FOG_Vest_Thor_AOR2 : FOG_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Vests\Thor\data\Thor_AOR2_co.paa",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_AOR2_co.paa"
        };
	};
	class FOG_Vest_Thor_Green : FOG_Vest_Thor_Black {};
};
