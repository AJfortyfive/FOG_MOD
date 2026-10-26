class CfgPatches
{
	class FOG_Helmet_FAST_SF_shit
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters","DZ_Characters_Headgear"
		};
	};
};
class CfgVehicles
{
	class Mich2001Helmet;
	class FOG_Helmet_FAST_SF_Base: Mich2001Helmet
	{
		scope=0;
		displayName="Fast SF Helmet";
		descriptionShort="FAST SF Highcut Helmet. Certified NIJ Level III. Used by Special Forces and PMC organizations.";
		model="\FOG_MOD\Helmets\Fast_SF\Fast_SF_G.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG",
            "FOG_HMTL",
            "SF_Comtacs",
            "FOG_ear_cover",
            "SF_Cover",
            "FOG_small_patch",
            "SF_BattPack"
		};
		rotationFlags=2;
		weight=1000;
		itemSize[]={4,3};
		noNVStrap=1;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camo_helmet",
            "camo_mount",
            "camo_rail"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\Fast_SF\data\SF.rvmat",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount.rvmat",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail.rvmat"
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
                                "FOG_MOD\Helmets\Fast_SF\data\SF.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Mount.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Rail.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Helmets\Fast_SF\data\SF.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Mount.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Rail.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Helmets\Fast_SF\data\SF.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Mount.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Rail.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Helmets\Fast_SF\data\SF_damage.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_damage.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Helmets\Fast_SF\data\SF_destruct.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_destruct.rvmat",
                                "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_destruct.rvmat"
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
						damage=0.55000001;
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
				class Infected
				{
					class Health
					{
						damage=0.55000001;
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
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Helmets\Fast_SF\Fast_SF_M.p3d";
			female="\FOG_MOD\Helmets\Fast_SF\Fast_SF_M.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Helmet_FAST_SF_Tan: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_Tan_BLK: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_Tan_BLK_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_RG: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_RG_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_RG_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_RG_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_RG_BLK: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_RG_BLK_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_Black: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_MudTan: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MudTan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_MudTan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_MudTan_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_CB: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_CB_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_CB_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_CB_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_GRY: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_GRY_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_CB_BLK: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_CB_BLK_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_MC: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MC_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_MC_Black: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MC_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_MCB: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MCB_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_MCB2: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MCB2_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_ERDL: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_M81_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_CB_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_CB_co.paa"
        };
	};
	class FOG_Helmet_FAST_SF_ERDL_BLK: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_M81_BLK_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_Base: FOG_Helmet_FAST_SF_Base
	{
		scope = 0;
        displayName="AJs Fast SF Helmet";
		descriptionShort="AJs FAST SF Highcut Helmet. Certified NIJ Level III. Used by Special Forces and PMC organizations.";
        model="\FOG_MOD\Helmets\Fast_SF\Fast_SF_G_AJ_Unbuckled.p3d";
		attachments[]=
		{
			"NVG",
            "FOG_HMTL",
            "SF_Comtacs",
            "FOG_ear_cover",
            "SF_Cover",
            "FOG_small_patch",
            "SF_BattPack"
		};
		hiddenSelections[]=
		{
			"camo_helmet",
            "camo_mount",
            "camo_rail",
            "camo_airframe"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\Fast_SF\data\SF.rvmat",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount.rvmat",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail.rvmat",
            "fog_mod\helmets\crye_af\data\airframe.rvmat"
		};
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MC_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_tan_co.paa"
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Helmets\Fast_SF\Fast_SF_M_AJ_Unbuckled.p3d";
			female="\FOG_MOD\Helmets\Fast_SF\Fast_SF_M_AJ_Unbuckled.p3d";
		};
	};
	class FOG_Helmet_AJs_FAST_SF_Tan: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_tan_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_Tan_BLK: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_Tan_BLK_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_tan_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_RG: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_RG_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_RG_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_RG_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_rg_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_RG_BLK: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_RG_BLK_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_Black: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_MudTan: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MudTan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_MudTan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_MudTan_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_tan_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_CB: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_CB_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_CB_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_CB_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_cb_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_GRY: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_GRY_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_CB_BLK: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_CB_BLK_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_MC: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MC_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_tan_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_MC_Black: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MC_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_MCB: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MCB_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_MCB2: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MCB2_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_ERDL: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_M81_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_CB_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_CB_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_tan_co.paa"
        };
	};
	class FOG_Helmet_AJs_FAST_SF_ERDL_BLK: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_M81_BLK_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Black_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Black_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_blk_co.paa"
        };
	};
	class FOG_Helmet_FAST_FTHS_MC: FOG_Helmet_FAST_SF_Base
	{
		scope = 2;
        displayName="USSOCOM FTHS";
		descriptionShort="USSOCOM FTHS";
        model="\FOG_MOD\Helmets\Fast_SF\Fast_SF_FTHS_G.p3d";
		attachments[]=
		{
			"NVG",
            "FOG_HMTL",
            "SF_Comtacs",
            "FOG_ear_cover",
            "FOG_small_patch",
            "SF_BattPack"
		};
		hiddenSelections[]=
		{
			"camo_helmet",
            "camo_mount",
            "camo_rail",
            "camo_airframe",
            "camo_velcro"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\Fast_SF\data\FTHS\SF_FTHS.rvmat",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount.rvmat",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail.rvmat",
            "fog_mod\helmets\crye_af\data\airframe.rvmat",
            "fog_mod\helmets\fast_sf\data\fths\fths_velcro.rvmat"
		};
		hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Helmets\Fast_SF\data\SF_MC_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_tan_co.paa",
            "fog_mod\helmets\fast_sf\data\fths\fths_velcro_tan_co.paa"
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Helmets\Fast_SF\Fast_SF_FTHS_M.p3d";
			female="\FOG_MOD\Helmets\Fast_SF\Fast_SF_FTHS_M.p3d";
		};
	};
	class FOG_Helmet_FAST_FTHS_Tan: FOG_Helmet_FAST_FTHS_MC
	{
		scope = 2;
		hiddenSelectionsTextures[] =
        {
            "FOG_MOD\Helmets\Fast_SF\data\FTHS\FTHS_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Mount_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_SF\data\SF_Rail_Tan_co.paa",
            "fog_mod\helmets\crye_af\data\airframe_tan_co.paa",
            "fog_mod\helmets\fast_sf\data\fths\fths_velcro_tan_co.paa"
        };
	};
};