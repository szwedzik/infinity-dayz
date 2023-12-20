class CfgPatches {
    class InfinityRP {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data",
            "DZ_Gear_Consumables",
            "DZ_Structures_Residential",
            "DZ_Sounds_Effects",
            "DZ_Sounds_Weapons",
        };
    };
};

class CfgMods{
    class InfinityRP{
        dir = "InfinityRP";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "InfinityRP";
        credits = "Ezi";
        author = "Ezi";
        authorID = "";
        version = "1.0";
        extra = 0;
        type = "mod";
        dependencies[] = {"Game","Mission", "World"};
        class defs{
            class gameScriptModule{
                files[] = {"InfinityRP/scripts/3_Game"};
            };
             class worldScriptModule{
                files[] = {"InfinityRP/scripts/4_World"};
            };
            class missionScriptModule{
                files[] = {"InfinityRP/scripts/5_Mission"};
            };
        };
    };
};

// class CfgSoundSets {
// 	class FMusic_Menu_SoundSet {
// 		soundShaders[] = {"FMusic_Menu_SoundShader"};
// 		volumeFactor = 1;
// 		frequencyFactor = 1;
// 		spatial = 0;
// 	};
// };
// class CfgSoundShaders
// {
// 	class FMusic_Menu_SoundShader
// 	{
// 		samples[] = {{"\InfinityRP\mainmenu",1}};
// 		volume = 0.5;
// 	};
// };