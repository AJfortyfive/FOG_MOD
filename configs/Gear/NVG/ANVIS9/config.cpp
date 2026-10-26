class CfgPatches
{
	class FOG_MOD_NVG_ANVIS9
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
    class FOG_ANVIS9_Base: NVGoggles
	{
		scope=0;
		displayName="L3Harris ANVIS9";
		descriptionShort="The L3Harris aviation night vision goggle. Will only attact to the HGU 56 Aviation Helmet.";
		model="\FOG_MOD\Gear\NVG\ANVIS9\FOG_NVG_ANVIS9.p3d";
		hiddenSelections[]=
		{
            "camo_housing",
            "camo_lens"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\ANVIS9\Data\ANVIS9.rvmat",
            "FOG_MOD\Gear\NVG\data\ANVIS9_Rear_Glass.rvmat"
		}; 
		simpleHiddenSelections[]=
		{
            "selection_glassback",
			"selection_splash"
		};
		attachments[]=
		{
            "BatteryD"
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
    class FOG_ANVIS9: FOG_ANVIS9_Base
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\NVG\ANVIS9\Data\ANVIS9_co.paa",
            "FOG_MOD\Gear\NVG\ANVIS9\Data\ANVIS9_co.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"FOG_MOD\Gear\NVG\ANVIS9\Data\ANVIS9.rvmat",
            "FOG_MOD\Gear\NVG\data\ANVIS9_Rear_Glass.rvmat"
		}; 
	};
};
