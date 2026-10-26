class CfgPatches
{
	class FOG_Ronin_Belt_Shit
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
            "FOG_MOD_Scripts"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_Belt_RTGFB_Base: Clothing
	{
		scope=0;
		displayName="Ronin Tactics GFB";
		descriptionShort="Ronin Tactics Gunfighters Belt System. Only takes proprietary Ronin GFB attachments.";
		model="\FOG_MOD\Gear\Belts\FOG_Ronin_Belt\FOG_Ronin_Belt_G.p3d";
        attachments[]=
		{
			"FOG_Ronin_Holsterslot",
            "FOG_LBT_pouch",
            "FOG_MRB_esstac",
            "FOG_MRB_singlemag",
            "FOG_gren_pouch",
            "FOG_M50_Belt",
			"FOG_FannyPack"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		itemSize[]={3,3};
		weight=120;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Boots";
        varWetMax=0.249;
		heatIsolation=0.2;
		hiddenSelections[]={"camo","camo_lanyard"};
		simpleHiddenSelections[]={"mask_hide"};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Belts\FOG_Ronin_Belt\FOG_Ronin_Belt_M.p3d";
			female="\FOG_MOD\Gear\Belts\FOG_Ronin_Belt\FOG_Ronin_Belt_M.p3d";
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
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_S.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_S.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_S_damage.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_S_damage.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_S_destruct.rvmat",
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_destruct.rvmat"
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
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_Belt_RTGFB_CB: FOG_Belt_RTGFB_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_cb.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_cb_co.paa"
		};
	};
	class FOG_Belt_RTGFB_MC: FOG_Belt_RTGFB_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_mc.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_cb_co.paa"
		};
	};
	class FOG_Belt_RTGFB_RG: FOG_Belt_RTGFB_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_rg.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_rg_co.paa"
		};
	};
	class FOG_Belt_RTGFB_Black: FOG_Belt_RTGFB_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_blk.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_black_co.paa"
		};
	};
	class FOG_Belt_RTGFB_AOR1: FOG_Belt_RTGFB_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_aor1.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_cb_co.paa"
		};
	};
	class FOG_Belt_RTGFB_AOR2: FOG_Belt_RTGFB_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_aor2.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_rg_co.paa"
		};
	};
	class FOG_Belt_RTGFB_ALP: FOG_Belt_RTGFB_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_alpine.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\retention_lanyard_alp_co.paa"
		};
	};
    class PlateCarrierHolster ;
	class FOG_RTGFB_HolsterBase: PlateCarrierHolster
	{
		scope=0;
		displayName="Ronin Tactics Holster";
		descriptionShort="A holster made from Kydex, built for the high tier pipe hitter in all of us. Proprietary Ronin Tactics Accesories.";
		model="\FOG_MOD\Gear\Belts\FOG_Ronin_Belt\FOG_Ronin_Holster.p3d";
		inventorySlot[]={"FOG_Ronin_Holsterslot"};
		hiddenSelections[]={"camo"};
		repairableWithKits[]={8,5};
		repairCosts[]={25,25};
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
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
    class FOG_RTGFB_Holster_Tan: FOG_RTGFB_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
	};
    class FOG_RTGFB_Holster_MC: FOG_RTGFB_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_mc.paa"
		};
	};
    class FOG_RTGFB_Holster_RG: FOG_RTGFB_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_od_co.paa"
		};
	};
    class FOG_RTGFB_Holster_Black: FOG_RTGFB_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
	};
    class FOG_RTGFB_Holster_ALP: FOG_RTGFB_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_alpine_co.paa"
		};
	};
    class Inventory_Base ;
	class FOG_Pouch_LBT_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "LBT Blowout Medkit";
		descriptionShort="LBT Pouch that holds medical items in slots. Sits comfortably on your belt.";
		itemsize[] = {3, 3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Gear\Belts\FOG_Ronin_Belt\FOG_LBT.p3d";
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
		inventorySlot[] = {"FOG_LBT_pouch"};
		weight = 100;
		hiddenSelections[]={"camo"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
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
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBT.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBT.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBT.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBT_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBT_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_LBT_CB : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_CB_co.paa"};
	};
	class FOG_Pouch_LBT_RG : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_RG_co.paa"};
	};
	class FOG_Pouch_LBT_Black : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_Black_co.paa"};
	};
	class FOG_Pouch_LBT_Grey : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_Grey_co.paa"};
	};
	class FOG_Pouch_LBT_White : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_White_co.paa"};
	};
	class FOG_Pouch_LBT_MC : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_MC_co.paa"};
	};
	class FOG_Pouch_LBT_MCB : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_MCB_co.paa"};
	};
	class FOG_Pouch_LBT_MCA : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_MCA_co.paa"};
	};
	class FOG_Pouch_LBT_MCAL : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_MCAL_co.paa"};
	};
	class FOG_Pouch_LBT_MCT : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_MCT_co.paa"};
	};
	class FOG_Pouch_LBT_M81 : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_M81_co.paa"};
	};
	class FOG_Pouch_LBT_AOR1 : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_AOR1_co.paa"};
	};
	class FOG_Pouch_LBT_AOR2 : FOG_Pouch_LBT_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\LBTBlowout_AOR2_co.paa"};
	};
};
class CfgSlots
{
	class Slot_FOG_Ronin_Holsterslot
	{
		name = "FOG_Ronin_Holsterslot";
		displayName = "Ronin Tactics Holster";
		ghostIcon = "set:FOG_Slots image:FOG_Belt_Holster";
	};
	class Slot_FOG_LBT_pouch
	{
		name = "FOG_LBT_pouch";
		displayName = "LBT Medkit";
		ghostIcon = "set:FOG_Slots image:FOG_Belt_assmeds";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFOG_Ronin_Holster: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_Ronin_Holsterslot"
		};
		model="\FOG_MOD\Gear\Belts\FOG_Ronin_Belt\FOG_Ronin_Holster.p3d";
	};
	class ProxyFOG_LBT: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_LBT_pouch"
		};
		model="\FOG_MOD\Gear\Belts\FOG_Ronin_Belt\FOG_LBT.p3d";
	};
};