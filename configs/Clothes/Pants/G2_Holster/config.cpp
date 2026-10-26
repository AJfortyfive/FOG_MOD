class CfgPatches
{
	class FOG_Pants_Crye_G2
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
	class FOG_Pants_Crye_G2_Holster_ColorBase: Clothing
	{
		displayName="Crye G2 Combat Pants";
		descriptionShort="Crye G2 Combat Pants.";
		model="\FOG_MOD\Clothes\Pants\G2_Holster\FOG_Crye_G2_Holster_G.p3d";
		inventorySlot[]=
		{
			"Legs"
		};
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		attachments[]=
		{
			"Pistol"
		};
        rotationFlags=34;
		weight=270;
		itemSize[]={3,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		varWetMax=0.79000002;
		heatIsolation=0.69999999;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo",
			"camo_holster"
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
								"FOG_MOD\Clothes\Pants\G2_Holster\Data\FOG_G2.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\G2_Holster\Data\FOG_G2.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\G2_Holster\Data\FOG_G2.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\G2_Holster\Data\FOG_G2_damage.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\G2_Holster\Data\FOG_G2_destruct.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Pants\G2_Holster\FOG_Crye_G2_Holster_M.p3d";
			female="\FOG_MOD\Clothes\Pants\G2_Holster\FOG_Crye_G2_Holster_F.p3d";
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
					soundSet="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Pants_Crye_G2_Holster_MC: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_MC_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_mc.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_MCB: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_MCB_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_ALPF: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_ALPF_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_ATACS: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_ATACS_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_DNC: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_DNC_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_DTG: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_DTG_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_WTG: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_WTG_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_od_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_M81: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_m81_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_AOR1: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_AOR1_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_AOR2: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_AOR2_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_CB: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_CB_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_RG: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_RG_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_od_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_Red: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_Red_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_KHK: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_KHK_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_GRY: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_GRY_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_Blue: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_blue_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
	};
	class FOG_Pants_Crye_G2_Holster_Black: FOG_Pants_Crye_G2_Holster_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\G2_Holster\data\FOG_G2_Black_co.paa",
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
	};
};