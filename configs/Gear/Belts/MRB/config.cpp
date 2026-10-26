class CfgPatches
{
	class FOG_MRB_Belt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "DZ_Data",
            "DZ_Characters",
            "DZ_Scripts",
            "FOG_MOD_Scripts"
		};
	};
};
class CfgVehicles
{
    class Clothing;
	class FOG_MRB_Belt_ColorBase: Clothing
	{
		scope=0;
		displayName="MRB Belt";
		descriptionShort="The Crye Modular Rigger's Belt is a strong and versatile tactical belt for military and law enforcement use, designed for easy attachment of MOLLE-compatible pouches and accessories.";
		model="\FOG_MOD\Gear\Belts\MRB\MRB_Belt_G.p3d";
		attachments[]=
        {
            "FOG_MRB_dropmag",
            "FOG_MRB_esstac",
            "FOG_MRB_singlemag",
            "FOG_Ronin_Holsterslot",
            "FOG_LBT_pouch",
            "Chemlight",
            "Gloves",
			"FOG_FannyPack"
        };
		vehicleClass="Clothing";
		simulation="clothing";
        varWetMax=0.249;
		heatIsolation=0.3;
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		itemSize[]={3,1};
		weight=150;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		lootCategory="Crafted";
		hiddenSelections[]=
		{
			"camo_belt"
		};
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\MRB_CB_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\mil_belt_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"DZ\characters\belts\data\mil_belt_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\characters\belts\data\mil_belt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\Belts\MRB\MRB_Belt_M.p3d";
			female="\FOG_MOD\Gear\Belts\MRB\MRB_Belt_M.p3d";
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

