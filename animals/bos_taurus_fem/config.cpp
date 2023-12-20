class CfgPatches {
	class DZ_Animals_bos_taurus_fem {
		units[] = {"Animal_BosTaurusF"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};

class CfgVehicles {
	class AnimalBase;
	class Animal_BosTaurusF: AnimalBase {
		class Skinning {
			class ObtainedSteaks {
				item = "CowSteakMeat";
				count = 5;
				itemZones[] = {};
				countByZone[] = {};
				quantityMinMaxCoef[] = {0.33,0.8};
			};

			class ObtainedPelt {
				item = "CowPelt";
				count = 1;
				itemZones[] = {"Zone_Chest","Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};

			class ObtainedGuts {
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,0.8};
			};

			class ObtainedLard {
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.5,1};
			};

			class ObtainedBones {
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.2,0.4};
				transferToolDamageCoef = 1;
			};
		};
	};
};
