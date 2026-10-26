class CfgPatches
{
	class FOG_Helmet_FAST_Bump_shit
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
	class FOG_Helmet_FAST_Bump_Base: Mich2001Helmet
	{
		scope=0;
		displayName="Fast Bump Helmet";
		descriptionShort="FAST Bump Helmet. An unarmored, tactical helmet designed for mobility. Used by Special Forces and PMC organizations.";
		model="\FOG_MOD\Helmets\Fast_Bump\Fast_Bump_G.p3d";
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
            "FOG_small_patch"
		};
		rotationFlags=2;
		weight=600;
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
			"camo_base",
            "patch_callsign"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\Fast_Bump\data\Fast_Bump_base.rvmat",
            "FOG_MOD\Helmets\Fast_Bump\data\callsign_patch.rvmat"
		};
		simpleHiddenSelections[] = {"mountbase"};
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
								"FOG_MOD\Helmets\Fast_Bump\data\Fast_Bump_base.rvmat",
								"FOG_MOD\Helmets\Fast_Bump\data\callsign_patch.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Fast_Bump\data\Fast_Bump_base.rvmat",
								"FOG_MOD\Helmets\Fast_Bump\data\callsign_patch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Fast_Bump\data\Fast_Bump_base.rvmat",
								"FOG_MOD\Helmets\Fast_Bump\data\callsign_patch.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Fast_Bump\data\Fast_Bump_base_damage.rvmat",
								"FOG_MOD\Helmets\Fast_Bump\data\callsign_patch.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Fast_Bump\data\Fast_Bump_base_destruct.rvmat",
								"FOG_MOD\Helmets\Fast_Bump\data\callsign_patch.rvmat"
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
						damage=0.9;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.9;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.65;
					};
					class Blood
					{
						damage=0.8;
					};
					class Shock
					{
						damage=0.85;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.65;
					};
					class Blood
					{
						damage=0.8;
					};
					class Shock
					{
						damage=0.85;
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
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Helmets\Fast_Bump\Fast_Bump_MF.p3d";
			female="\FOG_MOD\Helmets\Fast_Bump\Fast_Bump_MF.p3d";
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
	class FOG_Helmet_FAST_Bump_Tan: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_khk_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_CB: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_cb_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_RG: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_RG_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_OD: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_OD_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_Black: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_black_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_Grey: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_grey_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_MC: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_MC_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_MCB: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_MCB_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_MCT: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_MCT_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
	class FOG_Helmet_FAST_Bump_ERDL: FOG_Helmet_FAST_Bump_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Fast_Bump\data\fast_bump_base_ERDL_co.paa","FOG_MOD\Helmets\Fast_Bump\data\callsign_patch_AJ.paa"};
	};
};