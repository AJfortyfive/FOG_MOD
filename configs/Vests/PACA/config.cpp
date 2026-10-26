class CfgPatches 
{
	class FOG_Gear_Vest_PACA
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
	class FOG_Vest_PACA_ColorBase : Clothing 
    {
		scope = 0;
		displayName = "PACA Soft Armor";
		descriptionShort = "Light but durable and reliable body armor protecting only the vital areas, fitted with Class II armor plates..";
		model = "FOG_MOD\Vests\PACA\FOG_PACA_G.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 2;
		weight = 4000;
		itemSize[] = {5, 5};
        varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\PACA\data\PACA.rvmat"
		};	
		class ClothingTypes {
			male = "FOG_MOD\Vests\PACA\FOG_PACA_M.p3d";
			female = "FOG_MOD\Vests\PACA\FOG_PACA_F.p3d";
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
                                "FOG_MOD\Vests\PACA\data\PACA.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Vests\PACA\data\PACA.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Vests\PACA\data\PACA_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Vests\PACA\data\PACA_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Vests\PACA\data\PACA_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.35;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.45;
					};
				};
				class Infected
				{
                    class Health
                    {
                        damage=0.75;
                    };
                    class Blood
                    {
                        damage=0;
                    };
                    class Shock
                    {
                        damage=0.55;
                    };
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
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
	class FOG_Vest_PACA_Black: FOG_Vest_PACA_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\PACA\data\PACA_black_co.paa"
		};
	};
};
