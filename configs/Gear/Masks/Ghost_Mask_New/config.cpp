class CfgPatches
{
	class FOG_Ghost_Mask_New_Stuff
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
	class FOG_Ghost_Mask_New_ColorBase: Clothing
	{
        scope=0;
		displayName="Ghost's New Mask";
		descriptionShort="A sleek and tactical accessory designed for covert operations. The mask's advanced design features a lightweight frame and advanced ventilation for maximum comfort and breathability.The mask's signature skull design strikes fear into the hearts of your enemies, making it the perfect accessory for any stealth mission.";
		model="\FOG_MOD\Gear\Masks\Ghost_Mask_New\Ghost_Mask_N_G.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		attachments[]=
		{
			"FOG_Headset_slot",
		};
		vehicleClass="Clothing";
		simulation="clothing";
		weight=100;
		itemSize[]={3,3};
		varWetMax=0.249;
		heatIsolation=0.8;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		hiddenSelections[]=
		{
            "camo_balaclava",
			"camo_head",
            "camo_skull"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava.rvmat",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth.rvmat",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask.rvmat"
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
                                "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava.rvmat",
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth.rvmat",
                                ""
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava.rvmat",
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth.rvmat",
                                ""
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_damage.rvmat",
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth_damage.rvmat",
                                ""
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_damage.rvmat",
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth_damage.rvmat",
                                ""
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_destruct.rvmat",
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth_destruct.rvmat",
                                ""
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\Ghost_Mask_New\Ghost_Mask_N_M.p3d";
			female="\FOG_MOD\Gear\Masks\Ghost_Mask_New\Ghost_Mask_N_F.p3d";
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
	class FOG_Ghost_Mask_New: FOG_Ghost_Mask_New_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava.paa",
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask.paa",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask.paa"
		};
	};
	class FOG_Ghost_Mask_Black: FOG_Ghost_Mask_New_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_black_co.paa",
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_black_co.paa",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_black_co.paa"
		};
	};
	class FOG_Ghost_Mask_Black_White: FOG_Ghost_Mask_New_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_black_co.paa",
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_black_co.paa",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask.paa"
		};
	};
	class FOG_Ghost_Mask_Black_Gold: FOG_Ghost_Mask_New_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_black_co.paa",
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_black_co.paa",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_gold_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava.rvmat",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth.rvmat",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_gold.rvmat"
		};
	};
	class FOG_Ghost_Mask_RG: FOG_Ghost_Mask_New_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_RG_co.paa",
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_RG_co.paa",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_RG_co.paa"
		};
	};
	class FOG_Ghost_Mask_Tan: FOG_Ghost_Mask_New_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_tan_co.paa",
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_tan_co.paa",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_tan_co.paa"
		};
	};
	class FOG_Ghost_Mask_Red: FOG_Ghost_Mask_New_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_red_co.paa",
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_red_co.paa",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask.paa"
		};
	};
	class FOG_Ghost_Mask_Red_Gold: FOG_Ghost_Mask_New_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_red_co.paa",
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_red_co.paa",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_gold_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava.rvmat",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth.rvmat",
            "FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_gold.rvmat"
		};
	};
	class FOG_Ghost_Headset_ColorBase: Clothing
	{
        scope=0;
		displayName="Ghost's Headset";
		descriptionShort="A lightweight headset is equipped with state-of-the-art technology, providing crystal clear communication in even the most chaotic environments.";
		model="\FOG_MOD\Gear\Masks\Ghost_Mask_New\Ghost_Mask_N_Headset_G.p3d";
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear",
            "Mask",
            "FOG_Headset_slot"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=2000;
		itemSize[]={3,3};
		varWetMax=0.249;
		heatIsolation=0.8;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		hiddenSelections[]=
		{
			"camo_headset"
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
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\headset.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\headset.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\headset_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\headset_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\headset_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\Ghost_Mask_New\Ghost_Mask_N_Headset_M.p3d";
			female="\FOG_MOD\Gear\Masks\Ghost_Mask_New\Ghost_Mask_N_Headset_M.p3d";
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
	class FOG_Ghost_Headset_Tan: FOG_Ghost_Headset_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\headset.paa"
		};
	};
};
class CfgSlots
{
	class Slot_FOG_Headset_slot
	{
		name = "FOG_Headset_slot";
		displayName = "Headset";
		ghostIcon = "";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyGhost_Mask_N_Headset_G: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_Headset_slot"
		};
		model="\FOG_MOD\Gear\Masks\Ghost_Mask_New\Ghost_Mask_N_Headset_G.p3d";
	};
};