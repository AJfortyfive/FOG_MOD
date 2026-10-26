class CfgPatches
{
	class FOG_Belts_TacticalFanny
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "DZ_Data",
            "DZ_Characters",
            "DZ_Scripts",
            "FOG_MOD_Scripts"
		};
	};
};
class CfgVehicles
{
    class Clothing;
	class FOG_Belt_TacticalFanny_Base: Clothing
	{
		scope=0;
		displayName="Tactical FannyPack";
		descriptionShort="The Tactical FannyPack is a versatile and practical accessory designed for tactical operations. It features multiple compartments for organizing gear, a durable construction for rugged use, and an adjustable strap for a secure fit.";
		model="\FOG_MOD\Gear\Belts\TacticalFanny\FOG_TacticalFanny_G.p3d";
		attachments[]=
        {
            "FOG_MRB_esstac",
            "FOG_LBT_pouch",
            "Belt_Back"
        };
		vehicleClass="Clothing";
		simulation="clothing";
        varWetMax=0.249;
		heatIsolation=0.3;
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		itemSize[]={2,2};
		weight=150;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		lootCategory="Crafted";
		hiddenSelections[]=
		{
			"camo"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\mil_belt_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"DZ\characters\belts\data\mil_belt_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\characters\belts\data\mil_belt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Belts\TacticalFanny\FOG_TacticalFanny.p3d";
			female="\FOG_MOD\Gear\Belts\TacticalFanny\FOG_TacticalFanny.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class FOG_Belt_TacticalFanny_CB : FOG_Belt_TacticalFanny_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\TacticalFanny\data\tacticalfanny_cb_co.paa"};
	};
	class FOG_Belt_TacticalFanny_RG : FOG_Belt_TacticalFanny_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\TacticalFanny\data\tacticalfanny_rg_co.paa"};
	};
	class FOG_Belt_TacticalFanny_BLK : FOG_Belt_TacticalFanny_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\TacticalFanny\data\tacticalfanny_black_co.paa"};
	};
};