	class FOG_MRB_Belt_CB : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_CB_co.paa"};
	};
	class FOG_MRB_Belt_MC : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_MC_co.paa"};
	};
	class FOG_MRB_Belt_MCB : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_MCB_co.paa"};
	};
	class FOG_MRB_Belt_RG : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_RG_co.paa"};
	};
	class FOG_MRB_Belt_AOR1 : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_AOR1_co.paa"};
	};
	class FOG_MRB_Belt_AOR2 : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_AOR2_co.paa"};
	};
	class FOG_MRB_Belt_ATACSAU : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_ATACSAU_co.paa"};
	};
	class FOG_MRB_Belt_Black : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_Black_co.paa"};
	};
	class FOG_MRB_Belt_6CD : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_CC_co.paa"};
	};
	class FOG_MRB_Belt_MCT : FOG_MRB_Belt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\MRB_MCT_co.paa"};
	};
    class PlateCarrierHolster ;
	class FOG_SAS_HolsterBase: PlateCarrierHolster
	{
		scope=0;
		displayName="SAS Holster";
		descriptionShort="A holster made from Kydex, built for the high tier pipe hitter in all of us. Proprietary Ronin Tactics Accesories.";
		model="\FOG_MOD\Gear\Belts\MRB\MRB_Holster_Sas.p3d";
		inventorySlot[]={"FOG_Ronin_Holsterslot"};
		hiddenSelections[]={"camo_holster","camo_paddle"};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_sas.rvmat",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
		};
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
								"",
                                ""
							}
						},
						
						{
							0.7,
							
							{
								"",
                                ""
							}
						},
						
						{
							0.5,
							
							{
								"",
                                ""
							}
						},
						
						{
							0.3,
							
							{
								"",
                                ""
							}
						},
						
						{
							0.0,
							
							{
								"",
                                ""
							}
						}
					};
				};
			};
        };
    };
    class FOG_SAS_Holster_Tan: FOG_SAS_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_tan_co.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_sas.rvmat",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
		};
	};
    class FOG_SAS_Holster_Black: FOG_SAS_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_black_co.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_sas.rvmat",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
		};
	};
    class FOG_SAS_Holster_CB: FOG_SAS_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_cb_co.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_sas.rvmat",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
		};
	};
    class FOG_SAS_Holster_RG: FOG_SAS_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_rg_co.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_od_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_sas.rvmat",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
		};
	};
    class FOG_SAS_Holster_MC: FOG_SAS_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_wrapped_mc_co.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_wrapped_sas.rvmat",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
		};
	};
    class FOG_SAS_Holster_MCB: FOG_SAS_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_wrapped_mcb_co.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_wrapped_sas.rvmat",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
		};
	};
    class FOG_SAS_Holster_M81: FOG_SAS_HolsterBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_wrapped_m81_co.paa",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\Belts\MRB\data\Sas_holster\holster_wrapped_sas.rvmat",
            "FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\ronin_belt_holster.rvmat"
		};
	};
    class Inventory_Base ;
	class FOG_Pouch_Dump_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "MRB Dump Pouch";
		descriptionShort="A small and durable carrying case designed to hold spare firearm magazines, with a quick-release mechanism for fast access..";
		itemsize[] = {3, 3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Gear\Belts\MRB\MRB_Belt_dropbag.p3d";
		attachments[]= {};
        itemsCargoSize[] = {3,3};
		inventorySlot[] = {"FOG_MRB_dropmag"};
		weight = 50;
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
								"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_droppouch.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_droppouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_droppouch_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_droppouch_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_droppouch_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Dump_MC : FOG_Pouch_Dump_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_drop_mc_co.paa"};
	};
	class FOG_Pouch_Dump_MCB : FOG_Pouch_Dump_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_drop_mcb_co.paa"};
	};
	class FOG_Pouch_Dump_AOR2 : FOG_Pouch_Dump_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_drop_aor2_co.paa"};
	};
	class FOG_Pouch_Dump_Black : FOG_Pouch_Dump_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_drop_black_co.paa"};
	};
	class FOG_Pouch_Dump_CB : FOG_Pouch_Dump_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_drop_cb_co.paa"};
	};
	class FOG_Pouch_Dump_RG : FOG_Pouch_Dump_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Dropmag\knight_drop_rg_co.paa"};
	};
	class FOG_Pouch_SingleMag_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Single Mag Pouch";
		descriptionShort="A singular pouch with enough space for a 30 round stanag.";
		itemsize[] = {1, 3};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Gear\Belts\MRB\MRB_Belt_singlemag.p3d";
		attachments[]= {};
        itemsCargoSize[] = {1,3};
		inventorySlot[] = {"FOG_MRB_singlemag","TV110fastmag"};
		weight = 50;
		hiddenSelections[]={"camo_pouch"};
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
								"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_SingleMag_MC : FOG_Pouch_SingleMag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch_mc_co.paa"};
	};
	class FOG_Pouch_SingleMag_MCB : FOG_Pouch_SingleMag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch_mcb_co.paa"};
	};
	class FOG_Pouch_SingleMag_RG : FOG_Pouch_SingleMag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch_rg_co.paa"};
	};
	class FOG_Pouch_SingleMag_Black : FOG_Pouch_SingleMag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch_black_co.paa"};
	};
	class FOG_Pouch_SingleMag_CB : FOG_Pouch_SingleMag_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Singlemag\singlemagpouch_cb_co.paa"};
	};
	class FOG_Pouch_Esstac_Base : Inventory_Base 
	{
		scope = 0;
		displayName = "Esstac Mag Pouch";
		descriptionShort="A dual pistol magazine pouch with enough space to fit two spare reloads.";
		itemsize[] = {2, 2};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Gear\Belts\MRB\MRB_Belt_esstacpouch.p3d";
		attachments[]= {};
        itemsCargoSize[] = {2,2};
		inventorySlot[] = {"FOG_MRB_esstac"};
		weight = 50;
		hiddenSelections[]={"camo_pouch"};
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
								"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_destruct.rvmat"
							}
						}
					};
				};
			};
        };
    };
	class FOG_Pouch_Esstac_MC : FOG_Pouch_Esstac_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_mc_co.paa"};
	};
	class FOG_Pouch_Esstac_Black : FOG_Pouch_Esstac_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_blk_co.paa"};
	};
	class FOG_Pouch_Esstac_ALP : FOG_Pouch_Esstac_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_alpine_co.paa"};
	};
	class FOG_Pouch_Esstac_AOR1 : FOG_Pouch_Esstac_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_aor1_co.paa"};
	};
	class FOG_Pouch_Esstac_AOR2 : FOG_Pouch_Esstac_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_aor2_co.paa"};
	};
	class FOG_Pouch_Esstac_RG : FOG_Pouch_Esstac_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_rg_co.paa"};
	};
	class FOG_Pouch_Esstac_CB : FOG_Pouch_Esstac_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Belts\MRB\data\Esstac\esstac2_cb_co.paa"};
	};
};
class CfgSlots
{
	class Slot_FOG_MRB_singlemag
	{
		name = "FOG_MRB_singlemag";
		displayName = "MRB SingleMag";
		ghostIcon = "set:FOG_Slots image:FOG_SINGLEMAG";
	};
	class Slot_FOG_MRB_esstac
	{
		name = "FOG_MRB_esstac";
		displayName = "MRB Esstac Pouch";
		ghostIcon = "set:FOG_Slots image:FOG_Belt_PistolMags";
	};
	class Slot_FOG_MRB_dropmag
	{
		name = "FOG_MRB_dropmag";
		displayName = "MRB Dump Pouch";
		ghostIcon = "set:FOG_Slots image:FOG_Belt_Dump";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMRB_Holster_Sas: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_Ronin_Holsterslot"
		};
		model="\FOG_MOD\Gear\Belts\MRB\MRB_Holster_Sas.p3d";
	};
	class ProxyMRB_Belt_singlemag: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_MRB_singlemag"
		};
		model="\FOG_MOD\Gear\Belts\MRB\MRB_Belt_singlemag.p3d";
	};
	class ProxyMRB_Belt_esstacpouch: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_MRB_esstac"
		};
		model="\FOG_MOD\Gear\Belts\MRB\MRB_Belt_esstacpouch.p3d";
	};
	class ProxyMRB_Belt_dropbag: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_MRB_dropmag"
		};
		model="\FOG_MOD\Gear\Belts\MRB\MRB_Belt_dropbag.p3d";
	};
};