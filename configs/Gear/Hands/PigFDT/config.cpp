class CfgPatches
{
	class FOG_Gear_Hands_PIGFDT_Gloves
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
	class FOG_PIGFDT_Gloves_ColorBase: Clothing
	{
		scope=0;
		displayName="PIG (FDT) Delta Gloves";
		descriptionShort="The PIG Delta Gloves from Ferro Concepts are a minimal glove designed from the ground up for gunfighters. Featuring full-touch screen compatibility, and a high level of dexterity. Fold-over finger construction eliminates fingertip discomfort and the single-layer palm gives great tactile sensitivity.";
		model="\FOG_MOD\Gear\Hands\PigFDT\FOG_PIG_FDT_G.p3d";
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
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT.rvmat"
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
			male="\FOG_MOD\Gear\Hands\PigFDT\FOG_PIG_FDT_M.p3d";
			female="\FOG_MOD\Gear\Hands\PigFDT\FOG_PIG_FDT_F.p3d";
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
								"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_destruct.rvmat"
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
	class FOG_PIGFDT_Gloves_Tan: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_GG_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_CB: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_CB_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_RG: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_RG_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_Black: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_Black_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_Grey: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_Grey_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_AJ: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_BRED_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_MC: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_MC_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_MCB: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_MCB_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_MCT: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_MCT_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_MCAL: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_MCAL_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_AOR1: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_AOR1_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_AOR2: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_AOR2_co.paa"
		};
	};
	class FOG_PIGFDT_Gloves_M81: FOG_PIGFDT_Gloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\PigFDT\data\PIG_FDT_M81_co.paa"
		};
	};
};