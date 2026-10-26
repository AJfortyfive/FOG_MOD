class CfgPatches
{
	class FOG_Characters_Backpacks_LBT1475A
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks"
		};
	};
};
class cfgVehicles
{
	class Clothing;
	class FOG_Bag_LBT1475A_ColorBase: Clothing
	{
		displayName="LBT1475A 3 Day Pack";
		descriptionShort="The LBT1475A backpack is a rugged, mission ready pack built for durability and organization. Constructed from high strength materials, it features multiple compartments, reinforced stitching, and modular webbing for customization. Designed for comfort under load, it offers padded shoulder straps and balanced weight distribution.";
		model="FOG_MOD\Bags\LBT1476A\FOG_LBT1476A_G.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		weight=1400;
		itemSize[]={4,5};
		itemsCargoSize[]={8,12};
		varWetMax=0.1;
		heatIsolation=0.7;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		visibilityModifier=0.95;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag.rvmat"
		};
		class ClothingTypes
		{
			male="FOG_MOD\Bags\LBT1476A\FOG_LBT1476A_M.p3d";
			female="FOG_MOD\Bags\LBT1476A\FOG_LBT1476A_M.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[] = 
					{
						{1.0, {"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Bag_LBT1475A_Black: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_Black_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_Grey: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_Grey_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_White: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_White_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_RG: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_RG_co.paa"
		};
	};
    class FOG_Bag_LBT1475A_CB : FOG_Bag_LBT1475A_ColorBase
    {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_CB_co.paa"
		};
	};
    class FOG_Bag_LBT1475A_KHK : FOG_Bag_LBT1475A_ColorBase
    {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_KHK_co.paa"
		};
	};
    class FOG_Bag_LBT1475A_MC : FOG_Bag_LBT1475A_ColorBase
    {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_MC_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_MCB: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_MCB_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_MCA: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_MCA_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_MCAL: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_MCAL_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_MCT: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_MCT_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_AOR1: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_AOR1_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_AOR2: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_AOR2_co.paa"
		};
	};
	class FOG_Bag_LBT1475A_M81: FOG_Bag_LBT1475A_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\LBT1476A\data\LBT1476A_Bag_M81_co.paa"
		};
	};
};