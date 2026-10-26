class CfgPatches
{
	class FOG_PVS31_stuff
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "DZ_Characters_Glasses"
		};
	};
};
class CfgVehicles
{
    class NVGoggles;
    class FOG_PVS31: NVGoggles
	{
		scope=2;
		displayName="PVS-31";
		descriptionShort="Special Night Vision designed with better dexterity for the user.";
		model="\FOG_MOD\Gear\NVG\PVS-31\FOG_PVS31.p3d";
		hiddenSelections[]=
		{
            "camo",
            "camo_mount"
		};
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\PVS-31\Data\PVS_Dark\FOG_PVS31_Dark_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Black_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS-31\Data\PVS_Dark\FOG_PVS31.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
		simpleHiddenSelections[]=
		{
            "selection_glassback",
			"selection_splash"
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="\FOG_MOD\Gear\NVG\data\FOG_NVG_PVS31_view.p3d";
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
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_PVS31_ca.paa"
					}
				},
				
				{
					0.7,
					{}
				},
				
				{
					0.5,
					
					{
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_PVS31_ca.paa"
					}
				},
				
				{
					0.3,
					{}
				},
				
				{
					0.0,
					
					{
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_PVS31_ca.paa"
					}
				}
			};
		};
	};
    class FOG_PVS31_Wrapped: FOG_PVS31
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\PVS-31\Data\PVS_Dark_Wraped\FOG_PVS31_Dark_Wraped_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS-31\Data\PVS_Dark_Wraped\FOG_PVS31_Wraped.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_PVS31_FDE: FOG_PVS31
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\PVS-31\Data\PVS_FDE_Worn\FOG_PVS_FDE_Worn_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS-31\Data\PVS_FDE_Worn\FOG_PVS31_FDE.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_PVS31_FDE_Wrapped: FOG_PVS31
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\PVS-31\Data\PVS_FDE_Wraped\FOG_PVS_FDE_Wraped_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\PVS-31\Data\PVS_FDE_Wraped\FOG_PVS31_FDE_Wraped.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
};