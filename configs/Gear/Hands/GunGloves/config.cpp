class CfgPatches
{
	class FOG_Gear_Hands_GunGloves
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
	class FOG_GunGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="The Gun Glove";
		descriptionShort="The Gun Glove was designed and developed for the shooting sportsman. Manufactured to exacting standards from high performance materials assuring a long wearing and durable shooting glove, that will enhance your shooting experience.";
		model="\FOG_MOD\Gear\Hands\GunGloves\gunglove_G.p3d";
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
		heatIsolation=0.5;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Hands\GunGloves\gunglove_M.p3d";
			female="\FOG_MOD\Gear\Hands\GunGloves\gunglove_F.p3d";
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
								"FOG_MOD\Gear\Hands\GunGloves\data\gunglove.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Hands\GunGloves\data\gunglove.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_destruct.rvmat"
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
	class FOG_GunGloves_Tan: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_CO.paa"
		};
	};
	class FOG_GunGloves_Grey: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_grey_CO.paa"
		};
	};
	class FOG_GunGloves_Black: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_black_co.paa"
		};
	};
	class FOG_GunGloves_CB: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_CB_co.paa"
		};
	};
	class FOG_GunGloves_RG: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_RG_co.paa"
		};
	};
	class FOG_GunGloves_MC: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_MC_co.paa"
		};
	};
	class FOG_GunGloves_MCB: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_MCB_co.paa"
		};
	};
	class FOG_GunGloves_M81: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_M81_co.paa"
		};
	};
	class FOG_GunGloves_AOR2: FOG_GunGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.8;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Hands\GunGloves\data\gunglove_AOR2_co.paa"
		};
	};
};