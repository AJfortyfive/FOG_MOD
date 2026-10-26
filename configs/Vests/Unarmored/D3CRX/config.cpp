class CfgPatches 
{
	class FOG_Gear_Vest_D3CRX
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts","DZ_Characters_Vests"};
	};
};

class cfgVehicles 
{
	class Clothing;
	class FOG_Vest_D3CRX_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "Haley Strategic D3CRX";
		descriptionShort = "The Disruptive Environments Chest Rig X has been redesigned to improve comfort and storage capabilities. The X harness was added for comfort and ultimate adjustability. The addition of 2 Multi-Mission pouches allows the rig to be more streamlined and carry mission essentials where they count.";
		model = "FOG_MOD\Vests\Unarmored\D3CRX\FOG_D3CRX_G.p3d";
		attachments[]=
		{
            "Pistol",
            "Chemlight",
			"WalkieTalkie",
			"FOG_small_patch",
			"FOG_tourniquet",
			"FOG_vest_belly"
		};
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 3;
		weight = 1000;
		itemSize[] = {3, 3};
        itemsCargoSize[] = {10, 2};
        varWetMax=0.249;
		heatIsolation=0.4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx.rvmat"
		};	
		class ClothingTypes 
        {
			male = "FOG_MOD\Vests\Unarmored\D3CRX\FOG_D3CRX_M.p3d";
			female = "FOG_MOD\Vests\Unarmored\D3CRX\FOG_D3CRX_F.p3d";
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
                                "FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx_destruct.rvmat"
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
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				
				class drop {
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FOG_Vest_D3CRX_CB: FOG_Vest_D3CRX_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx_cb_co.paa"
		};
	};
    class FOG_Vest_D3CRX_RG: FOG_Vest_D3CRX_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx_rg_co.paa"
		};
	};
    class FOG_Vest_D3CRX_Black: FOG_Vest_D3CRX_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx_black_co.paa"
		};
	};
    class FOG_Vest_D3CRX_Grey: FOG_Vest_D3CRX_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\Unarmored\D3CRX\data\d3crx_grey_co.paa"
		};
	};
};