class CfgPatches {
	class DZ_Animals_capra_hircus_fem {
		units[] = {"Animal_CapraHircusF"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles {
	class AnimalBase;
	class Animal_CapraHircusF: AnimalBase {
		class Skinning {
			class ObtainedSteaks {
				item = "GoatSteakMeat";
				count = 4;
				itemZones[] = {};
				countByZone[] = {};
				quantityMinMaxCoef[] = {0.33,0.8};
			};

			class ObtainedPelt {
				item = "GoatPelt";
				count = 1;
				itemZones[] = {"Zone_Chest","Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			
			class ObtainedGuts {
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};

			class ObtainedLard {
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.3,0.6};
			};

			class ObtainedBones {
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.2,0.4};
				transferToolDamageCoef = 1;
			};
		};
	};
};
