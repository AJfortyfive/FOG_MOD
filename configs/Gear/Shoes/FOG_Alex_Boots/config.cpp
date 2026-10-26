class CfgPatches
{
	class FOG_Combat_HikingBoots_shit
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
	class FOG_Combat_HikingBoots_Base: Clothing
	{
		scope=0;
		displayName="Salomon Quest 4D Boots";
		descriptionShort="Salomon Quest 4D Forces. Worn by CAG GOON S Tier Chads. Makes you sexy, and comfortable.";
		model="\FOG_MOD\Gear\Shoes\FOG_Alex_Boots\FOG_Alex_Boots_G.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		itemSize[]={3,3};
		weight=400;
		varWetMax=0.59000002;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		soundAttType="Boots";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots.rvmat"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Shoes\FOG_Alex_Boots\FOG_Alex_Boots_M.p3d";
			female="\FOG_MOD\Gear\Shoes\FOG_Alex_Boots\FOG_Alex_Boots_F.p3d";
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
								"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots_destruct.rvmat"
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
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Combat_HikingBoots_Brown: FOG_Combat_HikingBoots_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots_co.paa"};
	};
	class FOG_Combat_HikingBoots_Khaki: FOG_Combat_HikingBoots_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots_UCP_co.paa"};
	};
	class FOG_Combat_HikingBoots_Grey: FOG_Combat_HikingBoots_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots_Khaki_co.paa"};
	};
	class FOG_Combat_HikingBoots_Black: FOG_Combat_HikingBoots_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Shoes\FOG_Alex_Boots\Data\alex_boots_BlackWhite_co.paa"};
	};
};