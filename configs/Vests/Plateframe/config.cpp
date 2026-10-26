class CfgPatches 
{
	class FOG_MOD_Vest_Plateframe
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
	class FOG_Vest_Plateframe_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "S&S Plateframe Carrier";
		descriptionShort = "The S&S Plateframe is a lightweight, modular plate carrier designed for maximum mobility and comfort. Constructed from durable materials, it provides essential ballistic protection while allowing for a full range of motion. Its minimalist design is ideal for operators who prioritize speed and agility in the field.";
		model = "FOG_MOD\Vests\Plateframe\FOG_Plateframe_G.p3d";
		attachments[]=
		{
			"WalkieTalkie",
            "Chemlight",
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
			"FOG_MOD\Vests\Plateframe\data\PlateFrame.rvmat","FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
		};	
		class ClothingTypes {
			male = "FOG_MOD\Vests\Plateframe\FOG_Plateframe_M.p3d";
			female = "FOG_MOD\Vests\Plateframe\FOG_Plateframe_F.p3d";
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
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame.rvmat",
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame_Comms.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\Plateframe\data\PlateFrame.rvmat",
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
	class FOG_Vest_Plateframe_CB: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_cb_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_cb_co.paa"
		};
	};
    class FOG_Vest_Plateframe_RG: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_rg_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_rg_co.paa"
		};
	};
    class FOG_Vest_Plateframe_RG_CB: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_rg_cb.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_cb_co.paa"
		};
	};
    class FOG_Vest_Plateframe_Black: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_black.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_black.paa"
		};
	};
    class FOG_Vest_Plateframe_Grey: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_gray_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_gray_co.paa"
		};
	};
    class FOG_Vest_Plateframe_White: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_white.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_gray_co.paa"
		};
	};
    class FOG_Vest_Plateframe_MC: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_mc_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_mc_co.paa"
		};
	};
    class FOG_Vest_Plateframe_MC_Black: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_MC_BLK.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_black.paa"
		};
	};
    class FOG_Vest_Plateframe_MCB: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_MCB_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_MCB_co.paa"
		};
	};
    class FOG_Vest_Plateframe_MCT: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_MCT_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_MCT_co.paa"
		};
	};
    class FOG_Vest_Plateframe_MCAL: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_MCAL_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_MCAL_co.paa"
		};
	};
    class FOG_Vest_Plateframe_M81: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_M81_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_M81_co.paa"
		};
	};
    class FOG_Vest_Plateframe_AOR1: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_AOR1_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_AOR1_co.paa"
		};
	};
    class FOG_Vest_Plateframe_AOR2: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_aor2_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_aor2_co.paa"
		};
	};
    class FOG_Vest_Plateframe_AOR2_CB: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_aor2_cb.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_aor2_co.paa"
		};
	};
    class FOG_Vest_Plateframe_LV: FOG_Vest_Plateframe_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Plateframe\data\plateframe_LV_co.paa",
            "FOG_MOD\Vests\Plateframe\data\plateframecomms_LV_co.paa"
		};
	};
};