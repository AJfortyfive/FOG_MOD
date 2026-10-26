class CfgPatches
{
	class FOG_HeavyRiders_Jacket_Shit
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
	class FOG_HeavyRiders_Jacket_ColorBase: Clothing
	{
		displayName="Heavy Riders Jacket";
		descriptionShort="Heavily insulated jacket.";
		model="\FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\FOG_HeavyRiders_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=870;
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};
		quickBarBonus=1;
		varWetMax=0.3;
		heatIsolation=0.9;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
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
								"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRiders.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRiders.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRiders_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRiders_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRiders_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\FOG_HeavyRiders_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\FOG_HeavyRiders_F.p3d";
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
	class FOG_HeavyRiders_Jacket_Black: FOG_HeavyRiders_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRider_co.paa"
		};
	};
	class FOG_HeavyRiders_Jacket_Teal: FOG_HeavyRiders_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRider_Teal_co.paa"
		};
	};
	class FOG_HeavyRiders_Jacket_Red: FOG_HeavyRiders_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRider_Red_co.paa"
		};
	};
	class FOG_HeavyRiders_Jacket_Green: FOG_HeavyRiders_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRider_Green_co.paa"
		};
	};
	class FOG_HeavyRiders_Jacket_RB: FOG_HeavyRiders_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_HeavyRiders\data\FOG_HeavyRider_Rainbow_co.paa"
		};
	};
};