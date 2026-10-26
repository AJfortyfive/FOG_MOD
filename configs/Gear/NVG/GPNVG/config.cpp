class CfgPatches
{
	class FOG_GPNVG_Tarzier_stuff
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
    class FOG_GPNVG_Base: NVGoggles
	{
		scope=0;
		displayName="L3Harris GPNVG18";
		descriptionShort="The L3Harris Ground Panoramic Night Vision Goggle provides the operator with a 97-degree panoramic field-of-view that enables increased situational awareness and operational effectiveness.";
		model="\FOG_MOD\Gear\NVG\GPNVG\FOG_GPNVG.p3d";
		hiddenSelections[]=
		{
            "camo",
            "camo_mount"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\Data\GPNVG18.rvmat",
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
    class FOG_GPNVG_Tan: FOG_GPNVG_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\Data\GPNVG18_Tan_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\Data\GPNVG18.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_GPNVG_Black: FOG_GPNVG_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\Data\GPNVG18_Black_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Black_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\Data\GPNVG18.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_GPNVG_RG: FOG_GPNVG_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\Data\GPNVG18_RG_co.paa",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\Data\GPNVG18.rvmat",
            "FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_GPNVG_GSGM_Base: NVGoggles
	{
		scope=0;
		displayName="L3Harris GPNVG18 - GSGM";
		descriptionShort="The L3Harris Ground Panoramic Night Vision Goggle provides the operator with a 97-degree panoramic field-of-view that enables increased situational awareness and operational effectiveness. This one is a special varient mounted on a Wilcox Ground Spec Goggle Mount.";
		model="\FOG_MOD\Gear\NVG\GPNVG\FOG_GPNVG_GSGM.p3d";
		hiddenSelections[]=
		{
            "camo_gp",
            "camo_gsgm"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Gear\NVG\GPNVG\Data\gsgm\GPNVG.rvmat",
			"FOG_MOD\Gear\NVG\GPNVG\Data\gsgm\GSGM_Mount.rvmat"
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
    class FOG_GPNVG_GSGM_Tan: FOG_GPNVG_GSGM_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
            "FOG_MOD\Gear\NVG\GPNVG\Data\gsgm\GPNVG_FDE_co.paa",
			"FOG_MOD\Gear\NVG\GPNVG\Data\gsgm\GSGM_Mount_FDE_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
            "FOG_MOD\Gear\NVG\GPNVG\Data\gsgm\GPNVG.rvmat",
			"FOG_MOD\Gear\NVG\GPNVG\Data\gsgm\GSGM_Mount.rvmat"
		}; 
	};
};
