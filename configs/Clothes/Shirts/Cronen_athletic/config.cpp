class CfgPatches
{
	class FOG_Cronen_Shirt_Shit
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
	class FOG_Cronen_Shirt_ColorBase: Clothing
	{
		displayName="Cronen Athletic Shirt";
		descriptionShort="Shirt designed for physical training.";
		model="\FOG_MOD\Clothes\Shirts\Cronen_athletic\cronen_shirt_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
        varWetMax=0.8;
		heatIsolation=0.3;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo",
            "personality"
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
								"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt.rvmat",
                                ""
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt.rvmat",
                                ""
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_damage.rvmat",
                                ""
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_damage.rvmat",
                                ""
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_destruct.rvmat",
                                ""
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\Cronen_athletic\cronen_shirt_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\Cronen_athletic\cronen_shirt_F.p3d";
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
	class FOG_Cronen_Shirt_Black: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_black_co.paa"
		};
	};
	class FOG_Cronen_Shirt_Grey: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_grey_co.paa"
		};
	};
	class FOG_Cronen_Shirt_White: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_white_co.paa"
		};
	};
	class FOG_Cronen_Shirt_RG: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_RG_co.paa"
		};
	};
	class FOG_Cronen_Shirt_CB: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_CB_co.paa"
		};
	};
	class FOG_Cronen_Shirt_MC: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_MC_co.paa",
		};
	};
	class FOG_Cronen_Shirt_MCB: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_MCB_co.paa",
		};
	};
	class FOG_Cronen_Shirt_MCT: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_MCT_co.paa",
		};
	};
	class FOG_Cronen_Shirt_MCA: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_MCA_co.paa",
		};
	};
	class FOG_Cronen_Shirt_MCAL: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_MCAL_co.paa",
		};
	};
	class FOG_Cronen_Shirt_M81: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_M81_co.paa",
		};
	};
	class FOG_Cronen_Shirt_AOR1: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_AOR1_co.paa",
		};
	};
	class FOG_Cronen_Shirt_AOR2: FOG_Cronen_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Cronen_athletic\data\cronen_shirt_AOR2_co.paa",
		};
	};
};