class CfgPatches
{
	class FOG_Pants_FRACU
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
	class FOG_Pants_FRACU_ColorBase: Clothing
	{
		displayName="USGI FRACU Trousers";
		descriptionShort="The FRACU, or Flame Resistant Army Combat Uniform, is an FR version of the standard Army uniform. These uniforms are made for US Army contract by various US Government contractors. This uniform is approved for US Army and US Air Force wear.";
		model="\FOG_MOD\Clothes\Pants\FRACU_Pants\FOG_FRACU_Pants_G.p3d";
		inventorySlot[]=
		{
			"Legs"
		};
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
        rotationFlags=34;
		weight=270;
		itemSize[]={3,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		varWetMax=0.79000002;
		heatIsolation=0.69999999;
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
								"FOG_MOD\Clothes\Pants\FRACU_Pants\Data\FRACU_Pants.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Pants\FRACU_Pants\Data\FRACU_Pants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Pants\FRACU_Pants\Data\FRACU_Pants.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Pants\FRACU_Pants\Data\FRACU_Pants_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Pants\FRACU_Pants\Data\FRACU_Pants_destruct.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Pants\FRACU_Pants\FOG_FRACU_Pants_M.p3d";
			female="\FOG_MOD\Clothes\Pants\FRACU_Pants\FOG_FRACU_Pants_F.p3d";
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
					soundSet="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Pants_FRACU_MC: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_MC_co.paa"
		};
	};
	class FOG_Pants_FRACU_OCP: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_OCP_co.paa"
		};
	};
	class FOG_Pants_FRACU_MCB: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_MCB_co.paa"
		};
	};
	class FOG_Pants_FRACU_M81: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_m81_co.paa"
		};
	};
	class FOG_Pants_FRACU_AOR1: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_AOR1_co.paa"
		};
	};
	class FOG_Pants_FRACU_AOR2: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_AOR2_co.paa"
		};
	};
	class FOG_Pants_FRACU_CB: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_CB_co.paa"
		};
	};
	class FOG_Pants_FRACU_RG: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_RG_co.paa"
		};
	};
	class FOG_Pants_FRACU_GRY: FOG_Pants_FRACU_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Trousers_Grey_co.paa"
		};
	};
};