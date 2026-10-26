class CfgPatches
{
    class FOG_MOD_Glasses_ESS
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"DZ_Characters", "DZ_Gear_Optics"};
    };
};
class CfgVehicles
{
    class Clothing;
    class FOG_Glasses_ESS_ColorBase : Clothing
    {
        scope=0;
        displayName="ESS Tactical Eye Protection";
        descriptionShort="Tactical Eye Pro designed by ESS.";
        model="\FOG_MOD\Gear\MISC\ESS_Glasses\FOG_Ess_Glasses_G.p3d";
        vehicleClass="Clothing";
        simulation="clothing";
        inventorySlot[]={"Eyewear"};
        itemInfo[]={"Clothing", "Eyewear"};
        rotationFlags=17;
        weight=40;
        itemSize[]={2, 1};
        lootCategory="Eyewear";
        hiddenSelections[]={"camo_frame"};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=50;
                    healthLevels[]=
                    {
                        {1.0, {"FOG_MOD\Gear\MISC\ESS_Glasses\data\glasses_ess_frame.rvmat"}}, 
                        {0.7, {"FOG_MOD\Gear\MISC\ESS_Glasses\data\glasses_ess_frame.rvmat"}}, 
                        {0.5, {"FOG_MOD\Gear\MISC\ESS_Glasses\data\glasses_ess_frame.rvmat"}}, 
                        {0.3, {"FOG_MOD\Gear\MISC\ESS_Glasses\data\glasses_ess_frame.rvmat"}}, 
                        {0.0, {"FOG_MOD\Gear\MISC\ESS_Glasses\data\glasses_ess_frame.rvmat"}}
                    };
                };
            };
        };
        class ClothingTypes
        {
            male="\FOG_MOD\Gear\MISC\ESS_Glasses\FOG_Ess_Glasses_M.p3d";
            female="\FOG_MOD\Gear\MISC\ESS_Glasses\FOG_Ess_Glasses_F.p3d";
        };
        soundImpactType="glass";
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem
                {
                    soundSet="SportGlasses_pickup_SoundSet";
                    id=797;
                };
                class drop
                {
                    soundset="SportGlasses_drop_SoundSet";
                    id=898;
                };
            };
        };
    };
	class FOG_Glasses_ESS_Black: FOG_Glasses_ESS_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\ESS_Glasses\data\glasses_ess_Black_co.paa"
		};
	};
	class FOG_Glasses_ESS_FDE: FOG_Glasses_ESS_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\ESS_Glasses\data\glasses_ess_FDE_co.paa"
		};
	};
};