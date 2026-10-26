class CfgPatches
{
	class FOG_MOD_Panel_Spiritus
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
    class Inventory_Base;
	class FOG_Panel_Spiritus_Base: Inventory_Base 
	{
		scope = 0;
		displayName = "Spiritus Systems Panel Assembly";
		descriptionShort=".";
		itemsize[] = {4, 3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\FOG_SpiritusPanelAss.p3d";
		inventorySlot[] = {"FOG_vest_panel"};
		attachments[]=
		{
            "VestPouch",
            "FOG_VestSlotFR",
            "TV110utilitypouch",
			"FOG_PlasticExplosive",
            "FOG_FlagRoll",
            "Backpack_1"
		};
		weight = 300;
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
								"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Panel_Spiritus_Black : FOG_Panel_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus_Black_co.paa"};
	};
	class FOG_Panel_Spiritus_RG : FOG_Panel_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus_RG_co.paa"};
	};
	class FOG_Panel_Spiritus_CB : FOG_Panel_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus_CB_co.paa"};
	};
	class FOG_Panel_Spiritus_MC : FOG_Panel_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus_MC_co.paa"};
	};
	class FOG_Panel_Spiritus_MCB : FOG_Panel_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus_MCB_co.paa"};
	};
	class FOG_Panel_Spiritus_M81 : FOG_Panel_Spiritus_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\SpiritusPanelAss\data\BackPanel_Spiritus_M81_co.paa"};
	};
};