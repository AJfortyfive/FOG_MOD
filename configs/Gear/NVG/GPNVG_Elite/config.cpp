class CfgPatches
{
	class FOG_GPNVG_Elite_stuff
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters_Glasses"};
	};
};
class CfgVehicles
{
    class NVGoggles;
    class FOG_GPNVG_Elite: NVGoggles
	{
		scope=2;
		displayName="GPNVG Elite";
		descriptionShort="Elite Tactical GPNVGs.";
		model="\FOG_MOD\Gear\NVG\GPNVG_Elite\GPNVG_Elite.p3d";
		hiddenSelections[]=
		{
            "camo",
            "camo_mount"
		};
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG_Elite\data\offhand_vm_nvgquad_black_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Black_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG_Elite\data\offhand_vm_nvgquad.rvmat",
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
			modelOptics="\FOG_MOD\Gear\NVG\data\FOG_NVG_Quad_view.p3d";
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
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_Quad_ca.paa"
					}
				},
				
				{
					0.7,
					{}
				},
				
				{
					0.5,
					
					{
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_Quad_ca.paa"
					}
				},
				
				{
					0.3,
					{}
				},
				
				{
					0.0,
					
					{
						"FOG_MOD\Gear\NVG\data\NVG_Occluder_Quad_ca.paa"
					}
				}
			};
		};
	};
    class FOG_GPNVG_Elite_T: FOG_GPNVG_Elite
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\GPNVG_Elite\data\offhand_vm_nvgquad_black_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG_Elite\data\offhand_vm_nvgquad.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_GPNVG_Elite_W: FOG_GPNVG_Elite
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\GPNVG_Elite\data\offhand_vm_nvgquad_black_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_White_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG_Elite\data\offhand_vm_nvgquad.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_GPNVG_Elite_B: FOG_GPNVG_Elite
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\GPNVG_Elite\data\offhand_vm_nvgquad_black_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG_Elite\data\offhand_vm_nvgquad.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Brass.rvmat"
		}; 
	};
};