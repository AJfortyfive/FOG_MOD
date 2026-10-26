class CfgPatches
{
	class FOG_Helmet_Accessories_AFCover
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
    class Inventory_Base;
	class FOG_Airframe_Cover_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Crye Airframe Cover";
		descriptionShort="Cover for the Crye Presicion Airframe. Purely Cosmetic.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\Crye_AF_cover.p3d";
		inventorySlot[] = {"FOG_af_cover"};
		weight = 50;
		hiddenSelections[]={"camo_cover"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
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
						
						{
							1.0,
							
							{
								"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_destruct.rvmat"
							}
						}
					};
				};
			};
        };
	};
	class FOG_Airframe_Cover_CB : FOG_Airframe_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_cb_co.paa"};
	};
	class FOG_Airframe_Cover_MC : FOG_Airframe_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_mc_co.paa"};
	};
	class FOG_Airframe_Cover_Black : FOG_Airframe_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_blk_co.paa"};
	};
	class FOG_Airframe_Cover_MCB : FOG_Airframe_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_mcb_co.paa"};
	};
	class FOG_Airframe_Cover_RG : FOG_Airframe_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_rg_co.paa"};
	};
	class FOG_Airframe_Cover_ALP : FOG_Airframe_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_alpine_co.paa"};
	};
	class FOG_Airframe_Cover_AOR1 : FOG_Airframe_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_aor1_co.paa"};
	};
	class FOG_Airframe_Cover_AOR2 : FOG_Airframe_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\data\af_cover_aor2_co.paa"};
	};
};