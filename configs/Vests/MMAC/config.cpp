class CfgPatches
{
	class FOG_Vest_MMAC_stuff
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
	class FOG_Vest_MMAC_Base: Clothing
	{
		scope=0;
		displayName="MMAC Plate Carrier";
		descriptionShort="The Eagle Industries Multi-Mission Tactical Vest is a traditional profile vest offering modularity and scalability. The tactical vest is constructed of MIL-SPEC 500 denier nylon and is fully MOLLE/PALS compatible. Only takes proprietary FOG attachments.";
		model="\FOG_MOD\Vests\MMAC\MMAC_G.p3d";
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
        varWetMax=0.249;
		heatIsolation=0.6;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]= 
        {
			"camo_vest",
            "camo_radio"
		};
		simpleHiddenSelections[] = {"selection_radio"};
		class ClothingTypes
		{
			male="\FOG_MOD\Vests\MMAC\MMAC_M.p3d";
			female="\FOG_MOD\Vests\MMAC\MMAC_F.p3d";
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
								"FOG_MOD\Vests\MMAC\data\MMAC_vest.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\MMAC\data\MMAC_vest.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\MMAC\data\MMAC_vest_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\MMAC\data\MMAC_vest_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\MMAC\data\MMAC_vest_destruct.rvmat",
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
	class FOG_Vest_MMAC_CB: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_CB_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
		};
	};
	class FOG_Vest_MMAC_Black: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_Black_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"
		};
	};
	class FOG_Vest_MMAC_RG: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_RG_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa"
		};
	};
	class FOG_Vest_MMAC_MC: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_MC_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MC_co.paa"
		};
	};
	class FOG_Vest_MMAC_MCB: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_MCB_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCB_co.paa"
		};
	};
	class FOG_Vest_MMAC_MCT: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_MCT_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCT_co.paa"
		};
	};
	class FOG_Vest_MMAC_MCA: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_MCA_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCA_co.paa"
		};
	};
	class FOG_Vest_MMAC_MCAL: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_MCAL_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MCAL_co.paa"
		};
	};
	class FOG_Vest_MMAC_M81: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_M81_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_M81_co.paa"
		};
	};
	class FOG_Vest_MMAC_AOR2: FOG_Vest_MMAC_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\MMAC\data\MMAC_AOR2_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa"
		};
	};
};