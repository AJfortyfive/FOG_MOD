class CfgPatches
{
	class FOG_MOD_FleeceCap
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
	class FOG_Fleececap_ColorBase: Clothing
	{
        scope=0;
		displayName="Fleece Cap";
		descriptionShort="Standard Issue US Army Fleece Cap, typically worn in cold weather environments by soldiers in the field.";
		model="\FOG_MOD\Gear\Headgear\FleeceCap\FOG_FleeceCap_G.p3d";
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
        varWetMax=0.349;
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
								"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Headgear\FleeceCap\FOG_FleeceCap_M.p3d";
			female="\FOG_MOD\Gear\Headgear\FleeceCap\FOG_FleeceCap_F.p3d";
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
	class FOG_Fleececap_Black: FOG_Fleececap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap_Black_co.paa"
		};
	};
	class FOG_Fleececap_Grey: FOG_Fleececap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap_Grey_co.paa"
		};
	};
	class FOG_Fleececap_CB: FOG_Fleececap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap_CB_co.paa"
		};
	};
	class FOG_Fleececap_RG: FOG_Fleececap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap_RG_co.paa"
		};
	};
	class FOG_Fleececap_White: FOG_Fleececap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Headgear\FleeceCap\data\FleeceCap_White_co.paa"
		};
	};
};