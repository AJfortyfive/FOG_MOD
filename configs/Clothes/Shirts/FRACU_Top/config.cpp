class CfgPatches
{
	class FOG_Shirts_FRACU_Top
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
	class FOG_Shirt_FRACU_Top_ColorBase: Clothing
	{
		displayName="USGI FRACU Top";
		descriptionShort="The FRACU, or Flame Resistant Army Combat Uniform, is an FR version of the standard Army uniform. These uniforms are made for US Army contract by various US Government contractors. This uniform is approved for US Army and US Air Force wear.";
		model="\FOG_MOD\Clothes\Shirts\FRACU_Top\FOG_FRACU_Top_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
		varWetMax=0.3;
		heatIsolation=0.6;
		ragQuantity=4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo",
			"camo_cuff",
			"personality"
		};
		simpleHiddenSelections[] =
        {
            "selection_cuff",
            "selection_sleeve"
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
								"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FRACU_Top\FOG_FRACU_Top_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FRACU_Top\FOG_FRACU_Top_F.p3d";
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
	class FOG_Shirt_FRACU_Top_Black: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_Black_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_black_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_Grey: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_Grey_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_white_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_RG: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_RG_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_rg_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_CB: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_CB_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_cb_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_White: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_White_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_white_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_OCP: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_OCP_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mc_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_MC: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_MC_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mc_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_MCB: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_MCB_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_mcb_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_M81: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_M81_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_m81_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_AOR1: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_AOR1_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_aor1_co.paa"
		};
	};
	class FOG_Shirt_FRACU_Top_AOR2: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Blouse_AOR2_co.paa",
			"FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_aor2_co.paa"
		};
	};
};
