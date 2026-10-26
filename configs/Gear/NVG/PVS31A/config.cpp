class CfgPatches
{
	class FOG_MOD_PVS31A
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "DZ_Characters_Glasses",
            "FOG_MOD_NVG"
		};
	};
};
class CfgVehicles
{
    class FOG_NVG_Togglable_Base;
    class FOG_PVS31A_Base: FOG_NVG_Togglable_Base
	{
		scope=0;
		displayName="PVS-31A";
		descriptionShort="Special Night Vision designed with better dexterity for the user.";
		model="\FOG_MOD\Gear\NVG\PVS31A\FOG_PVS31A.p3d";
		hiddenSelections[]=
		{
            "camo",
            "camo_mount"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS31A\data\PVS31A.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
		simpleHiddenSelections[]=
		{
            "selection_glassback",
			"selection_splash"
		};
		attachments[]=
		{
            "BatteryD",
            "FOG_TarsierSlot"
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="\FOG_MOD\Gear\NVG\data\FOG_NVG_PVS31A_view.p3d";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
		};
		class OpticsModelInfo
		{
			healthLevels[]=
			{
				
				{
					1.0,
					
					{
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_PVS31A_ca.paa"
					}
				},
				
				{
					0.7,
					{}
				},
				
				{
					0.5,
					
					{
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_PVS31A_ca.paa"
					}
				},
				
				{
					0.3,
					{}
				},
				
				{
					0.0,
					
					{
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_PVS31A_ca.paa"
					}
				}
			};
		};
	};
    class FOG_PVS31A_Black: FOG_PVS31A_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\PVS31A\data\PVS31A_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Black_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS31A\data\PVS31A.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_PVS31A_Black_T: FOG_PVS31A_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\PVS31A\data\PVS31A_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS31A\data\PVS31A.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_PVS31A_Black_W: FOG_PVS31A_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\PVS31A\data\PVS31A_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_White_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS31A\data\PVS31A.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_PVS31A_Black_B: FOG_PVS31A_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\PVS31A\data\PVS31A_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS31A\data\PVS31A.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Brass.rvmat"
		}; 
	};
};