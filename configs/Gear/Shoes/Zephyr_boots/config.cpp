class CfgPatches
{
	class FOG_MOD_Boots_Zypher
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
	class FOG_Zypher_Boots_Base: Clothing
	{
		scope=0;
		displayName="Lowa Zypher Combat Boots";
		descriptionShort="Lowa Zypher GTX Mid TF. Worn by CAG GOON S Tier Chads. Makes you sexy, and comfortable.";
		model="\FOG_MOD\Gear\Shoes\Zephyr_boots\Zephyr_boots_G.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		itemSize[]={3,3};
		weight=400;
        varWetMax=0.5;
		heatIsolation=0.6;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		soundAttType="Boots";
		hiddenSelections[]=
		{
			"camo_boots",
            "camo_sock"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots.rvmat",
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks.rvmat"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Shoes\Zephyr_boots\Zephyr_boots_M.p3d";
			female="\FOG_MOD\Gear\Shoes\Zephyr_boots\Zephyr_boots_F.p3d";
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
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots.rvmat",
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots.rvmat",
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_damage.rvmat",
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_damage.rvmat",
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_destruct.rvmat",
                                "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Zypher_Boots_Tan_Socks: FOG_Zypher_Boots_Base
	{
		scope=2;
        varWetMax=0.4;
		heatIsolation=0.9;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_tan_co.paa",
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks_brown_co.paa"
        };
	};
	class FOG_Zypher_Boots_Black_Socks: FOG_Zypher_Boots_Base
	{
		scope=2;
        varWetMax=0.4;
		heatIsolation=0.9;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_black_co.paa",
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks_brown_co.paa"
        };
	};
	class FOG_Zypher_Boots_RG_Socks: FOG_Zypher_Boots_Base
	{
		scope=2;
        varWetMax=0.4;
		heatIsolation=0.9;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_rg_co.paa",
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks_brown_co.paa"
        };
	};
	class FOG_Zypher_Boots_CB_Socks: FOG_Zypher_Boots_Base
	{
		scope=2;
        varWetMax=0.4;
		heatIsolation=0.9;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_cb_co.paa",
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\socks_brown_co.paa"
        };
	};
	class FOG_Zypher_Boots_Tan_NoSocks: FOG_Zypher_Boots_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_tan_co.paa",
            ""
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots.rvmat",
            ""
		};
	};
	class FOG_Zypher_Boots_Black_NoSocks: FOG_Zypher_Boots_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_black_co.paa",
            ""
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots.rvmat",
            ""
		};
	};
	class FOG_Zypher_Boots_RG_NoSocks: FOG_Zypher_Boots_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_rg_co.paa",
            ""
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots.rvmat",
            ""
		};
	};
	class FOG_Zypher_Boots_CB_NoSocks: FOG_Zypher_Boots_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots_cb_co.paa",
            ""
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\Zephyr_boots\data\zephyrboots.rvmat",
            ""
		};
	};
};