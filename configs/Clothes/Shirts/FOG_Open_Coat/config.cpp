class CfgPatches
{
	class FOG_Shirt_Tactical_Coat_Shit
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
	class FOG_Shirt_Tactical_Coat_Base: Clothing
	{
		displayName="Tactical Winter Coat";
		descriptionShort="A nice, warm sweater commonly worn by survivors after the outbreak.";
		model="\FOG_MOD\Clothes\Shirts\FOG_Open_Coat\FOG_Winter_Coat_G.p3d";
		inventorySlot[]=
		{
			"Armband"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=870;
		itemSize[]={5,5};
		itemsCargoSize[]={4,3};
		quickBarBonus=1;
        varWetMax=0.249;
		heatIsolation=0.95;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo",
            "fur"
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
								"FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\opencoat.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\fur_wind.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\opencoat.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\fur_wind.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\opencoat_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\fur_wind.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\opencoat_damage.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\fur_wind.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\opencoat_destruct.rvmat",
                                "FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\fur_wind.rvmat"
							}
						}
					};
				};
			};
        };
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_Open_Coat\FOG_Winter_Coat_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_Open_Coat\FOG_Winter_Coat_F.p3d";
		};
	};
	class FOG_Shirt_Tactical_Coat_Black: FOG_Shirt_Tactical_Coat_Base
	{
		scope=2;
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\opencoat_black_co.paa",
            "FOG_MOD\Clothes\Shirts\FOG_Open_Coat\data\opencoat_fur_ca.paa"
		};
	};
};