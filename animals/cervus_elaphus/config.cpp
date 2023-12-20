class CfgPatches {
	class DZ_Animals_cervus_elaphus {
		units[] = {"Animal_CervusElaphus"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};

class CfgVehicles {
	class AnimalBase;
	class Animal_CervusElaphus: AnimalBase {
		class Skinning {
			class ObtainedSteaks {
				item = "DeerSteakMeat";
				count = 5;
				itemZones[] = {};
				countByZone[] = {};
				quantityMinMaxCoef[] = {0.33,0.8};
			};

			class ObtainedPelt {
				item = "DeerPelt";
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
				quantityMinMaxCoef[] = {0.2,0.5};
			};

			class ObtainedBones {
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.2,0.4};
				transferToolDamageCoef = 1;
			};

			class ObtainedHead {
				item = "DeerHead_m";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};

			class ObtainedBlood {
				item = "BloodDecal";
				count = 1;
			};

			class ObtainedBlood1 {
				item = "BloodDecal1";
				count = 1;
			};

			class ObtainedBlood2 {
				item = "BloodDecal2";
				count = 1;
			};
		};
	};
};
