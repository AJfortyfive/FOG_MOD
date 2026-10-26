class CfgPatches
{
	class FOG_BISON_Belt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "DZ_Data",
            "DZ_Characters",
            "DZ_Scripts"
		};
	};
};
class CfgVehicles
{
    class Clothing;
	class FOG_BISON_Belt_ColorBase: Clothing
	{
		scope=0;
		displayName="FC BISON Belt";
		descriptionShort="Ferro Concepts BISON Belt.";
		model="\FOG_MOD\Gear\Belts\FC_BISON\FOG_FCBISON_G.p3d";
		attachments[]=
        {
            "FOG_MRB_dropmag",
            "FOG_MRB_esstac",
            "FOG_MRB_singlemag",
            "FOG_Ronin_Holsterslot",
            "FOG_LBT_pouch",
			"FOG_FannyPack"
        };
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		itemSize[]={3,1};
		weight=150;
        varWetMax=0.249;
		heatIsolation=0.2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		lootCategory="Crafted";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_MC_co.paa"
		};
		simpleHiddenSelections[]=
		{
			"selection_holster"
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
								""
							}
						},
						
						{
							0.7,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.3,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Belts\FC_BISON\FOG_FCBISON_M.p3d";
			female="\FOG_MOD\Gear\Belts\FC_BISON\FOG_FCBISON_F.p3d";
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

	class FOG_BISON_Belt_CB : FOG_BISON_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_CB_co.paa"
        };
	};
	class FOG_BISON_Belt_RG : FOG_BISON_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_RG_co.paa"
        };
	};
	class FOG_BISON_Belt_Black : FOG_BISON_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_Black_co.paa"
        };
	};
	class FOG_BISON_Belt_Grey : FOG_BISON_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_Grey_co.paa"
        };
	};
	class FOG_BISON_Belt_White : FOG_BISON_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_White_co.paa"
        };
	};
	class FOG_BISON_Belt_MC : FOG_BISON_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_MC_co.paa"
        };
	};
	class FOG_BISON_Belt_MCB : FOG_BISON_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_MCB_co.paa"
        };
	};
	class FOG_BISON_Belt_MCT : FOG_BISON_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Gear\Belts\FC_BISON\data\FCBISON_Belt_MCT_co.paa"
        };
	};
};