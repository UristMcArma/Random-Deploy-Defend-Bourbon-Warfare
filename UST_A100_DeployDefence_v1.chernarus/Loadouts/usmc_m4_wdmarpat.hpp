// Author: BWMF
// Description: US: M4 - Tan

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "rhs_weap_m4_carryhandle"
#define RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red:2"
#define RIFLE_ATTACHMENTS "rhsusf_acc_compm4","rhsusf_acc_anpeq15A"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "optic_Aco","rhsusf_acc_eotech_xps3"
// GL Rifle
#define GLRIFLE "rhs_weap_m4_m203S"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
// Carbine
#define CARBINE "rhs_weap_m4_carryhandle"
#define CARBINE_MAG RIFLE_MAG
// IAR
#define IAR "rhs_weap_m27iar"
#define IAR_MAG "hlc_50rnd_556x45_EPR:8"
// AR
#define AR "CUP_lmg_m249_para"
#define AR_MAG "rhsusf_100Rnd_556x45_soft_pouch:4"
// AT
#define AT "rhs_weap_M136"
// FTL AT
#define FTL_AT "rhs_weap_m72a7"
//MORTAR
#define MORTAR "potato_vz99_carryWeapon"
#define MORTAR_MAG "potato_vz99_HE_multi:9"
//HMG
#define HMG "RHS_M2_Gun_Bag"
#define HMG_ASS "RHS_M2_MiniTripod_Bag"
// MMG
#define MMG "rhs_weap_m240G"
#define MMG_MAG "rhsusf_100Rnd_762x51:5"
// MAT
#define MAT "CUP_launch_Mk153Mod0"
#define MAT_MAG "CUP_SMAW_HEAA_M:3"
#define MAT_MAG2 "CUP_SMAW_HEAA_M:2","CUP_SMAW_HEDP_M"
#define MAT_OPTIC "CUP_optic_SMAW_Scope"
// SAM
#define SAM "rhs_weap_fim92"
#define SAM_MAG "rhs_fim92_mag:3"
#define SAM_MAG2 "rhs_fim92_mag:2"
// Sniper Rifle
#define SNIPER "rhs_weap_m24sws_blk"
#define SNIPER_MAG "rhsusf_5Rnd_762x51_m118_special_Mag:10"
// Spotter Rifle
#define SPOTTER "rhs_weap_m4a1_carryhandle"
#define SPOTTER_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:5"
// SMG
#define SMG "CUP_smg_MP5A5"
#define SMG_MAG "CUP_30Rnd_9x19_MP5:6"
// Pistol
#define PISTOL "rhsusf_weap_m9"
#define PISTOL_MAG "rhsusf_mag_15Rnd_9x19_JHP:3"
// Grenades
#define BASE_FRAG "rhs_mag_m67:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY_WEST
#define BASE_LINKED COMMON_LINKED
#define LEADER_LINKED COMMON_LEADER_LINKED

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class Soldier_F {// rifleman
  uniform[] = {"rhs_uniform_FROG01_wd"};
  vest[] = {"rhsusf_spc_light"};
  headgear[] = {"rhsusf_mich_helmet_marpatwd","rhsusf_mich_helmet_marpatwd_alt"};
  backpack[] = {"rhsusf_falconii_coy"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: Soldier_F {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class Soldier_TL_F: Soldier_F {// FTL
  vest[] = {"rhsusf_spc_teamleader"};
  weapons[] = {GLRIFLE};
  headgear[] = {"rhsusf_mich_helmet_marpatwd_headset","rhsusf_mich_helmet_marpatwd_alt_headset"};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  launchers[] = {FTL_AT};
};
class Soldier_SL_F: Soldier_TL_F {// SL
  headgear[] = {"rhsusf_mich_helmet_marpatwd_headset","rhsusf_mich_helmet_marpatwd_alt_headset"};
  vest[] = {"rhsusf_spc_squadleader"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};  
  launchers[] = {""};
};
class officer_F: Soldier_SL_F {// CO and DC
headgear[] = {"rhs_8point_marpatwd"};
  items[] += {RADIO_LR};
};
class soldier_UAV_F: Soldier_F {
  backpack[] = {"B_UAV_01_backpack_F"};
  linkedItems[] += {"B_uavterminal"};
};
class Soldier_PG_F: Soldier_F {// IAR
  vest[] = {"rhsusf_spc_iar"};
  weapons[] = {IAR};
  magazines[] = {IAR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class Soldier_RangeMaster_F: Soldier_F {// IAR AAR
  backpackItems[] += {IAR_MAG};
  attachments[] = {AAR_ATTACHMENTS};
  linkedItems[] += {BINOS};
};
class Soldier_AR_F: Soldier_F {// AR
  vest[] = {"rhsusf_spc_mg"};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class Soldier_AAR_F: Soldier_F {// AAR
  backpackItems[] += {AR_MAG};
  attachments[] = {AAR_ATTACHMENTS};
  linkedItems[] += {BINOS};
};
class Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
  launchers[] = {AT};
};
class medic_F: Fic_Soldier_Carbine {// Medic
  vest[] = {"rhsusf_spc_corpsman"};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: Soldier_F {
  linkedItems[] += {RANGE_FINDER};
};
class support_MG_F: Soldier_AR_F {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Kitbag_cbr"};
  backpackItems[] += {MMG_MAG};
};
class soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("B_Carryall_cbr", SAM_MAG)
  launchers[] = {SAM};
};
class Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_cbr", SAM_MAG2)
};
class support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {MORTAR_MAG};
  launchers[] = {MORTAR};
};
class support_AMort_F: Fic_Spotter {// Assistant Mortar
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {MORTAR_MAG};
};
class spotter_F: Fic_Spotter {// Spotter
  vest[] = {"rhsusf_spc_marksman"};
  headgear[] = {"rhs_booniehat2_marpatwd"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
};
class sniper_F: spotter_F {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS,"ACE_RangeCard"};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {"rhsusf_acc_LEUPOLDMK4_2","rhsusf_acc_anpeq15A"};
};
class Helipilot_F {// Pilot
  uniform[] = {"U_B_HeliPilotCoveralls"};
  backpack[] = {"B_FieldPack_oli"};
  vest[] = {"CUP_V_B_PilotVest"};
  headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class helicrew_F: Helipilot_F {}; // Pilot
  uniform[] = {"U_B_HeliPilotCoveralls"};
  backpack[] = {"B_FieldPack_oli"};
  vest[] = {"CUP_V_B_PilotVest"};
  headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
  
class crew_F: Fic_Soldier_Carbine {// Crew
  uniform[] = {"rhs_uniform_FROG01_wd"};
  backpack[] = {"B_Carryall_cbr"};
  vest[] = {"rhsusf_spc_crewman"};
  headgear[] = {"rhsusf_mich_helmet_marpatwd_alt"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class soldier_repair_F: crew_F {// Repair Specialist
  uniform[] = {"rhs_uniform_FROG01_wd"};
  headgear[] = {"rhsusf_mich_helmet_marpatwd_alt"};
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
  vest[] = {"rhsusf_spc_crewman"};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class Fic_eng: soldier_repair_F {
  headgear[] = {"rhsusf_mich_helmet_marpatwd","rhsusf_mich_helmet_marpatwd_alt"};
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class soldier_exp_F: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class engineer_F: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
};
class fallback: Soldier_F {}; // This means any faction member who doesn't match something will use this loadout
