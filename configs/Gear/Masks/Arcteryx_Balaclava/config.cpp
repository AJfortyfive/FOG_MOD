class CfgPatches
{
	class FOG_MOD_Mask_ArcteryxBalaclava
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
	class FOG_Arcteryx_Balaclava_ColorBase: Clothing
	{
        scope=0;
		displayName="Arcteryx Balaclava";
		descriptionShort="Idk some youtuber made this cool.";
		model="\FOG_MOD\Gear\Masks\Arcteryx_Balaclava\FOG_ArcteryxBalaclava_G.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Mask"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=5;
		itemSize[]={2,2};
		varWetMax=0.249;
		noNVStrap=0;
        noMask=0;
		noHelmet=0;
		noEyewear=0;
		heatIsolation=0.7;
		hiddenSelections[]=
		{
			"camo"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala.rvmat"
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
								"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala.rvmat"
							}
						}
					};
				};
			};
        };
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Masks\Arcteryx_Balaclava\FOG_ArcteryxBalaclava_M.p3d";
			female="\FOG_MOD\Gear\Masks\Arcteryx_Balaclava\FOG_ArcteryxBalaclava_F.p3d";
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
	class FOG_Arcteryx_Balaclava_CB: FOG_Arcteryx_Balaclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala_cb_co.paa"
		};
	};
	class FOG_Arcteryx_Balaclava_RG: FOG_Arcteryx_Balaclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala_rg_co.paa"
		};
	};
	class FOG_Arcteryx_Balaclava_Grey: FOG_Arcteryx_Balaclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala_grey_co.paa"
		};
	};
	class FOG_Arcteryx_Balaclava_Black: FOG_Arcteryx_Balaclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala_black_co.paa"
		};
	};
	class FOG_Arcteryx_Balaclava_White: FOG_Arcteryx_Balaclava_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Masks\Arcteryx_Balaclava\data\arc_bala_white_co.paa"
		};
	};
};