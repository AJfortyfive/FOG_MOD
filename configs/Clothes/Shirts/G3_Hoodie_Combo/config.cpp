class CfgPatches
{
	class FOG_MOD_Shirts_G3Hoodie
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
	class FOG_G3_Hoodie_ColorBase: Clothing
	{
		displayName="Crye G3 with Hoodie";
		descriptionShort="A Crye G3 Combat shirt over a hoodie";
		model="\FOG_MOD\Clothes\Shirts\G3_Hoodie_Combo\G3Hoodie_G.p3d";
		inventorySlot[]={"Body"}; 
        attachments[]={"FOG_small_patch"};
		itemInfo[]={"Clothing","Body"};
		weight=470;
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};
		quickBarBonus=1;
		varWetMax=0.4;
		heatIsolation=0.9;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]={"camo_g3","camo_hoodie","personality"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt.rvmat",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie.rvmat"
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
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\G3_Hoodie_Combo\G3Hoodie_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\G3_Hoodie_Combo\G3Hoodie_F.p3d";
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
	class FOG_G2_Hoodie_MC: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		displayName="Crye G2 with Hoodie";
		descriptionShort="A Crye G2 Combat shirt over a hoodie";
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G2_HD_Top_MC_Ranger_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G2_CombatShirt.rvmat",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie.rvmat"
		};	
	};
	class FOG_G3_Hoodie_MC: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_MC_Ranger_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
	};
	class FOG_G3_Hoodie_Black: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_Black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
	};
	class FOG_G3_Hoodie_Blue: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_Blue_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
	};
	class FOG_G3_Hoodie_DPM: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_DPM_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
	};
	class FOG_G3_Hoodie_MC_Pata: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		displayName="Crye G3 Patagonia with Hoodie";
		descriptionShort="A Crye G3 Patagonia Combat shirt over a hoodie";
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\pata_mc_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\pata_CombatShirt.rvmat",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie.rvmat"
		};
	};
	class FOG_G3_Hoodie_AOR1: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_AOR1_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
	};
	class FOG_G3_Hoodie_AOR2: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_AOR2_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
	};
	class FOG_G3_Hoodie_M81: FOG_G3_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\G3_CombatShirt_M81_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
	};
};