class CfgPatches
{
	class FOG_Helmet_FASTMT_shit
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
	class FOG_Helmet_FASTMT_Base: Mich2001Helmet
	{
		scope=0;
		displayName="Fast MT Super HighCut Helmet";
		descriptionShort="Certified NIJ Level III. Used by Special Forces and PMC organizations. Accepts a Task Light, Arc and Arm Headphones, an Opscore Mandible, Cover and Battery Pack.";
		model="\FOG_MOD\Helmets\Fast_MT\FOG_Fast_MT_G.p3d";
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
			"FOG_mand",
            "FOG_MT_Cover",
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
			"camo_acc",
            "camo_helmet"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails.rvmat",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet.rvmat"
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
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails.rvmat",
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails.rvmat",
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_damage.rvmat",
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_damage.rvmat",
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_destruct.rvmat",
								"FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_destruct.rvmat"
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
			male="\FOG_MOD\Helmets\Fast_MT\FOG_Fast_MT_M.p3d";
			female="\FOG_MOD\Helmets\Fast_MT\FOG_Fast_MT_M.p3d";
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
	class FOG_Helmet_FASTMT_Tan: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_Tan_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_Tan_co.paa"
        };
	};
    class FOG_Helmet_FASTMT_Black: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_Black_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_Black_co.paa"
        };
    };
    class FOG_Helmet_FASTMT_RG: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_RG_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_RG_co.paa"
        };
	};
    class FOG_Helmet_FASTMT_CB: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_CB_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_CB_co.paa"
        };
	};
    class FOG_Helmet_FASTMT_Grey: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_Grey_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_Grey_co.paa"
        };
	};
	class FOG_Helmet_FASTMT_MC: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_MC_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_MC_co.paa"
        };
	};
	class FOG_Helmet_FASTMT_MCB: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_Black_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_MCB_co.paa"
        };
	};
	class FOG_Helmet_FASTMT_MCT: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_Black_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_MCT_co.paa"
        };
	};
	class FOG_Helmet_FASTMT_MCAL: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_Black_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_MCAL_co.paa"
        };
	};
	class FOG_Helmet_FASTMT_M81: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_Black_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_M81_co.paa"
        };
	};
    class FOG_Helmet_FASTMT_AOR1: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_MC_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_AOR1_co.paa"
        };
	};
    class FOG_Helmet_FASTMT_AOR2: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_ArcRails_AOR2_co.paa",
            "FOG_MOD\Helmets\Fast_MT\Data\FASTMT_Helmet_AOR2_co.paa"
        };
	};
};