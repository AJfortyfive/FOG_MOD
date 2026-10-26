class CfgPatches
{
	class FOG_Ronin_Hat_Stuff
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
	class FOG_Ronin_Hat_ColorBase: Clothing
	{
        scope=0;
		displayName="Ronin Ballcap";
		descriptionShort="Ballcap from Ronin Tactical.";
		model="\FOG_MOD\Gear\Headgear\Ronin_hat\Ronin_Hat_G.p3d";
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
        varWetMax=0.3;
		heatIsolation=0.2;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
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
								"FOG_MOD\Gear\Headgear\Ronin_hat\data\Ronin_Hat.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\Ronin_hat\data\Ronin_Hat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\Ronin_hat\data\Ronin_Hat_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\Ronin_hat\data\Ronin_Hat_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\Ronin_hat\data\Ronin_Hat_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\Ronin_hat\Ronin_Hat_M.p3d";
			female="\FOG_MOD\Gear\Headgear\Ronin_hat\Ronin_Hat_F.p3d";
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
	class FOG_Ronin_Hat: FOG_Ronin_Hat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Ronin_hat\data\ronin_hat_co.paa"
		};
	};
	class FOG_Ronin_Hat_Black: FOG_Ronin_Hat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\Ronin_hat\data\ronin_hat_black_co.paa"
		};
	};
};