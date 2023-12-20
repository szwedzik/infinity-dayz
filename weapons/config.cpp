class CfgPatches {
  class Infinity_WeaponDurability {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "DZ_Data",
      "DZ_Weapons_Firearms",
      "DZ_Weapons_Ammunition",
      "DZ_Weapons_Magazines",
      "DZ_Weapons_Muzzles",
      "DZ_Weapons_Optics",
    };
  };
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Rifle_Base;
class Pistol_Base;
class Izh43Shotgun;

class cfgWeapons {
  // Pistols:
	class SNAFUAPS_Base: Pistol_Base{
    scope = 0;
    barrelArmor = 3;
  };
  class SNAFUMagnum500_Base: Pistol_Base{
    scope = 0;
    barrelArmor = 3;
  };
  class SN_Glock19_Base: Pistol_Base{
    scope = 0;
    barrelArmor = 3;
  };
  class SN_Mp443_Base: Pistol_Base{
    scope = 0;
    barrelArmor = 3;
  };
  class SNAFU_PL14HQP_Base: Pistol_Base{
    scope = 0;
    barrelArmor = 3;
  };
  class SN_Springfield_Base: Pistol_Base{
    scope = 0;
    barrelArmor = 3;
  };
  class SN_USP_Base: Pistol_Base{
    scope = 0;
    repairCosts[] = {30,25};
    barrelArmor = 3;
  };
  // revolver
  class SNAFUChiappaRhino_Base: Pistol_Base{
    scope = 0;
    barrelArmor = 2.4;
  };
  class SNAFUSWM629_Base: Pistol_Base{
    scope = 0;
    barrelArmor = 2.4;
  };
  // shotgun pistol
  class SNAFU_TP82S_Base: Izh43Shotgun{
    scope = 0;
    barrelArmor = 2.6;
  };
  // Rifles:
  class SNSA58_Base: Rifle_Base{
    scope = 0;
    barrelArmor = 5; // im wiecej tym lepiej
  };

  // SMGS:
  class SNAFU_MP9_Base: Rifle_Base{
    scope = 0;
    barrelArmor = 4;
  };

  class SNAFU_MPX_Base: Rifle_Base{
    scope = 0;
    barrelArmor = 4;
  };
  
  class GCGN_Vityaz_Base: Rifle_Base {
    scope = 0;
    barrelArmor = 4;
  };

  class SNAFUSten_Base: Rifle_Base{
    scope = 0;
    barrelArmor = 4;
  };

  class SNAFUUzi_Base: Rifle_Base{
    scope = 0;
    barrelArmor = 4;
  };

  class SNAFUKH9_Base: Rifle_Base{
    scope = 0;
    barrelArmor = 4;
  };
};