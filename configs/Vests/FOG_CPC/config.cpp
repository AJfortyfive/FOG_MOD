class CfgPatches
{
	class FOG_MOD_Vests_CPC
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Vest_CPC_Base: Clothing
	{
		scope=0;
		displayName="Cage Plate Carrier CPC";
		descriptionShort="Offers unsurpassed comfort and load support in a robust plate carrier configuration. It is releasable and accepts soft and hard armor inserts. Only takes proprietary FOG attachments.";
		model="\FOG_MOD\Vests\FOG_CPC\FOG_CPC_G.p3d";
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
		varWetMax=0.5;
		heatIsolation=0.6;
		repairableWithKits[]={3};
		repairCosts[]={25};
        simpleHiddenSelections[] = {"selection_radio"};
		hiddenSelections[]= 
        {
			"camo",
            "camo_radio"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Vests\FOG_CPC\FOG_CPC_M.p3d";
			female="\FOG_MOD\Vests\FOG_CPC\FOG_CPC_F.p3d";
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
								"FOG_MOD\Vests\FOG_CPC\data\FOG_CPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\FOG_CPC\data\FOG_CPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\FOG_CPC\data\FOG_CPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\FOG_CPC\data\FOG_CPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\FOG_CPC\data\FOG_CPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_destruct.rvmat"
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
	class FOG_Vest_CPC_CB: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_CB_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
		};
	};
	class FOG_Vest_CPC_RG: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_RG_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa"
		};
	};
	class FOG_Vest_CPC_Black: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_Black_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"
		};
	};
	class FOG_Vest_CPC_MC: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_MC_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MC_co.paa"
		};
	};
	class FOG_Vest_CPC_MCB: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_MCB_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCB_co.paa"
		};
	};
	class FOG_Vest_CPC_MCA: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_MCA_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_co.paa"
		};
	};
	class FOG_Vest_CPC_MCAL: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_MCAL_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCAL_co.paa"
		};
	};
	class FOG_Vest_CPC_AOR1: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_AOR1_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_AOR1_co.paa"
		};
	};
	class FOG_Vest_CPC_AOR2: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_AOR2_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_AOR2_co.paa"
		};
	};
	class FOG_Vest_CPC_ATACS: FOG_Vest_CPC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_CPC\data\CryeCPC_ATACS_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_ATACSAU_co.paa"
		};
	};
};
