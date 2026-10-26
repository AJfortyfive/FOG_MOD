class CfgPatches
{
	class FOG_Helmet_Airframe_shit
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
	class FOG_Helmet_Airframe_Base: Mich2001Helmet
	{
		scope=0;
		displayName="Crye Airframe";
		descriptionShort="The AirFrame ballistic helmet sets the standards in protection, comfort, and modularity. Accepts a cover, electronic ear pro and nightvision";
		model="\FOG_MOD\Helmets\Crye_AF\Crye_AF_G.p3d";
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
            "FOG_af_cover"
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
			"camo_base",
            "camo_velcro"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\Crye_AF\data\airframe.rvmat",
            "FOG_MOD\Helmets\Crye_AF\data\af_velcro.rvmat"
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
								"FOG_MOD\Helmets\Crye_AF\data\airframe.rvmat",
								"FOG_MOD\Helmets\Crye_AF\data\af_velcro.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Crye_AF\data\airframe.rvmat",
								"FOG_MOD\Helmets\Crye_AF\data\af_velcro.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Crye_AF\data\airframe.rvmat",
								"FOG_MOD\Helmets\Crye_AF\data\af_velcro.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Crye_AF\data\airframe_damage.rvmat",
								"FOG_MOD\Helmets\Crye_AF\data\af_velcro.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Crye_AF\data\airframe_destruct.rvmat",
								"FOG_MOD\Helmets\Crye_AF\data\af_velcro.rvmat"
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
			male="\FOG_MOD\Helmets\Crye_AF\Crye_AF_M.p3d";
			female="\FOG_MOD\Helmets\Crye_AF\Crye_AF_M.p3d";
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
	class FOG_Helmet_Airframe_CB: FOG_Helmet_Airframe_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Crye_AF\data\airframe_cb_co.paa","FOG_MOD\Helmets\Crye_AF\data\af_velcro_cb_co.paa"};
	};
	class FOG_Helmet_Airframe_RG: FOG_Helmet_Airframe_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Crye_AF\data\airframe_rg_co.paa","FOG_MOD\Helmets\Crye_AF\data\af_velcro_rg_co.paa"};
	};
	class FOG_Helmet_Airframe_Tan: FOG_Helmet_Airframe_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Crye_AF\data\airframe_tan_co.paa","FOG_MOD\Helmets\Crye_AF\data\af_velcro_tan_co.paa"};
	};
	class FOG_Helmet_Airframe_OD: FOG_Helmet_Airframe_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Crye_AF\data\airframe_od_co.paa","FOG_MOD\Helmets\Crye_AF\data\af_velcro_od_co.paa"};
	};
	class FOG_Helmet_Airframe_Black: FOG_Helmet_Airframe_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Crye_AF\data\airframe_blk_co.paa","FOG_MOD\Helmets\Crye_AF\data\af_velcro_blk_co.paa"};
	};
};