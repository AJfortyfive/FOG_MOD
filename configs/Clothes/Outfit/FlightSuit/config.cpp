class CfgPatches
{
	class FOG_MOD_Outfit_FlightSuit
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
	class FOG_FlightSuit_ColorBase: Clothing
	{
		displayName="Aviation Flight Suit";
		descriptionShort="A full body Aviators Flight Suit designed for extreme conditions, well insulated and water resistant. Cannot be worn with pants.";
		model="\FOG_MOD\Clothes\Outfit\FlightSuit\FOG_Flightsuit_G.p3d";
		inventorySlot[]={"Body"};
		itemInfo[]={"Clothing","Body"};
        attachments[]={"FOG_small_patch"};
		weight=800;
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};
		quickBarBonus=2;
		ragQuantity=3;
        varWetMax=0.249;
		heatIsolation=0.9;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]={"camo_top","camo_pants"};
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
								"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top.rvmat",
                                "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top.rvmat",
                                "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top.rvmat",
                                "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_damage.rvmat",
                                "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_destruct.rvmat",
                                "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\FOG_MOD\Clothes\Outfit\FlightSuit\FOG_Flightsuit_M.p3d";
			female="\FOG_MOD\Clothes\Outfit\FlightSuit\FOG_Flightsuit_F.p3d";
		};
		class Protection
		{
			chemical=0.25;
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
	class FOG_FlightSuit_Black: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_Black_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_Black_co.paa"
		};
	};
	class FOG_FlightSuit_Grey: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_Grey_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_Grey_co.paa"
		};
	};
	class FOG_FlightSuit_Tan: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_Tan_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_Tan_co.paa"
		};
	};
	class FOG_FlightSuit_RG: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_RG_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_RG_co.paa"
		};
	};
	class FOG_FlightSuit_MC: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_MC_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_MC_co.paa"
		};
	};
	class FOG_FlightSuit_MCB: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_MCB_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_MCB_co.paa"
		};
	};
	class FOG_FlightSuit_MCT: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_MCT_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_MCT_co.paa"
		};
	};
	class FOG_FlightSuit_M81: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_M81_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_M81_co.paa"
		};
	};
	class FOG_FlightSuit_UCP: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_UCP_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_UCP_co.paa"
		};
	};
	class FOG_FlightSuit_AOR2: FOG_FlightSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Top_AOR2_co.paa",
            "FOG_MOD\Clothes\Outfit\FlightSuit\data\Flightsuit_Pants_AOR2_co.paa"
		};
	};
};