class CfgPatches
{
	class FOG_Hoodie_Jacket_Shit
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
	class FOG_Hoodie_Jacket_ColorBase: Clothing
	{
		displayName="Pull Over Hoodie";
		descriptionShort="A simple pull over hoodie, comes in a variety of colors.";
		model="\FOG_MOD\Clothes\Shirts\FOG_Hoodie\FOG_Hoodie_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};
		quickBarBonus=1;
		varWetMax=0.7;
		heatIsolation=0.7;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]={"camo","personality"};
		simpleHiddenSelections[] =
        {
			"sleeves_rolled",
            "sleeves_unrolled"
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
								"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_Hoodie\FOG_Hoodie_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_Hoodie\FOG_Hoodie_F.p3d";
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
	class FOG_Hoodie_Jacket_Black: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_Nike_G: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_nike_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_Patagonia: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_pata_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_FOG: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_FOG_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_CDAJ: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_CDAJ_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_MC: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_MC_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_ERDL: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_ERDL_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_PERDL: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_Purple_ERDL_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_Thrasher: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_Thrasher_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_Supreme: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_Supreme_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_MLG: FOG_Hoodie_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_MLG_co.paa"
		};
	};
	class FOG_Hoodie_Jacket_Rolled_Black: FOG_Hoodie_Jacket_Black
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_Nike_G: FOG_Hoodie_Jacket_Nike_G
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_Patagonia: FOG_Hoodie_Jacket_Patagonia
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_FOG: FOG_Hoodie_Jacket_FOG
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_CDAJ: FOG_Hoodie_Jacket_CDAJ
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_MC: FOG_Hoodie_Jacket_MC
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_ERDL: FOG_Hoodie_Jacket_ERDL
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_PERDL: FOG_Hoodie_Jacket_PERDL
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_Thrasher: FOG_Hoodie_Jacket_Thrasher
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_Supreme: FOG_Hoodie_Jacket_Supreme
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Hoodie_Jacket_Rolled_MLG: FOG_Hoodie_Jacket_MLG
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
};
