class CfgPatches
{
	class FOG_MOD_Pants_FieldPants
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters","DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_FieldPants_ColorBase: Clothing
	{
		displayName="Crye Field Pants";
		descriptionShort="The Crye Precision G3 Field Pants offer durable construction, ample storage, and adjustable features, making them the go-to choice for professionals and outdoor enthusiasts navigating demanding environments.";
		model="\FOG_MOD\Clothes\Pants\FieldPants\FOG_FieldPants_G.p3d";
		inventorySlot[]=
		{
			"Legs"
		};
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		varWetMax=0.8;
		heatIsolation=0.7;
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
								"FOG_MOD\Clothes\Pants\FieldPants\data\FieldPants.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\FieldPants\data\FieldPants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\FieldPants\data\FieldPants.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\FieldPants\data\FieldPants_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\FieldPants\data\FieldPants_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.85000002;
					};
					class Blood
					{
						damage=0.85000002;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.85000002;
					};
					class Blood
					{
						damage=0.85000002;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Pants\FieldPants\FOG_FieldPants_M.p3d";
			female="\FOG_MOD\Clothes\Pants\FieldPants\FOG_FieldPants_F.p3d";
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
	class FOG_FieldPants_White: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_White_co.paa"
		};
	};
	class FOG_FieldPants_Grey: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_Grey_co.paa"
		};
	};
	class FOG_FieldPants_RG: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_RG_co.paa"
		};
	};
	class FOG_FieldPants_CB: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_CB_co.paa"
		};
	};
	class FOG_FieldPants_KHK: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_KHK_co.paa"
		};
	};
	class FOG_FieldPants_Black: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_Black_co.paa"
		};
	};
	class FOG_FieldPants_M81: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_M81_co.paa"
		};
	};
	class FOG_FieldPants_MC: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_MC_co.paa"
		};
	};
	class FOG_FieldPants_MC_Ranger: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_MC_Ranger_co.paa"
		};
	};
	class FOG_FieldPants_MCB: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_MCB_co.paa"
		};
	};
	class FOG_FieldPants_MCT: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_MCT_co.paa"
		};
	};
	class FOG_FieldPants_MCA: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_MCA_co.paa"
		};
	};
	class FOG_FieldPants_MCAL: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_MCAL_co.paa"
		};
	};
	class FOG_FieldPants_UCP: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_UCP_co.paa"
		};
	};
	class FOG_FieldPants_AOR1: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_AOR1_co.paa"
		};
	};
	class FOG_FieldPants_AOR2: FOG_FieldPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FieldPants\data\FOG_FieldPants_AOR2_co.paa"
		};
	};
};