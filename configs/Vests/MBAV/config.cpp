class CfgPatches 
{
	class FOG_Gear_Vest_LVMBAV
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
	class FOG_Vest_LVMBAV_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "Crye Precision LV-MBAV";
		descriptionShort = "Adopted by US-SOCOM and designated LV-MBAV, this carrier accepts MBAV soft inserts and provides a lightweight streamlined system for low-visibility applications.";
		model = "FOG_MOD\Vests\MBAV\FOG_MBAV_G.p3d";
		attachments[]=
		{
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"FOG_MRB_singlemag",
			"VestPouch",
			"FOG_vest_belly"
		};
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 2;
		weight = 5000;
		itemSize[] = {5, 5};
        varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV.rvmat"
		};	
		class ClothingTypes {
			male = "FOG_MOD\Vests\MBAV\FOG_MBAV_M.p3d";
			female = "FOG_MOD\Vests\MBAV\FOG_MBAV_F.p3d";
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
                                "FOG_MOD\Vests\MBAV\data\LVMBAV.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\MBAV\data\LVMBAV.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\MBAV\data\LVMBAV.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\MBAV\data\LVMBAV.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\MBAV\data\LVMBAV.rvmat"
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
	class FOG_Vest_LVMBAV_CB: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_CB_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_RG: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_RG_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_Tan: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_Tan_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_Black: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_Black_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_Grey: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_Grey_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_White: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_White_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_MC: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_MC_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_MCB: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_MCB_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_MCT: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_MCT_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_MCA: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_MCA_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_MCAL: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_MCAL_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_M81: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_M81_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_AOR1: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_AOR1_co.paa"
		};
	};
    class FOG_Vest_LVMBAV_AOR2: FOG_Vest_LVMBAV_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MBAV\data\LVMBAV_AOR2_co.paa"
		};
	};
};
