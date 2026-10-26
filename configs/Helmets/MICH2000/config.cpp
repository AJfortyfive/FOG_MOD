class CfgPatches
{
	class FOG_MOD_Helmet_MICH2000
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
	class FOG_Helmet_MICH2000_Base: Mich2001Helmet
	{
		scope=0;
		displayName="MICH 2000 Helmet";
		descriptionShort="Modular Integrated Communications Helmet. The baseline full cut helmet, with protection from pistol to small rifle calibers. Made extremely based by early US Army Rangers during the GWOT era.";
		model="\FOG_MOD\Helmets\MICH2000\FOG_MICH2000_G.p3d";
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
            "FOG_Headset_slot",
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
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\MICH2000\data\Mich2000.rvmat"
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
                        {1.0,{"FOG_MOD\Helmets\MICH2000\data\Mich2000.rvmat"}},
						{0.7,{"FOG_MOD\Helmets\MICH2000\data\Mich2000.rvmat"}},
						{0.5,{"FOG_MOD\Helmets\MICH2000\data\Mich2000.rvmat"}},
						{0.3,{"FOG_MOD\Helmets\MICH2000\data\Mich2000_damage.rvmat"}},
						{0.0,{"FOG_MOD\Helmets\MICH2000\data\Mich2000_destruct.rvmat"}}
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
			male="\FOG_MOD\Helmets\MICH2000\FOG_MICH2000_M.p3d";
			female="\FOG_MOD\Helmets\MICH2000\FOG_MICH2000_M.p3d";
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
	class FOG_Helmet_MICH2000_Tan: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_Tan_co.paa"
        };
	};
	class FOG_Helmet_MICH2000_TanRattle: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_Tan_Rattle_co.paa"
        };
	};
    class FOG_Helmet_MICH2000_Black: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_Black_co.paa"
        };
    };
    class FOG_Helmet_MICH2000_RG: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_RG_co.paa"
        };
	};
    class FOG_Helmet_MICH2000_RGRattle: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_RG_Rattle_co.paa"
        };
	};
    class FOG_Helmet_MICH2000_OD: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_OD_co.paa"
        };
	};
    class FOG_Helmet_MICH2000_CB: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_CB_co.paa"
        };
	};
    class FOG_Helmet_MICH2000_Grey: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_Grey_co.paa"
        };
	};
	class FOG_Helmet_MICH2000_MC: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_MC_co.paa"
        };
	};
	class FOG_Helmet_MICH2000_MCB: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_MCB_co.paa"
        };
	};
	class FOG_Helmet_MICH2000_M81: FOG_Helmet_MICH2000_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\MICH2000\data\Mich2000_M81_co.paa"
        };
	};
};