class CfgPatches
{
	class FOG_UFP_Pants_Shit
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters","DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_UFP_Pants_ColorBase: Clothing
	{
		displayName="Urban Fighter Pants";
		descriptionShort="I started using ChatGPT to come up with descriptions and I couldnt come up with a decent description for this one. idk you wear these to fight.. urbanly. Let me take a second of your attention to say I really appreciate all the support. I never expected this mod to take off, so thank you guys for the love and feedback it really means alot.";
		model="\FOG_MOD\Clothes\Pants\Urban_Fighter_pants\UFP_G.p3d";
		inventorySlot[]=
		{
			"Legs"
		};
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
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
		hiddenSelections[]=
		{
            "camo_pants",
            "camo_kneepads"
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
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP.rvmat",
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad.rvmat"
							}
						},
						
						{
							0.7,
							
							{
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP.rvmat",
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad.rvmat"
							}
						},
						
						{
							0.5,
							
							{
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP.rvmat",
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad.rvmat"
							}
						},
						
						{
							0.3,
							
							{
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP.rvmat",
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad.rvmat"
							}
						},
						
						{
							0.0,
							
							{
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP.rvmat",
                                "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Pants\Urban_Fighter_pants\UFP_M.p3d";
			female="\FOG_MOD\Clothes\Pants\Urban_Fighter_pants\UFP_F.p3d";
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
	class FOG_UFP_Pants_Black: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_Black_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_Grey: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_Grey_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_White: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_White_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_RG: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_RG_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_OD: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_OD_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_CB: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_CB_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_Tan: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_KHK_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_Urban: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_Urban_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_Cum: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_Cum_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_M81: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_M81_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_MC: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_MC_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_MCB: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_MCB_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_ALP: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_MCAL_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_MCA: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_MCA_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_MCT: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_MCT_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_DCU: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_DCU_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_6CD: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_6CD_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_AOR1: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_AOR1_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
	class FOG_UFP_Pants_AOR2: FOG_UFP_Pants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP_AOR2_co.paa",
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa"
		};
	};
};