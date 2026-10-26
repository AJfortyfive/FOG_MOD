class CfgPatches
{
	class FOG_Tactical_Hoodie_Shit
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
	class FOG_Tactical_Hoodie_ColorBase: Clothing
	{
		displayName="Tactical Hoodie";
		descriptionShort="A simple combat shirt with a hood, comes in a variety of colors.";
		model="\FOG_MOD\Clothes\Shirts\FOG_TacHoodie\FOG_TacHoodie_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};
		quickBarBonus=1;
		varWetMax=0.4;
		heatIsolation=0.75;
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
								"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\FOG_TacHoodie.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\FOG_TacHoodie.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\FOG_TacHoodie.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\FOG_TacHoodie.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\FOG_TacHoodie.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_TacHoodie\FOG_TacHoodie_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_TacHoodie\FOG_TacHoodie_F.p3d";
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
	class FOG_Tactical_Hoodie_Black: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_black_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_RG: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_rg_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_RG_Black: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_rg_black_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_CB: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_cb_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_CB_Black: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_cb_black_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_KHK: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_khk_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_White: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_white_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_Grey: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_grey_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_Blue: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_blue_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_Green: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_green_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_MC: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_mc_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_MC_Black: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_mc_black_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_MCB: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_mcb_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_MCT: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_mct_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_MCA: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_mca_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_MCAL: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_mcal_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_AOR1: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_aor1_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_AOR2: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_aor2_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_ERDL: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_m81_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_ERDL_Blk: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\FOG_TacHoodie_M81_Black_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_TGRMCB: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_tgrmcb_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_TGRWDL: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_tgrwdl_co.paa"
		};
	};
	class FOG_Tactical_Hoodie_UWU: FOG_Tactical_Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_TacHoodie\data\fog_tachoodie_uwu_co.paa"
		};
	};
};