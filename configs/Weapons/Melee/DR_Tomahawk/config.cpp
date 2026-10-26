class CfgPatches
{
	class FOG_Weapons_Tomahawk
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
    class Hatchet;
    class FOG_DR_Tomahawk_Base : Hatchet
    {
        scope=0;
        displayName="DownRange Tomahawk";
        descriptionShort="Tactical Hatchet with a built in pry tool.";
        model="\FOG_MOD\Weapons\Melee\DR_Tomahawk\FOG_DR_Tomahawk.p3d";
        debug_ItemCategory=2;
        build_action_type=10;
        dismantle_action_type=74;
        repairableWithKits[]={4};
        repairCosts[]={18};
        rotationFlags=17;
        weight=750;
        itemSize[]={2, 4};
        fragility=0.01;
		inventorySlot[]+= {"Backpack_1"};
        lootCategory="Tools";
        lootTag[]={"Work", "Forester", "Camping"};
        itemInfo[]={"Axe"};
        openItemSpillRange[]={20, 40};
        hiddenSelections[]={"camo"};
        isMeleeWeapon=1;
        suicideAnim="woodaxe";
        soundImpactType="metal";
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=150;
                    healthLevels[]=
                    {
                        {1.0,   {"FOG_MOD\Weapons\Melee\DR_Tomahawk\data\DR_Tomahawk.rvmat"}},
                        {0.75,  {"FOG_MOD\Weapons\Melee\DR_Tomahawk\data\DR_Tomahawk.rvmat"}}, 
                        {0.5,   {"FOG_MOD\Weapons\Melee\DR_Tomahawk\data\DR_Tomahawk.rvmat"}}, 
                        {0.25,  {"FOG_MOD\Weapons\Melee\DR_Tomahawk\data\DR_Tomahawk_damage.rvmat"}}, 
                        {0.0,   {"FOG_MOD\Weapons\Melee\DR_Tomahawk\data\DR_Tomahawk_destruct.rvmat"}}
                    };
                };
            };
        };
    };
	class FOG_DR_Tomahawk_Standard: FOG_DR_Tomahawk_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FOG_MOD\Weapons\Melee\DR_Tomahawk\data\DR_Tomahawk_co.paa"};
	};
};