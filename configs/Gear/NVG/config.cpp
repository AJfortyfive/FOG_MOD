class CfgPatches
{
	class FOG_MOD_NVG
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "DZ_Characters_Glasses",
            "FOG_MOD_Scripts"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class FOG_Tarsier : Inventory_Base 
	{
		scope = 2;
		displayName = "Tarsier Focus Lense";
		descriptionShort="Focus Lenses made for NVGs.";
		itemsize[] = {1, 1};
		allowOwnedCargoManipulation = 1;
		Model = "\FOG_MOD\Gear\NVG\Tarsier\FOG_NVG_Tarsier.p3d";
		inventorySlot[] = {"FOG_TarsierSlot"};
		weight = 10;
    };
    class NVGoggles;
    class FOG_NVG_Togglable_Base: NVGoggles
	{
		scope=0;
	};
};
class CfgSlots
{
	class Slot_FOG_TarsierSlot
	{
		name = "FOG_TarsierSlot";
		displayName = "Tarsier Kit";
		ghostIcon = "set:FOG_Slots image:FOG_Tarsier";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFOG_NVG_Tarsier: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"FOG_TarsierSlot"
		};
		model="\FOG_MOD\Gear\NVG\Tarsier\FOG_NVG_Tarsier.p3d";
	};
};