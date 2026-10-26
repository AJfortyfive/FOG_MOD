class CfgPatches
{
	class FOG_COMTAC3_Headset_Stuff
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
	class Clothing;
	class FOG_COMTAC3_Headset_ColorBase: Clothing
	{
        scope=0;
		displayName="Comtac 3 Headset";
		descriptionShort="Peltor Comtac 3 standalone earpro.";
		model="\FOG_MOD\Gear\Headgear\Headsets\Comtac3\FOG_Comtac3_G.p3d";
        repairableWithKits[]={7,5};
        repairCosts[]={25,25};
		inventorySlot[]=
		{
			"Headgear",
            "Mask",
            "FOG_Headset_slot"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=50;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.2;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\Headsets\Comtac3\FOG_Comtac3_M.p3d";
			female="\FOG_MOD\Gear\Headgear\Headsets\Comtac3\FOG_Comtac3_M.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_COMTAC3_Headset_AJ: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_cb_AJ_co.paa"
		};
	};
	class FOG_COMTAC3_Headset_CB: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_cb_co.paa"
		};
	};
	class FOG_COMTAC3_Headset_RG: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_rg_co.paa"
		};
	};
	class FOG_COMTAC3_Headset_RG_01: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_RG_01_co.paa"
		};
	};
	class FOG_COMTAC3_Headset_RG_Spray: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_RG_Spray_co.paa"
		};
	};
	class FOG_COMTAC3_Headset_RG_XPI: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_RG_XPI_co.paa"
		};
	};
	class FOG_COMTAC3_Headset_FG: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_fg_co.paa"
		};
	};
	class FOG_COMTAC3_Headset_Black: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\comtac3_black_co.paa"
		};
	};
	class FOG_COMTAC3_Headset_CB_Velcro: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_CB_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
	class FOG_COMTAC3_Headset_RG_Velcro: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_RG_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
	class FOG_COMTAC3_Headset_FG_Velcro: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_FG_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
	class FOG_COMTAC3_Headset_Tan_Velcro: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_Tan_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
	class FOG_COMTAC3_Headset_Black_Velcro: FOG_COMTAC3_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_Velcro_Black_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Helmets\Accessories\ComtacPeltors3\data\Comtac3_velcro.rvmat"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFOG_Comtac3_G: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_Headset_slot"
		};
		model="\FOG_MOD\Gear\Headgear\Headsets\Comtac3\FOG_Comtac3_G.p3d";
	};
};