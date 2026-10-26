class CfgPatches
{
	class FOG_Helmet_Accessories_RAC
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
	class FOG_FastMT_RAC_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "RAC Headphones";
		descriptionShort="RAC Headphones with arms. Provides clear ambient listening ability with talk-through capabilities.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\RAC_Headset\FOG_RAC.p3d";
		inventorySlot[] = {"FOG_ear_cover"};
		weight = 50;
		hiddenSelections[]={"camo"};
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
		class AnimationSources
		{
			class arms
			{
				source="user";
				animPeriod=0.3;
				initPhase=0;
			};
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
						
						{
							1.0,
							
							{
								"FOG_MOD\Helmets\Accessories\RAC_Headset\data\helmet_rac.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\RAC_Headset\data\helmet_rac.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\RAC_Headset\data\helmet_rac_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\RAC_Headset\data\helmet_rac_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\RAC_Headset\data\helmet_rac_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_FastMT_RAC_Tan : FOG_FastMT_RAC_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FOG_MOD\Helmets\Accessories\RAC_Headset\data\helmet_rac_co.paa"};
	};
	class FOG_FastMT_RAC_Black : FOG_FastMT_RAC_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FOG_MOD\Helmets\Accessories\RAC_Headset\data\helmet_rac_black_co.paa"};
	};
	class FOG_FastMT_RAC_RG : FOG_FastMT_RAC_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FOG_MOD\Helmets\Accessories\RAC_Headset\data\helmet_rac_rg_co.paa"};
	};
};