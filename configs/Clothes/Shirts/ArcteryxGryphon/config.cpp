class CfgPatches
{
	class FOG_Shirts_ArcteryxGryphon
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
	class FOG_Jacket_ArcteryxGryphon_ColorBase: Clothing
	{
		displayName="Arcteryx Gryphon Jacket";
		descriptionShort="Arcteryx Gryphon Jacket is a stylish and durable jacket designed for various outdoor activities. Known for its comfort, warmth, and rugged design, it's popular among adventurers and outdoor enthusiasts.";
		model="\FOG_MOD\Clothes\Shirts\ArcteryxGryphon\FOG_Gryphon_Jacket_G.p3d";
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
								"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\ArcteryxGryphon\FOG_Gryphon_Jacket_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\ArcteryxGryphon\FOG_Gryphon_Jacket_F.p3d";
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
	class FOG_Jacket_ArcteryxGryphon_Black: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_Black_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_Grey: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_Grey_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_RG: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_RG_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_CB: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_CB_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_White: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_White_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_Blue: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_Blue_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_MC: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_MC_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_MCB: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_MCB_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_M81: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_M81_co.paa"
		};
	};
	class FOG_Jacket_ArcteryxGryphon_AOR1: FOG_Jacket_ArcteryxGryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\ArcteryxGryphon\data\Arcteryx_Gryphon_AOR1_co.paa"
		};
	};
};
