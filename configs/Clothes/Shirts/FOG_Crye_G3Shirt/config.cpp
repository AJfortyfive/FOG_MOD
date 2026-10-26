class CfgPatches
{
	class FOG_Crye_G3_Shirt_Shit
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters","DZ_Characters_Tops"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Crye_G3_Shirt_ColorBase: Clothing
	{
		displayName="Crye G3 Combat Shirt";
		descriptionShort="Crye G3 Combat Shirt. Press and hold O to roll your sleeves";
		model="\FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Crye_G3_Shirt_G.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
        attachments[]={"FOG_small_patch"};
		weight=270;
		itemSize[]={5,4};
		itemsCargoSize[]={7,6};
		quickBarBonus=1;
		varWetMax=0.7;
		heatIsolation=0.5;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[] = 
        {
			"camo",
			"cuffs",
            "personality"
        };
		simpleHiddenSelections[] = 
        {
			"selection_halfcuffs",
            "selection_halfsleeve",
			"selection_quartercuffs",
			"selection_quartersleeve"
        };
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MC_OCP_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mc_co.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt.rvmat",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs.rvmat"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 700;
					healthLevels[] = 
					{
						{1.0,{"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs.rvmat"}},
						{0.7,{"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs.rvmat"}},
						{0.5,{"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_damage.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs.rvmat"}},
						{0.3,{"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_damage.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs.rvmat"}},
						{0.0,{"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_destruct.rvmat","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Crye_G3_Shirt_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Crye_G3_Shirt_F.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Crye_G3_Shirt_MC: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MC_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mc_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_MCB: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MCB_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mcb_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_MCT: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MCT_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mct_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_MCA: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MCA_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mca_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_MCAL: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		displayName = "Crye G3 Combat Shirt - Multicam Alpine";
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MCAL_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mcal_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_6CD: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_DCDU_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_dcdu_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_AOR1: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_AOR1_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_aor1_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_AOR2: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_AOR2_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_aor2_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_Black: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_Black_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_blk_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_CB: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_CB_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_cb_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_RG: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_RG_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_rg_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_DCU: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_DCU_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_dcu_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_DTGR: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_TIGERD_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_tigerd_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_Grey: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_grey_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_blk_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_M81: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_M81_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_m81_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_MARPAT: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MARPAT_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_MARPAT_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_RDBS: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_RDB_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_RDB_co.paa"
        };
	};

	class FOG_Crye_G3_Shirt_TGR: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_TIGERWD_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_tigerwd_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_RG_BlackTrim: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_RG_blacktrim_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_rg_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_MC_FRACU: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MC_Ranger_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mc_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_MC_BlackTrim: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MC_blacktrim_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mc_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_MC_Patagonia: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\pata_mc_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mc_co.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\pata_CombatShirt.rvmat",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs.rvmat"
        };
	};
	class FOG_Crye_G3_Shirt_Blue: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_Blue_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_blue_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_AMCU: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_AMCU_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_amcu_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_ALPF: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_ALPF_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_alpf_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_DNC: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_DNC_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_dnc_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_DPM: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_DPM_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_dpm_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_ERDL_Red: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_ERDL_Red_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_erdl_red_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_KHK: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_KHK_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_khk_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_Pantera: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_Pantera_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_pantera_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_BTGR: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_TIGER_Blue_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_tiger_blue_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_KBTGR: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_TIGER_KB_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_tigerkb_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_RTGR: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_TIGER_RED_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_tiger_red_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_UCP: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_UCP_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_ucp_co.paa"
        };
	};
	class FOG_Crye_G3_Shirt_White: FOG_Crye_G3_Shirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_White_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_white_co.paa"
        };
	};
};