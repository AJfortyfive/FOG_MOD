class CfgPatches
{
	class FOG_Tactical_Fleece_Shit
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
	class FOG_Tactical_Fleece_ColorBase: Clothing
	{
		displayName="Tactical Fleece Jacket";
		descriptionShort="A warm, fleece jacket. Designed with the operator in mind.";
		model="\FOG_MOD\Clothes\Shirts\Tactical_Fleece\Tactical_Fleece_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
		varWetMax=0.4;
		heatIsolation=0.9;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]={"camo"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece.rvmat"
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
								"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\Tactical_Fleece\Tactical_Fleece_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\Tactical_Fleece\Tactical_Fleece_F.p3d";
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
	class FOG_Tactical_Fleece_Grey: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_grey_co.paa"
		};
	};
	class FOG_Tactical_Fleece_Black: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_black_co.paa"
		};
	};
	class FOG_Tactical_Fleece_RG: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_RG_co.paa"
		};
	};
	class FOG_Tactical_Fleece_OD: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_OD_co.paa"
		};
	};
	class FOG_Tactical_Fleece_CB: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_CB_co.paa"
		};
	};
	class FOG_Tactical_Fleece_MC: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_MC_co.paa"
		};
	};
	class FOG_Tactical_Fleece_Arctic: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_arctic_co.paa"
		};
	};
	class FOG_Tactical_Fleece_White: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]={"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_White_co.paa"};
	};
	class FOG_Tactical_Fleece_M81: FOG_Tactical_Fleece_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]={"FOG_MOD\Clothes\Shirts\Tactical_Fleece\data\tactical_fleece_m81_co.paa"};
	};
};