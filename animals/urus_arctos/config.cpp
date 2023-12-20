class CfgPatches
{
	class DZ_Animals_ursus_arctos
	{
		units[] = {"Animal_UrsusArctos_Infinity"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals","DZ_Data_Bliss","DZ_AI_Bliss","DZ_Weapons_Melee"};
	};
};

class CfgVehicles
{
    class AnimalBase;
	class Animal_UrsusArctos: AnimalBase {};
	class Animal_UrsusArctos_Infinity: Animal_UrsusArctos {
		scope = 2;
		armor = 1.2;
		injuryLevels[] = {1.0,0.5,0.2,0.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 5000;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 3500;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 5000;
					};
					class Shock: Health
					{
						hitpoints = 5000;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.51;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.25;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
						class Projectile: Projectile
						{
							class Health: Health
							{
								damage = 0.25;
							};
						};
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 500;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 800;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 400;
						transferToGlobalCoef = 0.0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "BearPelt";
				count = 1;
				itemZones[] = {"Zone_Pelvis","Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 8;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {};
				quantityMinMaxCoef[] = {0.33,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 3;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.2,0.4};
				transferToolDamageCoef = 1;
			};
			class ObtainedHead
			{
				item = "BearHead";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedBlood
			{
				item = "BloodDecal2";
				count = 1;
			};
			class ObtainedBlood1
			{
				item = "BloodDecal3";
				count = 1;
			};
			class ObtainedBlood2
			{
				item = "BloodDecal4";
				count = 1;
			};
			class ObtainedBlood3
			{
				item = "BloodDecal1";
				count = 1;
			};
		};
	};
};