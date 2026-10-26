class CfgPatches
{
	class FOG_Vest_AVS_stuff
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "FOG_MOD_Slots"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Vest_AVS_Base: Clothing
	{
		scope=0;
		displayName="Crye AVS Plate Carrier";
		descriptionShort="The Crye Adaptable Vest System. This specific configuration is set up with AVS MBAV Platebags, which are custom fit for each plate size and are designed to work with MBAV ballistic inserts. Only takes proprietary FOG attachments.";
		model="\FOG_MOD\Vests\FOG_AVS\FOG_AVS_G.p3d";
		attachments[]=
		{
			"WalkieTalkie",
            "Chemlight",
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
		hiddenSelections[]= 
        {
			"camo_vest",
            "camo_radiopouch"
		};
		simpleHiddenSelections[] = {"selection_radio"};
		class ClothingTypes
		{
			male="\FOG_MOD\Vests\FOG_AVS\FOG_AVS_M.p3d";
			female="\FOG_MOD\Vests\FOG_AVS\FOG_AVS_F.p3d";
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
								"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_destruct.rvmat",
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
	class FOG_Vest_AVS_MC: FOG_Vest_AVS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_mc_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_mc_co.paa"
		};
	};
	class FOG_Vest_AVS_CB: FOG_Vest_AVS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_cb_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_cb_co.paa"
		};
	};
	class FOG_Vest_AVS_Black: FOG_Vest_AVS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_blk_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_blk_co.paa"
		};
	};
	class FOG_Vest_AVS_RG: FOG_Vest_AVS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_rg_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_rg_co.paa"
		};
	};
	class FOG_Vest_AVS_AOR1: FOG_Vest_AVS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_aor1_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_aor1_co.paa"
		};
	};
	class FOG_Vest_AVS_AOR2: FOG_Vest_AVS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_aor2_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_aor2_co.paa"
		};
	};
	class FOG_Vest_AVS_ALP: FOG_Vest_AVS_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_AVS\data\AVS_A\avs_a_alp_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_alp_co.paa"
		};
	};
};