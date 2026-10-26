class CfgPatches
{
	class FOG_Shirts_WoobieHoodie
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
	class FOG_WoobieHoodie_ColorBase: Clothing
	{
		displayName="Woobie Hoodie";
		descriptionShort="A cozy hoodie made from a repurposed military blanket, perfect for staying warm in chilly conditions.";
		model="\FOG_MOD\Clothes\Shirts\WoobieHoodie\FOG_WoobieHoodie_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
		varWetMax=0.1;
		heatIsolation=0.9;
		ragQuantity=4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		soundAttType="WoolShirt";
		hiddenSelections[]={"camo"};
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
								"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\WoobieHoodie\FOG_WoobieHoodie_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\WoobieHoodie\FOG_WoobieHoodie_F.p3d";
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
	class FOG_WoobieHoodie_BLK: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_Black_co.paa"
		};
	};
	class FOG_WoobieHoodie_CB: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_CB_co.paa"
		};
	};
	class FOG_WoobieHoodie_OD: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_OD_co.paa"
		};
	};
	class FOG_WoobieHoodie_Grey: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_Grey_co.paa"
		};
	};
	class FOG_WoobieHoodie_White: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_White_co.paa"
		};
	};
	class FOG_WoobieHoodie_AJ: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_AJ_co.paa"
		};
	};
	class FOG_WoobieHoodie_Red: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_Red_co.paa"
		};
	};
	class FOG_WoobieHoodie_Blue: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_Blue_co.paa"
		};
	};
	class FOG_WoobieHoodie_MC: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_MC_co.paa"
		};
	};
	class FOG_WoobieHoodie_MCB: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_MCB_co.paa"
		};
	};
	class FOG_WoobieHoodie_MCT: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_MCT_co.paa"
		};
	};
	class FOG_WoobieHoodie_M81: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_M81_co.paa"
		};
	};
	class FOG_WoobieHoodie_TS_Green: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_Tiger_Stripe_co.paa"
		};
	};
	class FOG_WoobieHoodie_TS_Purple: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_Tiger_Stripe_Purple_co.paa"
		};
	};
	class FOG_WoobieHoodie_TS_KB: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_Tiger_Stripe_KB_co.paa"
		};
	};
	class FOG_WoobieHoodie_TS_MCB: FOG_WoobieHoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\WoobieHoodie\data\Woobie_Hoodie_Tiger_Stripe_MCB_co.paa"
		};
	};
};
