class CfgPatches
{
	class FOG_Helmet_Accessories_HMTL
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data","DZ_Characters","DZ_Characters_Headgear","DZ_Weapons_Lights"
		};
	};
};
class CfgVehicles
{	
	class UniversalLight;
	class FOG_HMTL_Light_Base : UniversalLight 
	{
		scope = 0;
		displayName = "Helmet Mounted Task Light";
		descriptionShort="Task Light for low light conditions, mounts to a helmet with FAST rails. For use with proprietary FOG Helmets.";
		itemsize[] = {2, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\HMTL_SF\FOG_HMTL.p3d";
		inventorySlot[] = {"FOG_HMTL"};
		weight = 50;
		hiddenSelections[]=
        {
			"camo",
			"reflector",
			"glass",
			"reflector_far"
        };
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
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
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "dz\gear\navigation\data\compass_glass.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "dz\gear\navigation\data\compass_glass.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "dz\gear\navigation\data\compass_glass.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "dz\gear\navigation\data\compass_glass.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
                                "dz\gear\navigation\data\compass_glass.rvmat",
                                "FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_HMTL_Light_Tan : FOG_HMTL_Light_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_ca.paa",
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_ca.paa",
            "#(argb,8,8,3)color(0.603922,0.603922,0.603922,0.3,co)",
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_ca.paa"
        };
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
			"dz\gear\navigation\data\compass_glass.rvmat",
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat"
		};
	};
	class FOG_HMTL_Light_Black : FOG_HMTL_Light_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_Black_ca.paa",
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_Black_ca.paa",
            "#(argb,8,8,3)color(0.603922,0.603922,0.603922,0.3,co)",
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_Black_ca.paa"
        };
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
			"dz\gear\navigation\data\compass_glass.rvmat",
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat"
		};
	};
	class FOG_HMTL_Light_TwoTone : FOG_HMTL_Light_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_twotone_ca.paa",
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_twotone_ca.paa",
            "#(argb,8,8,3)color(0.603922,0.603922,0.603922,0.3,co)",
            "FOG_MOD\Helmets\Accessories\HMTL_SF\data\HMTL_light_twotone_ca.paa"
        };
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat",
			"dz\gear\navigation\data\compass_glass.rvmat",
			"FOG_MOD\Helmets\accessories\hmtl_sf\data\hmtl.rvmat"
		};
	};
};