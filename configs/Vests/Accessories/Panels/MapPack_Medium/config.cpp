class CfgPatches
{
	class FOG_MOD_Panel_MapPackMed
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
    class Inventory_Base ;
	class FOG_Panel_MapPackMed_ColorBase : Inventory_Base 
	{
		scope = 0;
		displayName = "Medium Map Pack";
		descriptionShort="A Medum sized panel pack designed to be mounted on the back of plate carriers. Molle for outside attachments.";
		itemsize[] = {4, 3};
        itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\FOG_MedMapPack.p3d";
		attachments[]= {"FOG_big_patch_only","FOG_MRB_singlemag"};
		inventorySlot[] = {"FOG_vest_panel"};
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
								"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Panel_MapPackMed_Black : FOG_Panel_MapPackMed_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag_black_co.paa"};
	};
	class FOG_Panel_MapPackMed_CB : FOG_Panel_MapPackMed_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag_cb_co.paa"};
	};
	class FOG_Panel_MapPackMed_RG : FOG_Panel_MapPackMed_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag_rg_co.paa"};
	};
	class FOG_Panel_MapPackMed_Khk : FOG_Panel_MapPackMed_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\data\mapbag_khk_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFOG_MedMapPack: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_vest_panel"
		};
		model="\FOG_MOD\Vests\Accessories\Panels\MapPack_Medium\FOG_MedMapPack.p3d";
	};
};