class CfgPatches
{
	class FOG_Helmet_MTEK_Flux
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
	class FOG_Helmet_MTEK_Flux_Base: Mich2001Helmet
	{
		scope=0;
		displayName="MTEK Flux Helmet";
		descriptionShort="This is literally only in Fog for kb.";
		model="\FOG_MOD\Helmets\MTEK_Flux\FOG_MTEK_Flux_G.p3d";
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
            "camo_velcro"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet.rvmat",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro.rvmat"
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
                        {1.0,{"FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet.rvmat","FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro.rvmat"}},
						{0.7,{"FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet.rvmat","FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro.rvmat"}},
						{0.5,{"FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet.rvmat","FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro.rvmat"}},
						{0.3,{"FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_damage.rvmat","FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_damage.rvmat"}},
						{0.0,{"FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_destruct.rvmat","FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health{damage=0.25;};
					class Blood{damage=0;};
					class Shock{damage=0.5;};
				};
				class Melee
				{
					class Health{damage=0.55;};
					class Blood{damage=0;};
					class Shock{damage=0.5;};
				};
				class Infected
				{
					class Health{damage=0.55;};
					class Blood{damage=0;};
					class Shock{damage=0.5;};
				};
				class FragGrenade
				{
					class Health{damage=0.5;};
					class Blood{damage=0;};
					class Shock{damage=0.25;};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Helmets\MTEK_Flux\FOG_MTEK_Flux_M.p3d";
			female="\FOG_MOD\Helmets\MTEK_Flux\FOG_MTEK_Flux_M.p3d";
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
	class FOG_Helmet_MTEK_Flux_CB: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_CB_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_tan_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_CB_BLK: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_CB_Black_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_BLK: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_black_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_RG: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_RG_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_green_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_RG_BLK: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_RG_Black_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_Grey: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_grey_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_grey_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_MC: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_MC_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_ltan_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_MC_BLK: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_MC_Black_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_MCB: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_MCB_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_MCT: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_MCT_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_MCAL: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_MCAL_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_AOR1: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_AOR1_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_ltan_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_AOR2: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_AOR2_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_M81: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_M81_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_DNC: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_DNC_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_DTGR: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_DTGR_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
	class FOG_Helmet_MTEK_Flux_KBTGR: FOG_Helmet_MTEK_Flux_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_KBTGR_co.paa",
            "FOG_MOD\Helmets\MTEK_Flux\data\flux_helmet_velcro_black_co.paa"
        };
	};
};