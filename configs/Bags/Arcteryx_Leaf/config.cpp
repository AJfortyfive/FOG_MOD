class CfgPatches
{
	class FOG_Characters_Backpacks_ArcteryxLEAF
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
	class FOG_Bag_ArcteryxLEAF_ColorBase: Clothing
	{
		displayName="Arcteryx LEAF Rucksack";
		descriptionShort="The Arcteryx LEAF Rucksack delivers rugged, mission ready performance with a streamlined profile, durable weather resistant materials, and efficient load organization. Built for demanding environments, it balances comfort, mobility, and reliability for professional field use.";
		model="FOG_MOD\Bags\Arcteryx_Leaf\FOG_Bag_Arcteryx_LEAF_G.p3d";
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
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF.rvmat"
		};
		class ClothingTypes
		{
			male="FOG_MOD\Bags\Arcteryx_Leaf\FOG_Bag_Arcteryx_LEAF_M.p3d";
			female="FOG_MOD\Bags\Arcteryx_Leaf\FOG_Bag_Arcteryx_LEAF_F.p3d";
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
						{1.0, {"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF.rvmat"}}, 
						{0.7, {"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF.rvmat"}}, 
						{0.5, {"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_damage.rvmat"}}, 
						{0.3, {"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_damage.rvmat"}}, 
						{0.0, {"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_destruct.rvmat"}}
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
	class FOG_Bag_ArcteryxLEAF_Black: FOG_Bag_ArcteryxLEAF_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_Black_co.paa"
		};
	};
	class FOG_Bag_ArcteryxLEAF_Grey: FOG_Bag_ArcteryxLEAF_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_Grey_co.paa"
		};
	};
	class FOG_Bag_ArcteryxLEAF_White: FOG_Bag_ArcteryxLEAF_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_White_co.paa"
		};
	};
	class FOG_Bag_ArcteryxLEAF_RG: FOG_Bag_ArcteryxLEAF_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_RG_co.paa"
		};
	};
    class FOG_Bag_ArcteryxLEAF_CB : FOG_Bag_ArcteryxLEAF_ColorBase
    {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_CB_co.paa"
		};
	};
    class FOG_Bag_ArcteryxLEAF_Yellow : FOG_Bag_ArcteryxLEAF_ColorBase
    {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_Yellow_co.paa"
		};
	};
    class FOG_Bag_ArcteryxLEAF_MC : FOG_Bag_ArcteryxLEAF_ColorBase
    {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_MC_co.paa"
		};
	};
	class FOG_Bag_ArcteryxLEAF_MCB: FOG_Bag_ArcteryxLEAF_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Arcteryx_Leaf\data\Arcteryx_LEAF_MCB_co.paa"
		};
	};
};