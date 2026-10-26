class CfgPatches
{
	class FOG_TV110T_Stuff
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "FOG_MOD_Scripts"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_TV110T_ColorBase: Clothing
	{
		scope=0;
		displayName="Wartech LBSTV110 Plate Carrier";
		descriptionShort="Tactical Vest with NIJ Certified Level IV Ceramic plates inserted. Used by Special Forces and PMC organizations. Only takes proprietary Wartech attachments.";
		model="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_G.p3d";
		attachments[]=
		{
            "WalkieTalkie",
            "FOG_big_patch",	
            "FOG_tourniquet",
			"VestPouch",
			"FOG_vest_belly",
			"TV110utilitypouch",
			"TV110adminpouch",
			"TV110fastmag",
			"TV110medkit",
			"TV110grenadepouch",
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
		quickBarBonus=4;
		varWetMax=0.5;
		heatIsolation=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]= {"camo","camo_radiopouch"};
		simpleHiddenSelections[] = {"selection_radio"};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat",
			"FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_M.p3d";
			female="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_destruct.rvmat",
                                "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT.rvmat"
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
	class FOG_Vest_TV110T_Tan: FOG_TV110T_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_TAN_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
		};
	};
	class FOG_Vest_TV110T_CB: FOG_TV110T_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_CB_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"
		};
	};
	class FOG_Vest_TV110T_Black: FOG_TV110T_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_Black_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"
		};
	};
	class FOG_Vest_TV110T_RG: FOG_TV110T_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_RG_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_RG_co.paa"
		};
	};
	class FOG_Vest_TV110T_AU: FOG_TV110T_ColorBase
	{

		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_AU_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_ATACSAU_co.paa"
		};
	};
	class FOG_Vest_TV110T_FG: FOG_TV110T_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_FG_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_ATACSFG_co.paa"
		};
	};
	class FOG_Vest_TV110T_MC: FOG_TV110T_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_MC_co.paa",
            "FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_MC_co.paa"
		};
	};
	class Container_Base;
	class FOG_TV110T_MagPouchesBase: Container_Base
	{
		scope = 0;
		displayName="TV110 Magazine Pouches";
		descriptionShort = "Magazine pouches are purpose-built, reliable accessories designed to securely hold and provide quick access to your magazines, ensuring efficient reloading during tactical or recreational shooting activities.";
		model = "\FOG_MOD\Vests\TV110_T\FOG_TV110_T_MagPouches.p3d";
		rotationFlags = 0;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		inventorySlot[] = {"VestPouch"};
		hiddenSelections[] = {"camo"};
		weight = 200;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		lootTag[] = {"Military_east"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_destruct.rvmat"
							}
						}
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FOG_TV110T_MagPouches_Tan: FOG_TV110T_MagPouchesBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_TAN_co.paa"
		};
	};
	class FOG_TV110T_MagPouches_CB: FOG_TV110T_MagPouchesBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_CB_co.paa"
		};
	};
	class FOG_TV110T_MagPouches_Black: FOG_TV110T_MagPouchesBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_Black_co.paa"
		};
	};
	class FOG_TV110T_MagPouches_RG: FOG_TV110T_MagPouchesBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_RG_co.paa"
		};
	};
	class FOG_TV110T_MagPouches_AU: FOG_TV110T_MagPouchesBase
	{

		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_AU_co.paa"
		};
	};
	class FOG_TV110T_MagPouches_FG: FOG_TV110T_MagPouchesBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_FG_co.paa"
		};
	};
	class FOG_TV110T_MagPouches_MC: FOG_TV110T_MagPouchesBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_MC_co.paa"
		};
	};
	class FOG_TV110T_AdminPouchBase: Container_Base
	{
		scope = 0;
		displayName="TV110 Admin Pouches";
		descriptionShort = "The TV110 admin pouch is a compact and durable accessory designed to keep your essential tools and accessories organized and easily accessible.";
		model = "\FOG_MOD\Vests\TV110_T\FOG_TV110_T_AdminPouch.p3d";
		rotationFlags = 0;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,4};
		inventorySlot[]=
		{
            "TV110adminpouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		hiddenSelections[] = {"camo"};
		weight = 100;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		lootTag[] = {"Military_east","Military_west"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_destruct.rvmat"
							}
						}
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FOG_TV110T_AdminPouch_Tan: FOG_TV110T_AdminPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_TAN_co.paa"
		};
	};
	class FOG_TV110T_AdminPouch_CB: FOG_TV110T_AdminPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_CB_co.paa"
		};
	};
	class FOG_TV110T_AdminPouch_Black: FOG_TV110T_AdminPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_Black_co.paa"
		};
	};
	class FOG_TV110T_AdminPouch_RG: FOG_TV110T_AdminPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_RG_co.paa"
		};
	};
	class FOG_TV110T_AdminPouch_AU: FOG_TV110T_AdminPouchBase
	{

		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_AU_co.paa"
		};
	};
	class FOG_TV110T_AdminPouch_FG: FOG_TV110T_AdminPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_FG_co.paa"
		};
	};
	class FOG_TV110T_AdminPouch_MC: FOG_TV110T_AdminPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_MC_co.paa"
		};
	};
	class FOG_TV110T_FastMagBase: Container_Base
	{
		scope = 0;
		displayName="TV110 Fast Mag Pouch";
		descriptionShort = "The TV110 Fast Mag Pouch is a high-performance accessory specifically engineered to securely hold and swiftly deploy magazines, offering quick and efficient reloading during intense shooting scenarios, making it an essential tool for tactical professionals and shooting enthusiasts alike.";
		model = "\FOG_MOD\Vests\TV110_T\FOG_TV110_T_FastMag.p3d";
		rotationFlags = 0;
		itemSize[] = {1,3};
		itemsCargoSize[] = {1,3};
		inventorySlot[]=
		{
            "TV110fastmag",
            "FOG_MRB_singlemag"
		};
		hiddenSelections[] = {"camo"};
		weight = 50;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		lootTag[] = {"Military_east","Military_west"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_destruct.rvmat"
							}
						}
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FOG_TV110T_FastMag_Tan: FOG_TV110T_FastMagBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_TAN_co.paa"
		};
	};
	class FOG_TV110T_FastMag_CB: FOG_TV110T_FastMagBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_CB_co.paa"
		};
	};
	class FOG_TV110T_FastMag_Black: FOG_TV110T_FastMagBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_Black_co.paa"
		};
	};
	class FOG_TV110T_FastMag_RG: FOG_TV110T_FastMagBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_RG_co.paa"
		};
	};
	class FOG_TV110T_FastMag_AU: FOG_TV110T_FastMagBase
	{

		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_AU_co.paa"
		};
	};
	class FOG_TV110T_FastMag_FG: FOG_TV110T_FastMagBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_FG_co.paa"
		};
	};
	class FOG_TV110T_FastMag_MC: FOG_TV110T_FastMagBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_MC_co.paa"
		};
	};
	class FOG_TV110T_GrenadePouchBase: Container_Base
	{
		scope = 0;
		displayName="TV110 Single Grenade Pouch";
		descriptionShort = "The TV110 Single Grenade Pouch is a rugged and dependable accessory designed to securely carry and provide quick access to one grenade, ensuring reliable deployment in tactical situations, making it an indispensable tool for military personnel and law enforcement officers.";
		model = "\FOG_MOD\Vests\TV110_T\FOG_TV110_T_GrenadePouch.p3d";
		rotationFlags = 0;
		itemSize[] = {3,3};
		inventorySlot[]=
		{
            "TV110grenadepouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		attachments[]= {"VestGrenadeA"};
		hiddenSelections[] = {"camo"};
		weight = 100;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		lootTag[] = {"Military_east","Military_west"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_destruct.rvmat"
							}
						}
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FOG_TV110T_GrenadePouch_Tan: FOG_TV110T_GrenadePouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_TAN_co.paa"
		};
	};
	class FOG_TV110T_GrenadePouch_CB: FOG_TV110T_GrenadePouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_CB_co.paa"
		};
	};
	class FOG_TV110T_GrenadePouch_Black: FOG_TV110T_GrenadePouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_Black_co.paa"
		};
	};
	class FOG_TV110T_GrenadePouch_RG: FOG_TV110T_GrenadePouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_RG_co.paa"
		};
	};
	class FOG_TV110T_GrenadePouch_AU: FOG_TV110T_GrenadePouchBase
	{

		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_AU_co.paa"
		};
	};
	class FOG_TV110T_GrenadePouch_FG: FOG_TV110T_GrenadePouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_FG_co.paa"
		};
	};
	class FOG_TV110T_GrenadePouch_MC: FOG_TV110T_GrenadePouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_MC_co.paa"
		};
	};
	class FOG_TV110T_MedkitBase: Container_Base
	{
		scope = 0;
		displayName="TV110 Medical Pouch";
        descriptionShort="The TV110 Medical Kit is a reliable and compact accessory designed to securely hold essential medical supplies, offering quick and organized access to critical items needed for emergency medical situations, making it an indispensable tool for first responders, outdoor enthusiasts, and anyone prioritizing preparedness and safety.";
		model = "\FOG_MOD\Vests\TV110_T\FOG_TV110_T_Medkit.p3d";
		rotationFlags = 0;
		itemSize[] = {3,3};
		inventorySlot[]=
		{
            "TV110medkit",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		attachments[]= 
        {
            "MedicalBandage",
            "FOG_BloodTest_Kit",
            "FOG_TransfusionKit",
            "FOG_EpinephrineA",
            "FOG_EpinephrineB",
            "FOG_Morphine",
            "FOG_tetracycline",
            "FOG_VitaminBottle",
            "FOG_painkillers2"
        };
		hiddenSelections[] = {"camo"};
		weight = 100;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		lootTag[] = {"Military_east","Military_west"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_destruct.rvmat"
							}
						}
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FOG_TV110T_Medkit_Tan: FOG_TV110T_MedkitBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_TAN_co.paa"
		};
	};
	class FOG_TV110T_Medkit_CB: FOG_TV110T_MedkitBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_CB_co.paa"
		};
	};
	class FOG_TV110T_Medkit_Black: FOG_TV110T_MedkitBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_Black_co.paa"
		};
	};
	class FOG_TV110T_Medkit_RG: FOG_TV110T_MedkitBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_RG_co.paa"
		};
	};
	class FOG_TV110T_Medkit_AU: FOG_TV110T_MedkitBase
	{

		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_AU_co.paa"
		};
	};
	class FOG_TV110T_Medkit_FG: FOG_TV110T_MedkitBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_FG_co.paa"
		};
	};
	class FOG_TV110T_Medkit_MC: FOG_TV110T_MedkitBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_MC_co.paa"
		};
	};
	class FOG_TV110T_UtilityPouchBase: Container_Base
	{
		scope = 0;
		displayName="TV110 Utility Pouch";
		descriptionShort="The TV110 Utility Pouch is a versatile and durable accessory designed to securely store and provide easy access to various tools, accessories, or personal items, offering convenience and organization in a compact form.";
		model = "\FOG_MOD\Vests\TV110_T\FOG_TV110_T_UtilityPouch.p3d";
		rotationFlags = 0;
		itemSize[] = {3,3};
        itemsCargoSize[] = {3,3};
		inventorySlot[]=
		{
            "TV110utilitypouch",
            "FOG_admin_small",
            "FOG_VestSlotFR",
            "FOG_gren_pouch",
			"FOG_ifak_vest"
		};
		hiddenSelections[] = {"camo"};
		weight = 100;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		lootTag[] = {"Military_east","Military_west"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Vests\TV110_T\data\FOG_TV110_destruct.rvmat"
							}
						}
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FOG_TV110T_UtilityPouch_Tan: FOG_TV110T_UtilityPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_TAN_co.paa"
		};
	};
	class FOG_TV110T_UtilityPouch_CB: FOG_TV110T_UtilityPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_CB_co.paa"
		};
	};
	class FOG_TV110T_UtilityPouch_Black: FOG_TV110T_UtilityPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_Black_co.paa"
		};
	};
	class FOG_TV110T_UtilityPouch_RG: FOG_TV110T_UtilityPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_RG_co.paa"
		};
	};
	class FOG_TV110T_UtilityPouch_AU: FOG_TV110T_UtilityPouchBase
	{

		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_AU_co.paa"
		};
	};
	class FOG_TV110T_UtilityPouch_FG: FOG_TV110T_UtilityPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_FG_co.paa"
		};
	};
	class FOG_TV110T_UtilityPouch_MC: FOG_TV110T_UtilityPouchBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Vests\TV110_T\data\FOG_TV110_MC_co.paa"
		};
	};
};
class CfgSlots
{
	class Slot_TV110adminpouch
	{
		name = "TV110adminpouch";
		displayName = "TV110 Admin Pouch";
		ghostIcon = "set:FOG_Slots image:FOG_TV110_Admin";
	};
	class Slot_TV110fastmag
	{
		name = "TV110fastmag";
		displayName = "TV110 Fast Mag Pouch";
		ghostIcon = "set:FOG_Slots image:FOG_SINGLEMAG";
	};
	class Slot_TV110grenadepouch
	{
		name = "TV110grenadepouch";
		displayName = "TV110 Grenade Pouch";
		ghostIcon = "set:FOG_Slots image:FOG_TV110_Gren";
	};
	class Slot_TV110medkit
	{
		name = "TV110medkit";
		displayName = "TV110 Medical Kit";
		ghostIcon = "set:FOG_Slots image:FOG_TV110_Med";
	};
	class Slot_TV110utilitypouch
	{
		name = "TV110utilitypouch";
		displayName = "TV110 Utility Pouch";
		ghostIcon = "set:FOG_Slots image:FOG_TV110_Utility";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFOG_TV110_T_AdminPouch: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"TV110adminpouch"
		};
		model="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_AdminPouch.p3d";
	};
	class ProxyFOG_TV110_T_FastMag: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"TV110fastmag"
		};
		model="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_FastMag.p3d";
	};
	class ProxyFOG_TV110_T_GrenadePouch: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"TV110grenadepouch"
		};
		model="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_GrenadePouch.p3d";
	};
	class ProxyFOG_TV110_T_MagPouches: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"VestPouch"
		};
		model="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_MagPouches.p3d";
	};
	class ProxyFOG_TV110_T_Medkit: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"TV110medkit"
		};
		model="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_Medkit.p3d";
	};
	class ProxyFOG_TV110_T_UtilityPouch: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"TV110utilitypouch"
		};
		model="\FOG_MOD\Vests\TV110_T\FOG_TV110_T_UtilityPouch.p3d";
	};
};
