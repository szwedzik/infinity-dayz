class CfgPatches {
	class DZ_Animals_canis_lupus {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};

class CfgVehicles {
	class AnimalBase;
	class Animal_CanisLupus: AnimalBase {
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=230;
					healthLevels[]= { {1,{}},{0.69999999,{}},{0.5,{}},{0.30000001,{}},{0,{}}};
				};
				class Blood {
					hitpoints=5000;
				};
				class Shock{
					hitpoints=100;
				};
			};
		};
		class Skinning {
			class ObtainedSteaks {
				item = "WolfSteakMeat";
				count = 4;
				itemZones[] = {};
				countByZone[] = {};
				quantityMinMaxCoef[] = {0.33,0.8};
			};

			class ObtainedPelt {
				item = "WolfPelt";
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
				quantityMinMaxCoef[] = {0.1,0.5};
			};

			class ObtainedBones {
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.2,0.4};
				transferToolDamageCoef = 1;
			};

			class ObtainedHead {
				item = "WolfHead";
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
