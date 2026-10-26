class CfgPatches
{
	class FOG_MOD_Headgear_AMP
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class FOG_AMP_ColorBase: Inventory_Base
	{
        scope=0;
		displayName="OpsCore AMP Headset";
		descriptionShort="Headphones with Arms. This advanced tactical communications headset integrates seamlessly with Ops-Core helmets and accessories to create a lightweight protective headborne system for any mission and environment.";
		Model = "\FOG_MOD\Helmets\Accessories\Opscore_AMP\FOG_Opscore_AMP_Helmet.p3d";
        itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		inventorySlot[] = {"FOG_ear_cover"};
		weight = 50;
		hiddenSelections[]={"camo1","camo2"};
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
								"FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1.rvmat",
                                "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1.rvmat",
                                "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1_damage.rvmat",
                                "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1_damage.rvmat",
                                "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1_destruct.rvmat",
                                "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_AMP_Tan : FOG_AMP_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1_co.paa",
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2_co.paa"
        };
	};
	class FOG_AMP_MC : FOG_AMP_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1_mc_co.paa",
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2_mc_co.paa"
        };
	};
	class FOG_AMP_Black : FOG_AMP_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1_blk_co.paa",
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2_blk_co.paa"
        };
	};
	class FOG_AMP_MCB : FOG_AMP_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1_mcb_co.paa",
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2_mcb_co.paa"
        };
	};
	class FOG_AMP_MCBT : FOG_AMP_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp1_co.paa",
            "FOG_MOD\Helmets\Accessories\Opscore_AMP\data\opscore_amp2_mcbt_co.paa"
        };
	};
};