class CfgPatches 
{
	class FOG_MOD_Vest_JPC2
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
	class FOG_Vest_JPC2_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "Crye JPC 2.0";
		descriptionShort = "The Crye Jumpable Plate Carrier 2.0 is an updated version of the original JPC, designed for enhanced mobility and comfort. It features improved materials and construction techniques, making it lighter and more durable. The JPC 2.0 offers modular attachment points for pouches and gear, allowing users to customize their loadout while maintaining a low profile. Ideal for tactical operations where speed and agility are paramount.";
		model = "FOG_MOD\Vests\JPC2\FOG_JPC2_G.p3d";
		attachments[]=
		{
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"FOG_MRB_singlemag",
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
		itemSize[] = {5, 5};
        varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[] = {"camo", "camo_comms"};
        simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest.rvmat","FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments.rvmat"
		};	
		class ClothingTypes {
			male = "FOG_MOD\Vests\JPC2\FOG_JPC2_M.p3d";
			female = "FOG_MOD\Vests\JPC2\FOG_JPC2_F.p3d";
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
                                "FOG_MOD\Vests\JPC2\data\JPC_2_Vest.rvmat",
                                "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\JPC2\data\JPC_2_Vest.rvmat",
                                "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\JPC2\data\JPC_2_Vest.rvmat",
                                "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\JPC2\data\JPC_2_Vest.rvmat",
                                "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\JPC2\data\JPC_2_Vest.rvmat",
                                "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments.rvmat"
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
	class FOG_Vest_JPC2_CB: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_CB_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_CB_co.paa"
		};
	};
    class FOG_Vest_JPC2_RG: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_RG_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_RG_co.paa"
		};
	};
    class FOG_Vest_JPC2_Black: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_Black_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_Black_co.paa"
		};
	};
    class FOG_Vest_JPC2_Grey: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_Grey_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_Grey_co.paa"
		};
	};
    class FOG_Vest_JPC2_MC: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_MC_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_MC_co.paa"
		};
	};
    class FOG_Vest_JPC2_MCB: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_MCB_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_MCB_co.paa"
		};
	};
    class FOG_Vest_JPC2_MCT: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_MCT_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_MCT_co.paa"
		};
	};
    class FOG_Vest_JPC2_MCA: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_MCA_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_MCA_co.paa"
		};
	};
    class FOG_Vest_JPC2_MCAL: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_MCAL_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_MCAL_co.paa"
		};
	};
    class FOG_Vest_JPC2_M81: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_M81_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_M81_co.paa"
		};
	};
    class FOG_Vest_JPC2_AOR1: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_AOR1_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_AOR1_co.paa"
		};
	};
    class FOG_Vest_JPC2_AOR2: FOG_Vest_JPC2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\JPC2\data\JPC_2_Vest_AOR2_co.paa",
            "FOG_MOD\Vests\JPC2\data\JPC_2_MiscCommsAttachments_AOR2_co.paa"
		};
	};
};