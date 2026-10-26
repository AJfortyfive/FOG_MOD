class CfgPatches
{
	class FOG_MOD_Slots
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "DZ_Scripts",
            "DZ_Gear_Medical",
            "DZ_Weapons_Melee",
            "DZ_Weapons_Melee_Blade",
            "DZ_Weapons_Explosives",
            "FOG_MOD_Scripts"
		};
	};
};
class CfgVehicles
{
    class Inventory_Base;
	class ExplosivesBase: Inventory_Base
	{
		absorbency=0.5;
		itemSize[]={1,2};
		inventorySlot[]+=
		{
			"IEDExplosiveA",
			"IEDExplosiveB",
            "FOG_PlasticExplosive"
		};
		class AnimationSources
		{
			class Visibility
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
		soundImpactType="plastic";
	};
    class ItemCompass : Inventory_Base
	{
		inventorySlot[]+= {"FOG_navagation_slot"};
	};
	class BloodTestKit: Inventory_Base
	{
		inventorySlot[]+= {"FOG_BloodTest_Kit"};
	};
	class SalineBagIV: Inventory_Base
	{
		inventorySlot[]+= {"FOG_TransfusionKit"};
	};
	class Morphine: Inventory_Base
	{
		inventorySlot[]+= {"FOG_Morphine"};
	};
	class AntiChemInjector: Inventory_Base
	{
		inventorySlot[]+= {"FOG_EpinephrineA","FOG_EpinephrineB"};
	};
	class Epinephrine: Inventory_Base
	{
		inventorySlot[]+= {"FOG_EpinephrineA","FOG_EpinephrineB"};
	};
    class Edible_Base;
	class PainkillerTablets: Edible_Base
	{
		inventorySlot[]+= {"FOG_painkillers2"};
	};
	class VitaminBottle: Edible_Base
	{
		inventorySlot[]+={"FOG_VitaminBottle"};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		inventorySlot[]+= {"FOG_tetracycline"};
	};
};
class CfgSlots
{
	class Slot_FOG_BloodTest_Kit
	{
		name = "FOG_BloodTest_Kit";
		displayName = "BloodTest Kit";
		ghostIcon = "set:FOG_Slots image:FOG_BTK";
	};
	class Slot_FOG_TransfusionKit
	{
		name = "FOG_TransfusionKit";
		displayName = "Saline IV Kit";
		ghostIcon = "set:FOG_Slots image:FOG_SalineIV";
	};
	class Slot_FOG_EpinephrineA
	{
		name = "FOG_EpinephrineA";
		displayName = "Injector";
		ghostIcon = "set:FOG_Slots image:FOG_Injector";
	};
	class Slot_FOG_EpinephrineB
	{
		name = "FOG_EpinephrineB";
		displayName = "Injector";
		ghostIcon = "set:FOG_Slots image:FOG_Injector";
	};
	class Slot_FOG_Morphine
	{
		name = "FOG_Morphine";
		displayName = "Morphine";
		ghostIcon = "set:FOG_Slots image:FOG_Injector";
	};
	class Slot_FOG_tetracycline
	{
		name = "FOG_tetracycline";
		displayName = "Tetracycline";
		ghostIcon = "set:FOG_Slots image:FOG_PillsTetra";
	};
	class Slot_FOG_VitaminBottle
	{
		name = "FOG_VitaminBottle";
		displayName = "Vitamin Bottle";
		ghostIcon = "set:FOG_Slots image:FOG_Vitamins";
	};
	class Slot_FOG_painkillers2
	{
		name = "FOG_painkillers2";
		displayName = "Pain Killer Tablets";
		ghostIcon = "set:FOG_Slots image:FOG_Pills_Codine";
	};
	class Slot_FOG_small_patch
	{
		name = "FOG_small_patch";
		displayName = "Small Morale Patch";
		ghostIcon = "set:FOG_Slots image:FOG_Patch";
	};
	class Slot_FOG_big_patch
	{
		name = "FOG_big_patch";
		displayName = "Vest Chest Accessories";
		ghostIcon = "set:FOG_Slots image:FOG_Patch";
	};
	class Slot_FOG_big_patch_only
	{
		name = "FOG_big_patch_only";
		displayName = "Large Morale Patch";
		ghostIcon = "set:FOG_Slots image:FOG_Patch";
	};
	class Slot_FOG_navagation_slot
	{
		name = "FOG_navagation_slot";
		displayName = "Compass";
		ghostIcon = "set:FOG_Slots image:FOG_Compass";
	};
	class Slot_SF_Comtacs
	{
		name = "SF_Comtacs";
		displayName = "Arc Headphones";
		ghostIcon = "set:FOG_Slots image:FOG_ArcHeadphones";
	};
	class Slot_SF_BattPack
	{
		name = "SF_BattPack";
		displayName = "Battery Pack";
		ghostIcon = "set:FOG_Slots image:FOG_BattPack";
	};
	class Slot_SF_Cover
	{
		name = "SF_Cover";
		displayName = "Fast SF Cover";
		ghostIcon = "set:FOG_Slots image:FOG_HelmetCover";
	};
	class Slot_FOG_af_cover
	{
		name = "FOG_af_cover";
		displayName = "Airframe Cover";
		ghostIcon = "set:FOG_Slots image:FOG_HelmetCover";
	};
	class Slot_FOG_ear_cover
	{
		name = "FOG_ear_cover";
		displayName = "Arm Headphones";
		ghostIcon = "set:FOG_Slots image:FOG_ArmHeadphones";
	};
	class Slot_FOG_mand
	{
		name = "FOG_mand";
		displayName = "Fast MT Mandible";
		ghostIcon = "set:FOG_Slots image:FOG_Mand";
	};
	class Slot_FOG_MT_Cover
	{
		name = "FOG_MT_Cover";
		displayName = "Fast MT Cover";
		ghostIcon = "set:FOG_Slots image:FOG_HelmetCover";
	};
	class Slot_FOG_HMTL
	{
		name = "FOG_HMTL";
		displayName = "Task Light";
		ghostIcon = "set:FOG_Slots image:FOG_HMTL";
	};
	class Slot_FOG_M50_Belt
	{
		name = "FOG_M50_Belt";
		displayName = "M50 GasMask";
		ghostIcon = "set:FOG_Slots image:FOG_M50";
	};
	class Slot_FOG_VestSlotFR
	{
		name = "FOG_VestSlotFR";
		displayName = "Vest Front Right";
		ghostIcon = "set:FOG_Slots image:FOG_VestPouch_FR";
	};
	class Slot_FOG_admin_small
	{
		name = "FOG_admin_small";
		displayName = "Vest Front Left";
		ghostIcon = "set:FOG_Slots image:FOG_VestPouch_FL";
	};
	class Slot_FOG_vest_belly
	{
		name = "FOG_vest_belly";
		displayName = "Vest Pouch Belly";
		ghostIcon = "set:FOG_Slots image:FOG_VestBelly";
	};
	class Slot_FOG_gren_pouch
	{
		name = "FOG_gren_pouch";
		displayName = "Vest Back Left";
		ghostIcon = "set:FOG_Slots image:FOG_VestPouch_BL";
	};
	class Slot_FOG_ifak_vest
	{
		name = "FOG_ifak_vest";
		displayName = "Vest Back Right";
		ghostIcon = "set:FOG_Slots image:FOG_VestPouch_BR";
	};
	class Slot_FOG_tourniquet
	{
		name = "FOG_tourniquet";
		displayName = "Tourniquet";
		ghostIcon = "set:FOG_Slots image:FOG_CAT";
	};
	class Slot_FOG_vest_panel
	{
		name = "FOG_vest_panel";
		displayName = "Vest BackPanel";
		ghostIcon = "set:FOG_Slots image:FOG_VestPanel";
	};
	class Slot_FOG_FlagRoll
	{
		name = "FOG_FlagRoll";
		displayName = "Flag Roll";
		ghostIcon = "set:FOG_Slots image:FOG_FlagRoll";
	};
	class Slot_FOG_PlasticExplosive
	{
		name = "FOG_PlasticExplosive";
		displayName = "Plastic Explostives";
		ghostIcon = "set:FOG_Slots image:FOG_Explosives";
	};
	class Slot_FOG_HGU_Mask
	{
		name = "FOG_HGU_Mask";
		displayName = "HGU MFS Shield";
		ghostIcon = "set:FOG_Slots image:FOG_FlagRoll";
	};
	class Slot_FOG_HGU_Visor
	{
		name = "FOG_HGU_Visor";
		displayName = "HGU Visor";
		ghostIcon = "set:FOG_Slots image:FOG_FlagRoll";
	};
	class Slot_FOG_C420_PAPR
	{
		name = "FOG_C420_PAPR";
		displayName = "C420 PAPR Filter";
		ghostIcon = "set:FOG_Slots image:FOG_FlagRoll";
	};
	class Slot_FOG_FannyPack
	{
		name = "FOG_FannyPack";
		displayName = "Fanny Pack";
		ghostIcon = "set:FOG_Slots image:FOG_FlagRoll";
	};
	class Slot_FOG_ViperHood_Veil
	{
		name = "FOG_ViperHood_Veil";
		displayName = "Veil (need burlap straps)";
		ghostIcon = "";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBloodTest_Kit: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_BloodTest_Kit"
		};
		model="\dz\gear\medical\BloodTest_Kit.p3d";
	};
	class ProxyTransfusionKit: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_TransfusionKit"
		};
		model="\dz\gear\medical\TransfusionKit.p3d";
	};
	class ProxyEpinephrineA: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_EpinephrineA"
		};
		model="\dz\gear\medical\Epinephrine.p3d";
	};
	class ProxyEpinephrineB: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_EpinephrineB"
		};
		model="\dz\gear\medical\Epinephrine.p3d";
	};
	class ProxyMorphine: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_Morphine"
		};
		model="\dz\gear\medical\Morphine.p3d";
	};
	class Proxytetracycline: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_tetracycline"
		};
		model="\dz\gear\medical\tetracycline.p3d";
	};
	class ProxyVitaminBottle: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_VitaminBottle"
		};
		model="\dz\gear\medical\VitaminBottle.p3d";
	};
	class Proxypainkillers2: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_painkillers2"
		};
		model="\dz\gear\medical\painkillers2.p3d";
	};
	class ProxyFOG_Patch_Small: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_small_patch"
		};
		model="\FOG_MOD\Data\Patches\Patch_Small\FOG_Patch_Small.p3d";
	};
	class ProxyFOG_big_patch: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_big_patch"
		};
		model="\FOG_MOD\Data\Patches\Patch_Big\FOG_big_patch.p3d";
	};
	class ProxyFOG_proxy_patchbig: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_big_patch_only"
		};
		model="\FOG_MOD\Data\FOG_proxy_patchbig.p3d";
	};
	class Proxycompass: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_navagation_slot"
		};
		model="\DZ\gear\navigation\compass.p3d";
	};
	class ProxyFast_SF_Battery_Pack: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SF_BattPack"
		};
		model="\FOG_MOD\Helmets\Accessories\MK1BatteryPack\Fast_SF_Battery_Pack.p3d";
	};
	class ProxyFast_SF_Comtacs_Down: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SF_Comtacs"
		};
		model="\FOG_MOD\Helmets\Accessories\ComtacPeltors3\Fast_SF_Comtacs_Down.p3d";
	};
	class ProxyFast_SF_Cover: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SF_Cover"
		};
		model="\FOG_MOD\Helmets\Accessories\SF_Cover\Fast_SF_Cover.p3d";
	};
	class ProxyFC_Torus_BattPack: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SF_BattPack"
		};
		model="\FOG_MOD\Helmets\Accessories\FC_Torus_BattPack\FC_Torus_BattPack.p3d";
	};
	class Proxycomtac4: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SF_Comtacs"
		};
		model="\FOG_MOD\Helmets\Accessories\ComtacPeltors4\comtac4.p3d";
	};
	class ProxyCrye_AF_cover: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_af_cover"
		};
		model="\FOG_MOD\Helmets\Accessories\CRYE_AF_Cover\Crye_AF_cover.p3d";
	};
	class ProxyFOG_Mand: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_mand"
		};
		model="\FOG_MOD\Helmets\Accessories\FASTMT_Mand\FOG_Mand.p3d";
	};
	class ProxyFOG_RAC: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_ear_cover"
		};
		model="\FOG_MOD\Helmets\Accessories\RAC_Headset\FOG_RAC.p3d";
	};
	class ProxyFOG_FAST_MT_Cover: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_MT_Cover"
		};
		model="\FOG_MOD\Helmets\Accessories\FASTMT_Cover\FOG_FAST_MT_Cover.p3d";
	};
	class ProxyFOG_HMTL: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_HMTL"
		};
		model="\FOG_MOD\Helmets\Accessories\HMTL_SF\FOG_HMTL.p3d";
	};
	class ProxyFOG_M50_G: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_M50_Belt"
		};
		model="\FOG_MOD\Gear\Masks\M50_Gasmask\FOG_M50_G.p3d";
	};
	class Proxydummypouch1: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_admin_small"
		};
		model="\FOG_MOD\Vests\Accessories\Proxies\dummypouch1.p3d";
	};
	class Proxydummypouch2: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_gren_pouch"
		};
		model="\FOG_MOD\Vests\Accessories\Proxies\dummypouch2.p3d";
	};
	class Proxydummypouch3: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_VestSlotFR"
		};
		model="\FOG_MOD\Vests\Accessories\Proxies\dummypouch3.p3d";
	};
	class Proxydummypouch4: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_ifak_vest"
		};
		model="\FOG_MOD\Vests\Accessories\Proxies\dummypouch4.p3d";
	};
	class ProxyFOG_JPC_BellyPouch: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_vest_belly"
		};
		model="\FOG_MOD\Vests\Accessories\Belly\BellyPouch\FOG_JPC_BellyPouch.p3d";
	};
	class ProxyFOG_Tourniquet: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_tourniquet"
		};
		model="\FOG_MOD\Vests\Accessories\Medical\Tourniquet\FOG_Tourniquet.p3d";
	};
	class ProxyFOG_JPC_Panel1: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_vest_panel"
		};
		model="\FOG_MOD\Vests\Accessories\Panels\AVSPanel\FOG_JPC_Panel1.p3d";
	};
	class ProxyFOG_FlagRoll: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_FlagRoll"
		};
		model="\FOG_MOD\Vests\Accessories\MISC\FlagRoll\FOG_FlagRoll.p3d";
	};
	class ProxyPlastic_Explosive: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_PlasticExplosive"
		};
		model="\dz\weapons\explosives\Plastic_Explosive.p3d";
	};
	class ProxyFOG_HGU56_Mask: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_HGU_Mask"
		};
		model="\FOG_MOD\Helmets\HGU56\FOG_HGU56_Mask.p3d";
	};
	class ProxyFOG_HGU56_Visor: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_HGU_Visor"
		};
		model="\FOG_MOD\Helmets\HGU56\FOG_HGU56_Visor.p3d";
	};
	class ProxyFOG_Fanny: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"FOG_FannyPack"
		};
		model="\FOG_MOD\Vests\Accessories\Belly\FannyPack\FOG_Fanny.p3d";
	};
};