class CfgPatches
{
	class FOG_MOD_Pants_L9_Patagonia
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
	class FOG_L9_PatagoniaPants_ColorBase: Clothing
	{
		displayName="L9 Patagonia Pants";
		descriptionShort="The L9 Patagonia Pants are the current standard issue combat pants for US Special Operations Groups and some Ranger Regiments. Known for their durability, comfort, and functionality, these pants are designed to withstand the rigors of combat while providing ample storage and mobility.";
		model="\FOG_MOD\Clothes\Pants\L9_Patagonia\FOG_L9_PatagoniaPants_G.p3d";
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
		varWetMax=0.5;
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
								"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Patagonia_Pants.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Patagonia_Pants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Patagonia_Pants.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Patagonia_Pants_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Patagonia_Pants_destruct.rvmat"
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
			male="\FOG_MOD\Clothes\Pants\L9_Patagonia\FOG_L9_PatagoniaPants_M.p3d";
			female="\FOG_MOD\Clothes\Pants\L9_Patagonia\FOG_L9_PatagoniaPants_F.p3d";
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
	class FOG_L9_PatagoniaPants_CB: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_CB_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_RG: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_RG_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_Grey: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_Grey_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_Black: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_Black_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_MC: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_MC_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_MCB: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_MCB_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_MCT: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_MCT_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_MCA: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_MCA_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_MCAL: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_MCAL_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_AOR1: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_AOR1_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_AOR2: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_AOR2_co.paa"
		};
	};
	class FOG_L9_PatagoniaPants_M81: FOG_L9_PatagoniaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\L9_Patagonia\data\Pants_Patagonia_M81_co.paa"
		};
	};
};