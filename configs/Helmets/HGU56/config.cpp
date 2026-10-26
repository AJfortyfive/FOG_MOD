class CfgPatches
{
	class FOG_MOD_Helmet_HGU56
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
	class FOG_Helmet_HGU56_ColorBase: Mich2001Helmet
	{
		scope=0;
		displayName="Gentex HGU-56/P";
		descriptionShort="The Gentex HGU-56/P Rotary Wing Aircrew Ballistic Helmet (ABH) System provides innovative materials and processes have been adopted to provide unprecedented ballistic and impact protection. Can accept proprietary ANVIS9 NVGs, Maxillofacial Shield, and visor.";
		model="\FOG_MOD\Helmets\HGU56\FOG_HGU56_G.p3d";
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
            "FOG_HGU_Mask",
            "FOG_HGU_Visor",
            "FOG_small_patch"
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
			"FOG_MOD\Helmets\HGU56\data\HGU_Helmet.rvmat"
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
						
						{1.0,{"FOG_MOD\Helmets\HGU56\data\HGU_Helmet.rvmat"}},
						{0.7,{"FOG_MOD\Helmets\HGU56\data\HGU_Helmet.rvmat"}},
                        {0.5,{"FOG_MOD\Helmets\HGU56\data\HGU_Helmet.rvmat"}},
                        {0.3,{"FOG_MOD\Helmets\HGU56\data\HGU_Helmet.rvmat"}},
                        {0.0,{"FOG_MOD\Helmets\HGU56\data\HGU_Helmet.rvmat"}}
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
					class Health{amage=0.5;};
					class Blood{damage=0;};
					class Shock{damage=0.25;};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Helmets\HGU56\FOG_HGU56_M.p3d";
			female="\FOG_MOD\Helmets\HGU56\FOG_HGU56_M.p3d";
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
	class FOG_Helmet_HGU56_Black: FOG_Helmet_HGU56_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Helmet_Black_co.paa"};
	};
	class FOG_Helmet_HGU56_Grey: FOG_Helmet_HGU56_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Helmet_GRY_co.paa"};
	};
	class FOG_Helmet_HGU56_Tan: FOG_Helmet_HGU56_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Helmet_Tan_co.paa"};
	};
	class FOG_Helmet_HGU56_T499: FOG_Helmet_HGU56_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Helmet_T499_co.paa"};
	};
	class FOG_Helmet_HGU56_OD: FOG_Helmet_HGU56_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Helmet_OD_co.paa"};
	};
	class Inventory_Base;
	class FOG_HGU_MFS_ColorBase : Inventory_Base 
	{
		scope = 0;
		displayName = "HGU MFS Shield";
		descriptionShort="The HGU Maxillofacial Shield. Purely Cosmetic.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\HGU56\FOG_HGU56_Mask.p3d";
		inventorySlot[] = {"FOG_HGU_Mask"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[]={8};
		repairCosts[]={25};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\HGU56\data\HGU_Mask.rvmat"
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{1.0,{"FOG_MOD\Helmets\HGU56\data\HGU_Mask.rvmat"}},
						{0.7,{"FOG_MOD\Helmets\HGU56\data\HGU_Mask.rvmat"}},
                        {0.5,{"FOG_MOD\Helmets\HGU56\data\HGU_Mask.rvmat"}},
                        {0.3,{"FOG_MOD\Helmets\HGU56\data\HGU_Mask.rvmat"}},
                        {0.0,{"FOG_MOD\Helmets\HGU56\data\HGU_Mask.rvmat"}}
					};
				};
			};
        };
	};
	class FOG_HGU_MFS_Black : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_Black_co.paa"};
	};
	class FOG_HGU_MFS_Grey : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_GRY_co.paa"};
	};
	class FOG_HGU_MFS_Tan : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_Tan_co.paa"};
	};
	class FOG_HGU_MFS_T499 : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_T499_co.paa"};
	};
	class FOG_HGU_MFS_OD : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_OD_co.paa"};
	};
	class FOG_HGU_MFS_Vader : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_Vader_co.paa"};
	};
	class FOG_HGU_MFS_Smiley : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_smiley_co.paa"};
	};
	class FOG_HGU_MFS_SL : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_SL_co.paa"};
	};
	class FOG_HGU_MFS_Skull : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_Skull_co.paa"};
	};
	class FOG_HGU_MFS_Pig : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_Pig_co.paa"};
	};
	class FOG_HGU_MFS_Mustache : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_Mustache_co.paa"};
	};
	class FOG_HGU_MFS_MonsterGrin : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_monster_grin_co.paa"};
	};
	class FOG_HGU_MFS_Joker : FOG_HGU_MFS_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Mask_Joker_co.paa"};
	};
	class FOG_HGU_Visor_ColorBase : Inventory_Base 
	{
		scope = 0;
		displayName = "HGU Visor";
		descriptionShort="The HGU Visor. Purely Cosmetic.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\HGU56\FOG_HGU56_Visor.p3d";
		inventorySlot[] = {"FOG_HGU_Visor"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[]={8};
		repairCosts[]={25};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\HGU56\data\HGU_Visor.rvmat"
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{1.0,{"FOG_MOD\Helmets\HGU56\data\HGU_Visor.rvmat"}},
						{0.7,{"FOG_MOD\Helmets\HGU56\data\HGU_Visor.rvmat"}},
                        {0.5,{"FOG_MOD\Helmets\HGU56\data\HGU_Visor.rvmat"}},
                        {0.3,{"FOG_MOD\Helmets\HGU56\data\HGU_Visor.rvmat"}},
                        {0.0,{"FOG_MOD\Helmets\HGU56\data\HGU_Visor.rvmat"}}
					};
				};
			};
        };
	};
	class FOG_HGU_Visor_Black : FOG_HGU_Visor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\HGU56\data\HGU_Visor_co.paa"};
	};
};