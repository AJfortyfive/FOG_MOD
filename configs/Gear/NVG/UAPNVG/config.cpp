class CfgPatches
{
	class FOG_MOD_NVG_UAPNVG
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
    class FOG_UAPNVG_Base: FOG_NVG_Togglable_Base
	{
		scope=0;
		displayName="UAPNVG Chimera";
		descriptionShort="Nocturn Industries Chimera Bridge with standard GPNVGs.";
		model="\FOG_MOD\Gear\NVG\UAPNVG\FOG_UAPNVG_Chimera.p3d";
		hiddenSelections[]=
		{
            "camo",
            "camo_bridge",
			"camo_mount"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\data\GPNVG18.rvmat",
            "FOG_MOD\Gear\NVG\UAPNVG\data\Chimera_Bridge.rvmat",
			"FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
		attachments[]=
		{
            "BatteryD",
            "FOG_TarsierSlot"
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
    class FOG_UAPNVG_Black: FOG_UAPNVG_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\GPNVG\data\GPNVG18_Black_co.paa",
            "FOG_MOD\Gear\NVG\UAPNVG\data\Chimera_Bridge_Black_co.paa",
			"FOG_MOD\Gear\NVG\Wilcox\L4G24_Black_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\data\GPNVG18.rvmat",
            "FOG_MOD\Gear\NVG\UAPNVG\data\Chimera_Bridge.rvmat",
			"FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_UAPNVG_Tan: FOG_UAPNVG_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\GPNVG\data\GPNVG18_Tan_co.paa",
            "FOG_MOD\Gear\NVG\UAPNVG\data\Chimera_Bridge_CB_co.paa",
			"FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\data\GPNVG18.rvmat",
            "FOG_MOD\Gear\NVG\UAPNVG\data\Chimera_Bridge.rvmat",
			"FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
    class FOG_UAPNVG_RG: FOG_UAPNVG_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "FOG_MOD\Gear\NVG\GPNVG\data\GPNVG18_RG_co.paa",
            "FOG_MOD\Gear\NVG\UAPNVG\data\Chimera_Bridge_RG_co.paa",
			"FOG_MOD\Gear\NVG\Wilcox\L4G24_Tan_co.paa"
        };
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\GPNVG\data\GPNVG18.rvmat",
            "FOG_MOD\Gear\NVG\UAPNVG\data\Chimera_Bridge.rvmat",
			"FOG_MOD\Gear\NVG\Wilcox\L4G24.rvmat"
		}; 
	};
};