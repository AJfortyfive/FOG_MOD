class CfgPatches
{
	class FOG_Gear_Hands_MechanixGloves
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
	class FOG_MechanixGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="Mechanix Gloves";
		descriptionShort="Mechanix gloves are designed for maximum dexterity and protection. They feature a durable synthetic leather palm, breathable mesh back, and reinforced fingertips for added grip and durability.";
		model="\FOG_MOD\Gear\Hands\Mechanix\FOG_Gloves_Mechanix_G.p3d";
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
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare.rvmat"
		};
		rotationFlags=34;
		weight=50;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Hands\Mechanix\FOG_Gloves_Mechanix_M.p3d";
			female="\FOG_MOD\Gear\Hands\Mechanix\FOG_Gloves_Mechanix_F.p3d";
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
								"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare_destruct.rvmat"
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
	class FOG_MechanixGloves_Tan: FOG_MechanixGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare_tan_co.paa"
		};
	};
	class FOG_MechanixGloves_Black: FOG_MechanixGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare_Black_co.paa"
		};
	};
	class FOG_MechanixGloves_Green: FOG_MechanixGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare_Green_co.paa"
		};
	};
	class FOG_MechanixGloves_RG: FOG_MechanixGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_bare_RG_co.paa"
		};
	};
	class FOG_MechanixGloves_MC: FOG_MechanixGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\Mex_gloves_mc_co.paa"
		};
	};
	class FOG_MechanixGloves_Black_Words: FOG_MechanixGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\Mex_gloves_blk_co.paa"
		};
	};
	class FOG_MechanixGloves_Skele: FOG_MechanixGloves_ColorBase
	{
		scope=2;
		displayName="Skele Hands";
		descriptionShort="the hands with the Skele on it.";
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_Skele_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Hands\Mechanix\data\MechanixGloves_Skele.rvmat"
		};
	};
};