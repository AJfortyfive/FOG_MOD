class CfgPatches
{
	class FOG_Gear_Hands_WinterGloves
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
	class FOG_WinterGloves_Base: Clothing
	{
		scope=0;
		displayName="Winterized Combat Gloves";
		descriptionShort="These combat gloves enable the wearer comfort and dexterity while operating in even the harshest conditions.";
		model="\FOG_MOD\Gear\Hands\WinterGloves\FOG_WinterGloves_G.p3d";
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
		varWetMax=0.249;
		heatIsolation=0.9;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Hands\WinterGloves\FOG_WinterGloves_M.p3d";
			female="\FOG_MOD\Gear\Hands\WinterGloves\FOG_WinterGloves_F.p3d";
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
								"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_destruct.rvmat"
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
	class FOG_WinterGloves_Tan: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_Tan_co.paa"
		};
	};
	class FOG_WinterGloves_White: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_White_co.paa"
		};
	};
	class FOG_WinterGloves_Black: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_Black_co.paa"
		};
	};
	class FOG_WinterGloves_CB: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_CB_co.paa"
		};
	};
	class FOG_WinterGloves_RG: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_RG_co.paa"
		};
	};
	class FOG_WinterGloves_MC: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_MC_co.paa"
		};
	};
	class FOG_WinterGloves_MCB: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_MCB_co.paa"
		};
	};
	class FOG_WinterGloves_MCAL: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_MCAL_co.paa"
		};
	};
	class FOG_WinterGloves_Red: FOG_WinterGloves_Base
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\WinterGloves\data\WinterGloves_Red_co.paa"
		};
	};
};