class CfgPatches
{
	class FOG_Shirt_UrbanUtilityJacket
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
	class FOG_Shirt_UrbanUtilityJacket_Base: Clothing
	{
		displayName="Urban Utility Jacket";
		descriptionShort="A tactical urban utility jacket designed for versatility and durability in various environments.";
		model="\FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\FOG_UrbanUtilityJacket_G.p3d";
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
								"FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\data\urban_utility_jacket.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\data\urban_utility_jacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\data\urban_utility_jacket_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\data\urban_utility_jacket_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\data\urban_utility_jacket_destruct.rvmat"
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
			male="\FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\FOG_UrbanUtilityJacket_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\FOG_UrbanUtilityJacket_F.p3d";
		};
	};
	class FOG_Shirt_UrbanUtilityJacket_Black: FOG_Shirt_UrbanUtilityJacket_Base
	{
		scope=2;
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\UrbanUtilityJacket\data\urban_utility_jacket_dark_co.paa"
		};
	};
};