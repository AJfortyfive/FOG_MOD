class CfgPatches
{
	class FOG_Helmet_Exfil_shit
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
	class FOG_Helmet_Exfil_Base: Mich2001Helmet
	{
		scope=0;
		displayName="Team Wendy Exfil";
		descriptionShort="​The Team Wendy Exfil Helmet is a high-performance ballistic helmet designed for military and law enforcement personnel. It offers superior protection, comfort, and modularity, making it suitable for a wide range of operational environments.";
		model="\FOG_MOD\Helmets\Wendy_Exfil\Wendy_Exfil_G.p3d";
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
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil.rvmat"
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
								"FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_destruct.rvmat"
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
			male="\FOG_MOD\Helmets\Wendy_Exfil\Wendy_Exfil_M.p3d";
			female="\FOG_MOD\Helmets\Wendy_Exfil\Wendy_Exfil_M.p3d";
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
	class FOG_Helmet_Exfil_Black: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_Black_co.paa"
        };
	};
	class FOG_Helmet_Exfil_Grey: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_Grey_co.paa"
        };
	};
	class FOG_Helmet_Exfil_Tan: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_CB_co.paa"
        };
	};
	class FOG_Helmet_Exfil_RG: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_RG_co.paa"
        };
	};
	class FOG_Helmet_Exfil_MC: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_MC_co.paa"
        };
	};
	class FOG_Helmet_Exfil_MCB: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_MCB_co.paa"
        };
	};
	class FOG_Helmet_Exfil_MCT: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_MCT_co.paa"
        };
	};
	class FOG_Helmet_Exfil_MCAL: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_MCAL_co.paa"
        };
	};
	class FOG_Helmet_Exfil_M81: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_M81_co.paa"
        };
	};
	class FOG_Helmet_Exfil_AOR1: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_AOR1_co.paa"
        };
	};
	class FOG_Helmet_Exfil_AOR2: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Wendy_Exfil\data\TW_Exfil_AOR2_co.paa"
        };
	};
};