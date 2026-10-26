class CfgPatches
{
	class FOG_Helmet_Accessories_SFCover
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
	class FOG_SF_Cover_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "FAST SF Cover";
		descriptionShort="Helmet Cover to add camoflauge, only fits the FAST SF Helmet.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\SF_Cover\Fast_SF_Cover.p3d";
		inventorySlot[] = {"SF_Cover"};
		attachments[]={"FOG_small_patch","SF_BattPack"};
		weight = 50;
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
								"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_SF_Cover_MC : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_MC_co.paa"};
	};
	class FOG_SF_Cover_MCA : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_MCA_co.paa"};
	};
	class FOG_SF_Cover_MCAL : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_MCAL_co.paa"};
	};
	class FOG_SF_Cover_MCT : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_MCT_co.paa"};
	};
	class FOG_SF_Cover_MCB : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_MCB_co.paa"};
	};
	class FOG_SF_Cover_AOR1 : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_AOR1_co.paa"};
	};
	class FOG_SF_Cover_AOR2 : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_AOR2_co.paa"};
	};
	class FOG_SF_Cover_M81 : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_M81_co.paa"};
	};
	class FOG_SF_Cover_CB : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_CB_co.paa"};
	};
	class FOG_SF_Cover_RG : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_RG_co.paa"};
	};
	class FOG_SF_Cover_Black : FOG_SF_Cover_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Helmets\Accessories\SF_Cover\data\FC_SF_Cover_Black_co.paa"};
	};
};