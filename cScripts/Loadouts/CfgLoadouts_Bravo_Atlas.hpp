class Cav_B_Bravo_Atlas_base_F: Cav_B_Bravo_base_F {
    platoon = 1;
    scope = 0;
    category[] += {"cScripts_Loadout_Cat_Bravo_Atlas"};
    insignia = "cav_insignia_Specialized_Medic0";
    abilityMedic = 2;
    
    role = "doctor";
    icon = "iconManMedic";
};

class Cav_B_B_Atlas_Medic_TeamLeader_F: Cav_B_Bravo_Atlas_base_F {
    displayName = "Team Leader";
    scope = 2;
    loadout = [["rhs_weap_mk18_KAC_bk","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",30],[],""],[],[],["USP_G3C_RS2_KP_OR_VQ_MC",[["ACE_surgicalKit",1],["ACE_tourniquet",8],["kat_Pulseoximeter",2],["ACE_CableTie",2],["ACE_MapTools",1],["ACE_IR_Strobe_Item",2],["ACE_Chemlight_Shield",1],["USP_PVS15",1],["kat_Carbonate",1,10],["kat_Painkiller",2,4],["ACE_Chemlight_White",1,1]]],["USP_CRYE_CPC_MEDIC_BELT_MC",[["kat_IO_FAST",10],["kat_naloxone",4],["kat_norepinephrine",8],["kat_phenylephrine",10],["ACE_packingBandage",10],["ACE_elasticBandage",30],["kat_IV_16",15],["kat_stethoscope",1],["ACE_microDAGR",1],["kat_nitroglycerin",10],["kat_chestSeal",5],["kat_fentanyl",2],["kat_ketamine",5],["kat_nalbuphine",10],["kat_TXA",4],["kat_lidocaine",5],["kat_EACA",2],["kat_atropine",5],["kat_amiodarone",5],["ACE_splint",4],["ACE_adenosine",1],["kat_phenylephrineAuto",2],["kat_epinephrineIV",8],["kat_ultrasound",1],["kat_BVM",1],["kat_aatKit",5],["SmokeShellBlue",2,1],["SmokeShellPurple",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",5,30],["SmokeShell",5,1],["kat_Penthrox",1,10]]],["USP_TACTICAL_PACK",[["kat_AED",1],["ACE_plasmaIV_500",5],["kat_larynx",10],["kat_accuvac",1],["ACE_bloodIV",4],["ACE_bloodIV_500",7],["ACE_salineIV_500",2]]],"USP_OPSCORE_FASTMTC_CMTW","USP_MFRAME_BLK2",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
    };

class Cav_B_B_Atlas_Medic_CombatMedic_F: Cav_B_B_Atlas_Medic_TeamLeader_F {
    displayName = "Team Member";
    scope = 2;
    loadout = [["rhs_weap_mk18_KAC_bk","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",30],[],""],[],[],["USP_G3C_RS2_KP_OR_VQ_MC",[["ACE_surgicalKit",1],["ACE_tourniquet",8],["kat_Pulseoximeter",2],["ACE_CableTie",2],["ACE_MapTools",1],["ACE_EarPlugs",1],["ACE_Chemlight_Shield",1],["USP_PVS15",1],["ACE_IR_Strobe_Item",1],["kat_Carbonate",1,10],["kat_Painkiller",2,4],["ACE_Chemlight_White",1,1]]],["USP_CRYE_CPC_MEDIC_BELT_MC",[["kat_IO_FAST",10],["kat_naloxone",4],["kat_norepinephrine",8],["kat_phenylephrine",10],["ACE_packingBandage",10],["ACE_elasticBandage",30],["kat_IV_16",20],["kat_stethoscope",1],["kat_nitroglycerin",10],["kat_chestSeal",5],["kat_fentanyl",2],["kat_ketamine",5],["kat_nalbuphine",8],["kat_amiodarone",3],["kat_atropine",2],["kat_EACA",2],["kat_TXA",4],["ACE_splint",4],["ACE_EntrenchingTool",1],["kat_reboa",1],["kat_ultrasound",1],["kat_phenylephrineAuto",2],["kat_BVM",1],["kat_epinephrineIV",8],["ACE_microDAGR",1],["ACE_adenosine",8],["SmokeShellBlue",2,1],["SmokeShellPurple",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",5,30],["SmokeShell",5,1],["kat_Penthrox",1,10]]],["USP_DELTA_BAG_MC",[["kat_larynx",10],["kat_lidocaine",5],["ACE_salineIV_250",2],["kat_aatKit",5],["ACE_plasmaIV_500",6],["kat_accuvac",1],["ACE_bloodIV",4],["ACE_salineIV_500",2],["ACE_bloodIV_500",8],["ACE_bloodIV_250",2],["ACE_plasmaIV_250",2]]],"USP_OPSCORE_FASTMTC_CMTW","USP_MFRAME_BLK2",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
    };

class Cav_B_B_Atlas_Medic_CRNA_F: Cav_B_B_Atlas_Medic_TeamLeader_F {
    displayName = "CRNA";
    scope = 2;
    loadout = [["rhs_weap_mk18_KAC_bk","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",30],[],""],[],[],["USP_G3C_RS2_KP_OR_VQ_MC",[["ACE_surgicalKit",1],["ACE_tourniquet",8],["kat_Pulseoximeter",2],["ACE_CableTie",2],["ACE_MapTools",1],["ACE_EarPlugs",1],["ACE_Chemlight_Shield",1],["ACE_IR_Strobe_Item",1],["USP_PVS15",1],["kat_Carbonate",1,10],["kat_Painkiller",2,4],["ACE_Chemlight_White",1,1]]],["USP_CRYE_CPC_MEDIC_BELT_MC",[["kat_IO_FAST",5],["kat_naloxone",4],["kat_norepinephrine",6],["kat_phenylephrine",10],["ACE_packingBandage",10],["ACE_elasticBandage",20],["kat_IV_16",15],["kat_nitroglycerin",10],["kat_chestSeal",5],["kat_fentanyl",2],["kat_ketamine",5],["kat_nalbuphine",8],["kat_amiodarone",5],["kat_atropine",1],["kat_EACA",2],["kat_TXA",4],["ACE_splint",4],["kat_ultrasound",1],["ACE_adenosine",5],["kat_phenylephrineAuto",2],["ACE_microDAGR",1],["kat_epinephrineIV",8],["kat_stethoscope",1],["kat_BVM",1],["SmokeShellBlue",2,1],["SmokeShellPurple",1,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",5,30],["SmokeShell",5,1],["kat_Penthrox",1,10]]],["USP_DELTA_BAG_MC",[["kat_larynx",10],["kat_lidocaine",10],["ACE_salineIV_250",2],["kat_aatKit",3],["ACE_plasmaIV_500",5],["kat_accuvac",1],["kat_X_AED",1],["kat_etomidate",12],["kat_flumazenil",6],["kat_lorazepam",6],["ACE_bloodIV",4],["ACE_bloodIV_500",7],["ACE_salineIV_500",2]]],"USP_OPSCORE_FASTMTC_CMTW","USP_MFRAME_BLK2",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
    };

class Cav_B_B_Atlas_Medic_Surgeon_F_Local: Cav_B_B_Atlas_Medic_TeamLeader_F {
    displayName = "Surgeon";
    scope = 2;
    loadout = [["rhs_weap_mk18_KAC_bk","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",30],[],""],[],[],["USP_G3C_RS2_KP_OR_VQ_MC",[["ACE_surgicalKit",1],["ACE_tourniquet",8],["kat_Pulseoximeter",2],["ACE_CableTie",2],["ACE_MapTools",1],["ACE_EarPlugs",1],["ACE_Chemlight_Shield",1],["USP_PVS15",1],["ACE_IR_Strobe_Item",1],["kat_Carbonate",1,10],["kat_Painkiller",2,4],["ACE_Chemlight_White",1,1]]],["USP_CRYE_CPC_MEDIC_BELT_MC",[["kat_IO_FAST",5],["kat_naloxone",3],["kat_norepinephrine",4],["kat_phenylephrine",8],["ACE_packingBandage",5],["ACE_elasticBandage",25],["kat_IV_16",15],["kat_stethoscope",1],["ACE_microDAGR",1],["kat_nitroglycerin",6],["kat_chestSeal",5],["kat_fentanyl",2],["kat_ketamine",4],["kat_nalbuphine",8],["kat_amiodarone",5],["kat_atropine",2],["kat_EACA",2],["kat_TXA",4],["kat_BVM",1],["ACE_splint",4],["kat_phenylephrineAuto",2],["kat_ultrasound",1],["ACE_EntrenchingTool",1],["kat_epinephrineIV",8],["ACE_adenosine",8],["SmokeShellBlue",2,1],["SmokeShellPurple",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",5,30],["SmokeShell",5,1],["kat_Penthrox",1,10]]],["USP_DELTA_BAG_MC",[["kat_vacuum",1],["kat_etomidate",14],["kat_flumazenil",6],["kat_larynx",10],["kat_lorazepam",6],["ACE_plasmaIV_500",5],["ACE_salineIV_250",6],["kat_scalpel",30],["kat_accuvac",1],["kat_reboa",10],["kat_aatKit",5],["kat_plate",10],["kat_clamp",1],["kat_retractor",1],["ACE_bloodIV",4],["ACE_bloodIV_500",7],["kat_lidocaine",10]]],"USP_OPSCORE_FASTMTC_CMTW","USP_MFRAME_BLK2",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
    };

// Named
class Cav_B_B_Atlas_Medic_TeamLeader_3_1_F: Cav_B_B_Atlas_Medic_TeamLeader_F { scope = 1; };
class Cav_B_B_Atlas_Medic_TeamLeader_3_2_F: Cav_B_B_Atlas_Medic_TeamLeader_F { scope = 1; };


