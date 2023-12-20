class CfgPatches {
	class DZ_Animals_sus_scrofa {
		units[] = {"Animal_SusScrofa"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};

class CfgVehicles {
	class AnimalBase;
	class Animal_SusScrofa: AnimalBase {
		class Skinning {
			class ObtainedSteaks {
				item = "PigSteakMeat";
				count = 4;
				itemZones[] = {};
				countByZone[] = {};
				quantityMinMaxCoef[] = {0.33,0.8};
			};

			class ObtainedPelt {
				item = "PigPelt";
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
				quantityMinMaxCoef[] = {0.5,0.8};
			};

			class ObtainedBones {
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.2,0.4};
				transferToolDamageCoef = 1;
			};

			class ObtainedHead {
				item = "BoarHead";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};

			class ObtainedBlood {
				item = "BloodDecal3";
				count = 1;
			};
			
			class ObtainedBlood1 {
				item = "BloodDecal";
				count = 1;
			};

			class ObtainedBlood2 {
				item = "BloodDecal1";
				count = 1;
			};
		};
	};
};
