class CfgPatches
{
	class FOG_Shirts_DrugRug
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
	class FOG_DrugRug_ColorBase: Clothing
	{
		displayName="Drug Rug Hoodie";
		descriptionShort="A drug rug hoodie is a woven, Baja style pullover made from thick, patterned fabric with a soft, rugged feel. Known for its striped designs and relaxed fit, its popular in surf, festival, and bohemian culture for its warmth, comfort, and laid back style.";
		model="\FOG_MOD\Clothes\Shirts\DrugRug\FOG_DrugRug_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
		varWetMax=0.3;
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
								"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\DrugRug\FOG_DrugRug_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\DrugRug\FOG_DrugRug_F.p3d";
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
	class FOG_DrugRug_Black: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_Black_co.paa"
		};
	};
	class FOG_DrugRug_Blue: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_Blue_co.paa"
		};
	};
	class FOG_DrugRug_Grey: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_Grey_co.paa"
		};
	};
	class FOG_DrugRug_Purple: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_Purple_co.paa"
		};
	};
	class FOG_DrugRug_Red: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_Red_co.paa"
		};
	};
	class FOG_DrugRug_BlackStripe: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_BlackStripe_co.paa"
		};
	};
	class FOG_DrugRug_RedStripe: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_RedStripe_co.paa"
		};
	};
	class FOG_DrugRug_BlueStripe: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_BlueStripe_co.paa"
		};
	};
	class FOG_DrugRug_GreenStripe: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_GreenStripe_co.paa"
		};
	};
	class FOG_DrugRug_PurpleStripe: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_PurpleStripe_co.paa"
		};
	};
	class FOG_DrugRug_MC: FOG_DrugRug_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\DrugRug\data\DrugRug_MC_co.paa"
		};
	};
};
