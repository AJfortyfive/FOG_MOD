class CfgPatches 
{
	class FOG_Vest_Unarmored_ALSE
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
	class FOG_Vest_ALSE_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "Aviation Life Support Equipment";
		descriptionShort = "The ALSE Rig is designed for Rotary Aviators to sustain life in the event of an emergency..";
		model = "FOG_MOD\Vests\Unarmored\ALSE\FOG_ALSE_G.p3d";
		attachments[]=
		{
			"WalkieTalkie",
            "Chemlight",
			"Belt_Left",
			"FOG_tourniquet",
			"VestHolster",
            "Belt_Back",
            "FOG_MRB_singlemag",
            "FOG_ifak_vest"
		};
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 3;
		weight = 1000;
		itemSize[] = {3, 3};
        itemsCargoSize[] = {10, 2};
        varWetMax=0.249;
		heatIsolation=0.4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
        simpleHiddenSelections[] = {"selection_radio"};
		hiddenSelections[] = {"camo","camo_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\Unarmored\ALSE\data\ALSE.rvmat",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
		};	
		class ClothingTypes 
        {
			male = "FOG_MOD\Vests\Unarmored\ALSE\FOG_ALSE_M.p3d";
			female = "FOG_MOD\Vests\Unarmored\ALSE\FOG_ALSE_F.p3d";
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
                                "FOG_MOD\Vests\Unarmored\ALSE\data\ALSE.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\Unarmored\ALSE\data\ALSE.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\Unarmored\ALSE\data\ALSE.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\Unarmored\ALSE\data\ALSE_damage.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\Unarmored\ALSE\data\ALSE_destruct.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_destruct.rvmat"
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
	class FOG_Vest_ALSE_MC: FOG_Vest_ALSE_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\ALSE\data\ALSE_MC_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MC_co.paa"
		};
	};
    class FOG_Vest_ALSE_MCB: FOG_Vest_ALSE_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\ALSE\data\ALSE_MCB.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCB_co.paa"
		};
	};
    class FOG_Vest_ALSE_Black: FOG_Vest_ALSE_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\ALSE\data\ALSE_Black_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"
		};
	};
    class FOG_Vest_ALSE_RG: FOG_Vest_ALSE_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\ALSE\data\ALSE_RG_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa"
		};
	};
    class FOG_Vest_ALSE_CB: FOG_Vest_ALSE_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\ALSE\data\ALSE_CB_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
		};
	};
};