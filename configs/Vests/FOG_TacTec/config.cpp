class CfgPatches
{
	class FOG_Vest_TacTec_stuff
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Vest_TacTec_Base: Clothing
	{
		scope=0;
		displayName="511 TacTec Plate Carrier";
		descriptionShort="511 TacTec Plate Carrier. NIJ rated level 3 armor plates.";
		model="\FOG_MOD\Vests\FOG_TacTec\FOG_TacTec_G.p3d";
		attachments[]=
		{
			"WalkieTalkie",
            "Chemlight",
			"FOG_big_patch",	
			"FOG_tourniquet",
			"VestPouch",
			"FOG_vest_belly",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest",
			"FOG_vest_panel"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		inventorySlot[]=
		{
			"Vest"
		};
		weight=6000;
		itemSize[]={4,4};
		quickBarBonus=3;
		varWetMax=0.5;
		heatIsolation=0.6;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]= {"camo"};
		simpleHiddenSelections[] = {"VestMags_TT","VestRadio_TT"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\FOG_TacTec\Data\FOG_TacTec.rvmat"
		};	
		class ClothingTypes
		{
			male="\FOG_MOD\Vests\FOG_TacTec\FOG_TacTec_M.p3d";
			female="\FOG_MOD\Vests\FOG_TacTec\FOG_TacTec_M.p3d";
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
								"FOG_MOD\Vests\FOG_TacTec\Data\FOG_TacTec.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\FOG_TacTec\Data\FOG_TacTec.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\FOG_TacTec\Data\FOG_TacTec_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\FOG_TacTec\Data\FOG_TacTec_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\FOG_TacTec\Data\FOG_TacTec_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.3;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
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
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Vest_TacTec_CB: FOG_Vest_TacTec_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_TacTec\Data\Tactec_CB_co.paa"
		};
	};
    class FOG_Vest_TacTec_OD: FOG_Vest_TacTec_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_TacTec\Data\Tactec_OD_co.paa"
		};
	};
    class FOG_Vest_TacTec_RG: FOG_Vest_TacTec_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_TacTec\Data\Tactec_RG_co.paa"
		};
	};
    class FOG_Vest_TacTec_Black: FOG_Vest_TacTec_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_TacTec\Data\Tactec_Black_co.paa"
		};
	};
    class FOG_Vest_TacTec_Grey: FOG_Vest_TacTec_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_TacTec\Data\Tactec_grey_co.paa"
		};
	};
    class FOG_Vest_TacTec_MC: FOG_Vest_TacTec_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_TacTec\Data\Tactec_mc_co.paa"
		};
	};
    class FOG_Vest_TacTec_MCB: FOG_Vest_TacTec_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\FOG_TacTec\Data\Tactec_mcb_co.paa"
		};
	};
};
