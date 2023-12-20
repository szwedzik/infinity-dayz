class CfgPatches {
    class InfinityGroups {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {            
            "DZ_Data",
        };
    };
};


class CfgVehicles {
    class Flag_Base;

    // OPASKI
    // FSA
	class IRP_Flag_Skazani: Flag_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"InfinityRP\assets\groups\skazani.paa"};
	};
	class IRP_Flag_westside: Flag_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"InfinityRP\assets\groups\westside.paa"};
	};
};