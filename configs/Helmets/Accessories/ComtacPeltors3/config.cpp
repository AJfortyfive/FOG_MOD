class CfgPatches
{
	class FOG_Helmet_Accessories_Comtac3
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
	class FOG_Comtac3_Headphones_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Comtac 3 Headphones";
		descriptionShort="Comtac 3 Hearing Protection, fits on helmets with arc rails.";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Helmets\Accessories\ComtacPeltors3\Fast_SF_Comtacs_Down.p3d";
		inventorySlot[] = {"SF_Comtacs"};
		weight = 50;
		hiddenSelections[]={"arc","comtac"};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc.rvmat",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3.rvmat"
		};
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
		class AnimationSources
		{
			class arc_rotate
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
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc.rvmat",
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc.rvmat",
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_damage.rvmat",
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_damage.rvmat",
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_destruct.rvmat",
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_destruct.rvmat"
							}
						}
					};
				};
			};
        };
	};
	class FOG_Comtac3_Headphones_AJ : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_cb_AJ_co.paa"
        };
	};
	class FOG_Comtac3_Headphones_CB : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_cb_co.paa"
        };
	};
	class FOG_Comtac3_Headphones_FG : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_fg_co.paa"
        };
	};
	class FOG_Comtac3_Headphones_RG : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_rg_co.paa"
        };
	};
	class FOG_Comtac3_Headphones_RG_01 : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_RG_01_co.paa"
        };
	};
	class FOG_Comtac3_Headphones_RG_XPI : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_RG_XPI_co.paa"
        };
	};
	class FOG_Comtac3_Headphones_RG_Spray : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_RG_Spray_co.paa"
        };
	};
	class FOG_Comtac3_Headphones_Black : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_black_co.paa"
        };
	};
	class FOG_Comtac3_Headphones_CB_Velcro : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_CB_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc.rvmat",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
	class FOG_Comtac3_Headphones_RG_Velcro : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_RG_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc.rvmat",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
	class FOG_Comtac3_Headphones_FG_Velcro : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_FG_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc.rvmat",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
	class FOG_Comtac3_Headphones_Tan_Velcro : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_Tan_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc.rvmat",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
	class FOG_Comtac3_Headphones_Black_Velcro : FOG_Comtac3_Headphones_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc_co.paa",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_Black_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\arc.rvmat",
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
};