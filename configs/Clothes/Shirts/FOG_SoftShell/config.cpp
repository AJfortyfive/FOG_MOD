class CfgPatches
{
	class FOG_Jacket_SoftShell_Shit
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
	class FOG_Jacket_SoftShell_ColorBase: Clothing
	{
		displayName="Flexion Softshell Jacket";
		descriptionShort="A warm jacket. Designed with the operator in mind.";
		model="\FOG_MOD\Clothes\Shirts\FOG_SoftShell\FOG_SoftShell_G.p3d";
		inventorySlot[]={"Body"}; 
		itemInfo[]={"Clothing","Body"};
		weight=670;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
        varWetMax=0.249;
		heatIsolation=0.9;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]={"camo"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_SoftShell.rvmat"
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
								"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_SoftShell.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_SoftShell.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_SoftShell_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_SoftShell_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_SoftShell_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Shirts\FOG_SoftShell\FOG_SoftShell_M.p3d";
			female="\FOG_MOD\Clothes\Shirts\FOG_SoftShell\FOG_SoftShell_F.p3d";
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
	class FOG_Jacket_SoftShell_Tan: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_Tan_co.paa"
		};
	};
	class FOG_Jacket_SoftShell_Black: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_BLK_co.paa"
		};
	};
	class FOG_Jacket_SoftShell_RG: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_RG_co.paa"
		};
	};
	class FOG_Jacket_SoftShell_CB: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_CB_co.paa"
		};
	};
	class FOG_Jacket_SoftShell_Grey: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_GRY_co.paa"
		};
	};
	class FOG_Jacket_SoftShell_ERDL: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_ERDL_co.paa"
		};
	};
	class FOG_Jacket_SoftShell_MC: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_MC_co.paa"
		};
	};
	class FOG_Jacket_SoftShell_MCB: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_MCB_co.paa"
		};
	};
	class FOG_Jacket_SoftShell_White: FOG_Jacket_SoftShell_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]={"FOG_MOD\Clothes\Shirts\FOG_SoftShell\data\FOG_Softshell_White_co.paa"};
	};
};