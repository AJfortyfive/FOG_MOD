class CfgPatches
{
	class FOG_MOD_GhillieSuit
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_GhillieSuit_ColorBase: Clothing
	{
		displayName="Improvised Ghillie";
		descriptionShort="An improvised ghillie suit worn on your back, should help conceal the wearer.";
		model="\FOG_MOD\Gear\MISC\Ghillie\FOG_Ghillie_G.p3d";
		inventorySlot[]=
		{
			"Armband"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
        rotationFlags=34;
		weight=270;
		itemSize[]={3,4};
		varWetMax=0.9;
		heatIsolation=0.9;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camo"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.7,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.3,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Gear\MISC\Ghillie\FOG_Ghillie_M.p3d";
			female="\FOG_MOD\Gear\MISC\Ghillie\FOG_Ghillie_M.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FOG_GhillieSuit_Tan: FOG_GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Ghillie\Data\fog_ghillie_co.paa"
		};
	};
	class FOG_GhillieSuit_Green: FOG_GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Gear\MISC\Ghillie\Data\fog_ghillie_green_co.paa"
		};
	};
};