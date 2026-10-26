class CfgPatches 
{
	class FOG_MOD_Scripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","DZ_Gear_Medical", "DZ_Structures_Furniture", "DZ_Data", "DZ_Characters", "DZ_gear_food", "DZ_Gear_Consumables", "DZ_Characters_Vests", "DZ_Gear_Containers", "DZ_Weapons_Melee", "DZ_Weapons_Magazines"};
	};
};

class CfgMods 
{
	class FOG_MOD 
    {
		dir = "FOG_MOD";
		picture = "";
		action = "";
		hideName = "1";
		hidePicture = "1";
		name = "FOG_MOD";
		credits = "AJ45";
		author = "AJ45";
		authorID = "0";
		version = "1.5";
		extra = "0";
		inputs = "FOG_MOD/Scripts/Data/inputs.xml";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs 
        {
			class imageSets
			{
				files[] =
                {
					"FOG_MOD/Scripts/GUI/FOG_Slots.imageset"
				};
			};
			class gameScriptModule 
			{
				value = "";
				files[] = {"FOG_MOD/Scripts/3_Game"};
			};
			class worldScriptModule 
            {
				value = "";
				files[] = {"FOG_MOD/Scripts/4_World"};
			};
			class missionScriptModule 
            {
				value = "";
				files[] = {"FOG_MOD/Scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class Man;
	class SurvivorBase: Man
	{
		class DayZPlayer
		{
			class P3DAttachments
			{
				P3DProxies[] = {"pelvis","","launcher","pelvis","weapon","pelvis","propweaponbody","weapon","propweaponslide","propweaponbody","propweaponmag","propweaponbody","propweapon01","propweaponbody","propweapon02","propweaponbody","propweapon03","propweaponbody","propweapon04","propweaponbody","propweapon05","propweaponbody","propweapon06","propweaponbody","propweapon07","propweaponbody","propweapon08","propweaponbody","propweapon09","propweaponbody","propweapon10","propweaponbody","lefthipextra","pelvis","righthipextra","pelvis","propbeltleft","pelvis","propbeltright","pelvis","propbeltcenter","pelvis","turningaxis","pelvis","propbackpackmain","pelvis","propbackpacktop","propbackpackmain","propbackpackextra","propbackpackmain","propbackpackleft","propbackpackmain","propbackpackright","propbackpackmain","spine","pelvis","spine1","spine","proprifleunderarm","spine1","spine2","spine1","proprifleback","spine2","propvestleft","spine2","propvestright","spine2","propvestfront","spine2","propvestlower","propvestfront","spine3","spine2","propvestupper","spine3","propvestback","spine3","neck","spine3","neck1","neck","head","neck1","prophelmet","head","prophelmetvisor","prophelmet","propmouth","head","propmask","head","propglasses","head","prophelmetchin","head","propcamera1st","head","headcutscene","head","eyeleft","head","eyeright","head","face_browfrontleft","head","face_browfrontright","head","face_browmiddle","head","face_browsideleft","head","face_browsideright","head","face_cornerleft","head","face_cornerright","head","face_eyelidlowerleft","head","face_eyelidlowerright","head","face_eyelids","head","face_eyelidupperleft","head","face_eyelidupperright","head","face_forehead","head","face_cheekfrontleft","head","face_cheekfrontright","head","face_cheeksideleft","head","face_cheeksideright","head","face_cheekupperleft","head","face_cheekupperright","head","face_chin","head","face_chopleft","head","face_chopright","head","face_jawbone","head","face_jowl","head","face_liplowerleft","head","face_liplowermiddle","head","face_liplowerright","head","face_lipupperleft","head","face_lipuppermiddle","head","face_lipupperright","head","face_nostrilleft","head","face_nostrilright","head","face_tongue","head","beard","head","hair","head","leftshoulder","spine3","leftarm","leftshoulder","leftarmextra","leftarm","leftarmroll","leftarm","leftelbowextra","leftarmroll","leftforearm","leftarmroll","leftforearmextra","leftforearm","leftforearmroll","leftforearm","leftwristextra","leftforearmroll","lefthand","leftforearmroll","prophandl","lefthand","lefthandring","lefthand","lefthandring1","lefthandring","lefthandring2","lefthandring1","lefthandring3","lefthandring2","lefthandpinky1","lefthandring","lefthandpinky2","lefthandpinky1","lefthandpinky3","lefthandpinky2","lefthandmiddle1","lefthand","lefthandmiddle2","lefthandmiddle1","lefthandmiddle3","lefthandmiddle2","lefthandindex1","lefthand","lefthandindex2","lefthandindex1","lefthandindex3","lefthandindex2","lefthandthumb1","lefthand","lefthandthumb2","lefthandthumb1","lefthandthumb3","lefthandthumb2","rightshoulder","spine3","rightarm","rightshoulder","rightarmextra","rightarm","rightarmroll","rightarm","rightelbowextra","rightarmroll","rightforearm","rightarmroll","rightforearmextra","rightforearm","rightforearmroll","rightforearm","rightwristextra","rightforearmroll","righthand","rightforearmroll","prophandr","righthand","righthandring","righthand","righthandring1","righthandring","righthandring2","righthandring1","righthandring3","righthandring2","righthandpinky1","righthandring","righthandpinky2","righthandpinky1","righthandpinky3","righthandpinky2","righthandmiddle1","righthand","righthandmiddle2","righthandmiddle1","righthandmiddle3","righthandmiddle2","righthandindex1","righthand","righthandindex2","righthandindex1","righthandindex3","righthandindex2","righthandthumb1","righthand","righthandthumb2","righthandthumb1","righthandthumb3","righthandthumb2","leftupleg","pelvis","leftuplegroll","leftupleg","propthighleft","leftupleg","leftkneeextra","propthighleft","leftleg","propthighleft","leftlegroll","leftleg","leftfoot","leftlegroll","lefttoebase","leftfoot","rightupleg","pelvis","rightuplegroll","rightupleg","propthighright","rightupleg","rightkneeextra","propthighright","rightleg","propthighright","rightlegroll","rightleg","rightfoot","rightlegroll","righttoebase","rightfoot","camera","","righthand_dummy",""};
				BoneNames[] = {"pelvis","","launcher","pelvis","weapon","pelvis","propweaponbody","weapon","propweaponslide","propweaponbody","propweaponmag","propweaponbody","propweapon01","propweaponbody","propweapon02","propweaponbody","propweapon03","propweaponbody","propweapon04","propweaponbody","propweapon05","propweaponbody","propweapon06","propweaponbody","propweapon07","propweaponbody","propweapon08","propweaponbody","propweapon09","propweaponbody","propweapon10","propweaponbody","lefthipextra","pelvis","righthipextra","pelvis","propbeltleft","pelvis","propbeltright","pelvis","propbeltcenter","pelvis","turningaxis","pelvis","propbackpackmain","pelvis","propbackpacktop","propbackpackmain","propbackpackextra","propbackpackmain","propbackpackleft","propbackpackmain","propbackpackright","propbackpackmain","spine","pelvis","spine1","spine","proprifleunderarm","spine1","spine2","spine1","proprifleback","spine2","propvestleft","spine2","propvestright","spine2","propvestfront","spine2","propvestlower","propvestfront","spine3","spine2","propvestupper","spine3","propvestback","spine3","neck","spine3","neck1","neck","head","neck1","prophelmet","head","prophelmetvisor","prophelmet","propmouth","head","propmask","head","propglasses","head","prophelmetchin","head","propcamera1st","head","headcutscene","head","eyeleft","head","eyeright","head","face_browfrontleft","head","face_browfrontright","head","face_browmiddle","head","face_browsideleft","head","face_browsideright","head","face_cornerleft","head","face_cornerright","head","face_eyelidlowerleft","head","face_eyelidlowerright","head","face_eyelids","head","face_eyelidupperleft","head","face_eyelidupperright","head","face_forehead","head","face_cheekfrontleft","head","face_cheekfrontright","head","face_cheeksideleft","head","face_cheeksideright","head","face_cheekupperleft","head","face_cheekupperright","head","face_chin","head","face_chopleft","head","face_chopright","head","face_jawbone","head","face_jowl","head","face_liplowerleft","head","face_liplowermiddle","head","face_liplowerright","head","face_lipupperleft","head","face_lipuppermiddle","head","face_lipupperright","head","face_nostrilleft","head","face_nostrilright","head","face_tongue","head","beard","head","hair","head","leftshoulder","spine3","leftarm","leftshoulder","leftarmextra","leftarm","leftarmroll","leftarm","leftelbowextra","leftarmroll","leftforearm","leftarmroll","leftforearmextra","leftforearm","leftforearmroll","leftforearm","leftwristextra","leftforearmroll","lefthand","leftforearmroll","prophandl","lefthand","lefthandring","lefthand","lefthandring1","lefthandring","lefthandring2","lefthandring1","lefthandring3","lefthandring2","lefthandpinky1","lefthandring","lefthandpinky2","lefthandpinky1","lefthandpinky3","lefthandpinky2","lefthandmiddle1","lefthand","lefthandmiddle2","lefthandmiddle1","lefthandmiddle3","lefthandmiddle2","lefthandindex1","lefthand","lefthandindex2","lefthandindex1","lefthandindex3","lefthandindex2","lefthandthumb1","lefthand","lefthandthumb2","lefthandthumb1","lefthandthumb3","lefthandthumb2","rightshoulder","spine3","rightarm","rightshoulder","rightarmextra","rightarm","rightarmroll","rightarm","rightelbowextra","rightarmroll","rightforearm","rightarmroll","rightforearmextra","rightforearm","rightforearmroll","rightforearm","rightwristextra","rightforearmroll","righthand","rightforearmroll","prophandr","righthand","righthandring","righthand","righthandring1","righthandring","righthandring2","righthandring1","righthandring3","righthandring2","righthandpinky1","righthandring","righthandpinky2","righthandpinky1","righthandpinky3","righthandpinky2","righthandmiddle1","righthand","righthandmiddle2","righthandmiddle1","righthandmiddle3","righthandmiddle2","righthandindex1","righthand","righthandindex2","righthandindex1","righthandindex3","righthandindex2","righthandthumb1","righthand","righthandthumb2","righthandthumb1","righthandthumb3","righthandthumb2","leftupleg","pelvis","leftuplegroll","leftupleg","propthighleft","leftupleg","leftkneeextra","propthighleft","leftleg","propthighleft","leftlegroll","leftleg","leftfoot","leftlegroll","lefttoebase","leftfoot","rightupleg","pelvis","rightuplegroll","rightupleg","propthighright","rightupleg","rightkneeextra","propthighright","rightleg","propthighright","rightlegroll","rightleg","rightfoot","rightlegroll","righttoebase","rightfoot","camera","","righthand_dummy",""};
			};
		};
	};
};
class CfgSoundSets
{
	class FOG_NVG_ON_SoundSet
	{
        volumeFactor=1;
		soundShaders[]={"FOG_NVG_ON_SoundShader"};
	};
	class FOG_NVG_OFF_SoundSet
	{
        volumeFactor=1;
		soundShaders[]={"FOG_NVG_OFF_SoundShader"};
	};
};
class CfgSoundShaders
{
	class FOG_NVG_ON_SoundShader
	{
		samples[]=
		{
			
			{
				"FOG_MOD\Scripts\Data\SFX\inv_nv_start.ogg",
				0.125
			}
		};
		volume=1;
		range=10;
	};
	class FOG_NVG_OFF_SoundShader
	{
		samples[]=
		{
			
			{
				"FOG_MOD\Scripts\Data\SFX\inv_nv_off.ogg",
				0.125
			}
		};
		volume=1;
		range=10;
	};
};