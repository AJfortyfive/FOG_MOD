class CfgPatches
{
	class FOG_Characters_Backpacks_Bergen
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
	class FOG_Bergen_Rucksack_ColorBase: Clothing
	{
		displayName="Bergen Rucksack";
		descriptionShort="The Bergen Rucksack will make you do the thug shaker. Its so good at carrying all your loot I literally had to remake the textures. The old ones were trash. So enjoy, but if you're seeing this description and you didnt download Forward Operator Gear from steam, then i hope a bank forecloses your living arrangements. Send money to my paypal so i can buy more models. Im not good at scripting so i cant code the bag to pop up a message with a link every time you look at it. I also have an OnlyFans you can check out at https://onlyfans.com/ajfortyfive.";
		model="FOG_MOD\Bags\Bergen\Bergen_G.p3d";
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
		itemsCargoSize[]={10,11};
		varWetMax=0.4;
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
			"FOG_MOD\Bags\Bergen\data\Bergen.rvmat"
		};
		class ClothingTypes
		{
			male="FOG_MOD\Bags\Bergen\Bergen_M.p3d";
			female="FOG_MOD\Bags\Bergen\Bergen_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[] = {{1.0, {"FOG_MOD\Bags\Bergen\data\Bergen.rvmat"}}, {0.7, {"FOG_MOD\Bags\Bergen\data\Bergen.rvmat"}}, {0.5, {"FOG_MOD\Bags\Bergen\data\Bergen_damage.rvmat"}}, {0.3, {"FOG_MOD\Bags\Bergen\data\Bergen_damage.rvmat"}}, {0.0, {"FOG_MOD\Bags\Bergen\data\Bergen_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
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
	class FOG_Bergen_Rucksack_Black : FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_Black_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_Grey : FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_Grey_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_White: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_White_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_Green : FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_Green_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_CB : FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_CB_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_M81 : FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_M81_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_Multicam: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_Multicam_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_MCB: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_MCB_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_MCAL: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_MCAL_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_MCT: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_MCT_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_MARPAT: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_MARPAT_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_TGR_MCB: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_TGR_MCB_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_AOR1: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_AOR1_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_AOR2: FOG_Bergen_Rucksack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Bags\Bergen\data\Bergen_AOR2_co.paa"
		};
	};
	class FOG_Bergen_Rucksack_Woodland: FOG_Bergen_Rucksack_M81
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
	class FOG_Bergen_Rucksack_ERDL: FOG_Bergen_Rucksack_M81
	{
		displayName="DO NOT USE THIS";
		descriptionShort="THIS ITEM IS DEPRECATED. PLEASE REPLACE THIS ITEM IN YOUR SERVERS ECONOMY";
	};
};