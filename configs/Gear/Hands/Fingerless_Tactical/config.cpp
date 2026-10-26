class CfgPatches
{
	class FOG_Tactical_Fingerless_Gloves_stuff
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Tactical_Fingerless_Gloves_ColorBase: Clothing
	{
		scope=0;
		displayName="Tactical Fingerless Gloves";
		descriptionShort="Gloves, no finger covers, we get it youre edgy.";
		model="\FOG_MOD\Gear\Hands\Fingerless_Tactical\Tactical_Fingerless_G.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		hiddenSelections[]=
		{
			"camo",
			"personality"
		};
		rotationFlags=34;
		weight=50;
		itemSize[]={2,2};
		varWetMax=0.79;
		heatIsolation=0.3;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Hands\Fingerless_Tactical\Tactical_Fingerless_M.p3d";
			female="\FOG_MOD\Gear\Hands\Fingerless_Tactical\Tactical_Fingerless_F.p3d";
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
								"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical_destruct.rvmat"
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
	class FOG_Tactical_Fingerless_Gloves_Green: FOG_Tactical_Fingerless_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical_green_co.paa",
			""
		};
	};
	class FOG_Tactical_Fingerless_Gloves_Black: FOG_Tactical_Fingerless_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical_black_co.paa",
			""
		};
	};
	class FOG_Tactical_Fingerless_Gloves_Tan: FOG_Tactical_Fingerless_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical_tan_co.paa",
			""
		};
	};
	class FOG_Tactical_Fingerless_Gloves_MC: FOG_Tactical_Fingerless_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical_MC_co.paa",
			""
		};
	};
	class FOG_Tactical_Fingerless_Gloves_Red: FOG_Tactical_Fingerless_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Fingerless_Tactical\data\fingerless_tactical_red_co.paa",
			""
		};
	};
};