class CfgPatches
{
	class FOG_Shirt_AthleticHoodie
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
	class FOG_AthleticHoodie_ColorBase: Clothing
	{
		displayName="Athletic Hoodie";
		descriptionShort="Hoodie designed for physical training.";
		model="\FOG_MOD\Clothes\Shirts\AthleticHoodie\FOG_AthleticHoodie_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
        varWetMax=0.7;
		heatIsolation=0.4;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
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
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\AthleticHoodie\FOG_AthleticHoodie_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\AthleticHoodie\FOG_AthleticHoodie_F.p3d";
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
	class FOG_AthleticHoodie_Black: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_Black_co.paa"
		};
	};
	class FOG_AthleticHoodie_Grey: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_Grey_co.paa"
		};
	};
	class FOG_AthleticHoodie_White: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_White_co.paa"
		};
	};
	class FOG_AthleticHoodie_RG: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_RG_co.paa"
		};
	};
	class FOG_AthleticHoodie_CB: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_CB_co.paa"
		};
	};
	class FOG_AthleticHoodie_MC: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_MC_co.paa"
		};
	};
	class FOG_AthleticHoodie_MCB: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_MCB_co.paa"
		};
	};
	class FOG_AthleticHoodie_MCT: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_MCT_co.paa"
		};
	};
	class FOG_AthleticHoodie_MCA: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_MCA_co.paa"
		};
	};
	class FOG_AthleticHoodie_MCAL: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_MCAL_co.paa"
		};
	};
	class FOG_AthleticHoodie_DNC: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_DNC_co.paa"
		};
	};
	class FOG_AthleticHoodie_M81: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_M81_co.paa"
		};
	};
	class FOG_AthleticHoodie_DCU: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_DCU_co.paa"
		};
	};
	class FOG_AthleticHoodie_AOR1: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_AOR1_co.paa"
		};
	};
	class FOG_AthleticHoodie_AOR2: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_AOR2_co.paa"
		};
	};
	class FOG_AthleticHoodie_UWU: FOG_AthleticHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\AthleticHoodie\data\AthleticHoodie_UWU_co.paa"
		};
	};
};