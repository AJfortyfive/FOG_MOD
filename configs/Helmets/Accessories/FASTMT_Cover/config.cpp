class CfgPatches
{
	class FOG_Helmet_Accessories_MTCover
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
    class FOG_FASTMT_Cover_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "FAST MT Cover";
		descriptionShort="Helmet Cover to add camoflauge, only fits the FAST MT Helmet.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\FASTMT_Cover\FOG_FAST_MT_Cover.p3d";
		inventorySlot[] = {"FOG_MT_Cover"};
		attachments[]={"FOG_small_patch","SF_BattPack"};
		weight = 20;
		hiddenSelections[]={"camo"};
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
								"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_FASTMT_Cover_MC : FOG_FASTMT_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_mc_co.paa"};
	};
	class FOG_FASTMT_Cover_MCB : FOG_FASTMT_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_mcb_co.paa"};
	};
	class FOG_FASTMT_Cover_AOR1 : FOG_FASTMT_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_aor1_co.paa"};
	};
	class FOG_FASTMT_Cover_AOR2 : FOG_FASTMT_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_aor2_co.paa"};
	};
	class FOG_FASTMT_Cover_ALP : FOG_FASTMT_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_alpine_co.paa"};
	};
	class FOG_FASTMT_Cover_RG : FOG_FASTMT_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_rg_co.paa"};
	};
	class FOG_FASTMT_Cover_CB : FOG_FASTMT_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_cb_co.paa"};
	};
	class FOG_FASTMT_Cover_Black : FOG_FASTMT_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\FASTMT_Cover\data\mt_cover_blk_co.paa"};
	};
};	