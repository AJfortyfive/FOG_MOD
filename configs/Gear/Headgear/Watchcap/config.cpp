class CfgPatches
{
	class FOG_MOD_WatchCap
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
	class FOG_Watchcap_ColorBase: Clothing
	{
        scope=0;
		displayName="Watch Cap";
		descriptionShort="Standard Issue US Army Watch Cap, typically worn in cold weather environments by soldiers in the field.";
		model="\FOG_MOD\Gear\Headgear\Watchcap\FOG_Watchcap_G.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear"
		};
		attachments[]=
		{
			"FOG_Headset_slot",
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=10;
		itemSize[]={3,2};
        varWetMax=0.249;
		heatIsolation=0.9;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_BeanieHat"
		};
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
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\Watchcap\FOG_Watchcap_M.p3d";
			female="\FOG_MOD\Gear\Headgear\Watchcap\FOG_Watchcap_F.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Watchcap_Black: FOG_Watchcap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_Black_co.paa"
		};
	};
	class FOG_Watchcap_Grey: FOG_Watchcap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_Grey_co.paa"
		};
	};
	class FOG_Watchcap_Red: FOG_Watchcap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_Gripper_co.paa"
		};
	};
	class FOG_Watchcap_CB: FOG_Watchcap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_CB_co.paa"
		};
	};
	class FOG_Watchcap_RG: FOG_Watchcap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_RG_co.paa"
		};
	};
	class FOG_Watchcap_Tan: FOG_Watchcap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_Tan_co.paa"
		};
	};
	class FOG_Watchcap_White: FOG_Watchcap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Watchcap\data\WatchCap_White_co.paa"
		};
	};
};