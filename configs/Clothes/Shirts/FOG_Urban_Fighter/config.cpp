class CfgPatches
{
	class FOG_UFJ_Shirt_Shit
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
	class FOG_UFJ_Shirt_ColorBase: Clothing
	{
		displayName="Urban Fighters Jacket";
		descriptionShort="A thicker combat shirt, with a hood. Designed for operations in colder environments.";
		model="\FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\FOG_UFJ_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		varWetMax=0.4;
		heatIsolation=0.6;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]={"camo_base","camo_hood","camo_pads"};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Base.rvmat",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood.rvmat",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads.rvmat"
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
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Base.rvmat",
								"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Base.rvmat",
								"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Base_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Base_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Base_destruct.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_destruct.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\FOG_UFJ_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\FOG_UFJ_F.p3d";
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
	class FOG_UFJ_Shirt_MC: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MC_blacktrim_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_Black_co.paa"
		};
	};
	class FOG_UFJ_Shirt_MCB: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MCB_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_Black_co.paa"
		};
	};
	class FOG_UFJ_Shirt_RG: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_RG_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_RG_co.paa"
		};
	};
	class FOG_UFJ_Shirt_CB: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_CB_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_CB_co.paa"
		};
	};
	class FOG_UFJ_Shirt_Black: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_Black_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_Black_co.paa"
		};
	};
	class FOG_UFJ_Shirt_Grey: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_grey_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_Black_co.paa"
		};
	};
	class FOG_UFJ_Shirt_ERDL: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_M81_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_RG_co.paa"
		};
	};
	class FOG_UFJ_Shirt_ERDL_RG: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_ERDL_RG_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_RG_co.paa"
		};
	};
	class FOG_UFJ_Shirt_White: FOG_UFJ_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]={"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_white_co.paa","FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_White_co.paa","FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_Black_co.paa"};
	};
};