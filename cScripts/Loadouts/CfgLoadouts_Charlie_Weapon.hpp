class Cav_B_Charlie_Weapons_base_F: Cav_B_Charlie_base_F {
    category[] += {"cScripts_Loadout_Cat_Charlie_Weapons"};
    role = "weapons";
};

class Cav_B_C_Weapons_SquadLeader_F: Cav_B_C_SquadLeader_F {
    displayName = "Weapons Squad Leader";
    scope = 2;
    loadout = [["rhs_weap_m4a1_blockII","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15","rhsusf_acc_ACOG_RMR",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",30],[],""],[],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_quikclot",10],["kat_chestSeal",2],["kat_guedel",1],["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_EarPlugs",1],["ACE_microDAGR",1],["ACE_CableTie",2],["ACE_splint",2],["ACE_IR_Strobe_Item",1],["ACE_SpraypaintRed",1],["kat_Painkiller",1,4],["ACE_Chemlight_IR",2,1]]],["USP_CRYE_JPC_TLB",[["ACE_EntrenchingTool",1],["USP_PVS15",1],["SmokeShell",4,1],["SmokeShellRed",2,1],["HandGrenade",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",11,30],["SmokeShellBlue",2,1],["SmokeShellPurple",1,1]]],["USP_TACTICAL_PACK",[["rhsusf_100Rnd_762x51_m62_tracer",1,100],["MRAWS_HEAT_F",1,1]]],"USP_OPSCORE_FASTMTC_CMSW","",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
};
class Cav_B_C_Weapons_M240B_FireTeamLeader_F: Cav_B_Charlie_Weapons_base_F {
    displayName = "Machine Gun Fireteam Leader ";
    scope = 2;
    loadout = [["rhs_weap_m4a1_blockII","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_RMR",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",30],[],""],[],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_quikclot",10],["kat_chestSeal",2],["kat_guedel",1],["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_CableTie",2],["ACE_splint",2],["ACE_IR_Strobe_Item",1],["ACE_SpraypaintRed",1],["kat_Painkiller",1,4],["ACE_Chemlight_IR",2,1]]],["USP_CRYE_CPC_COMMS_BELT_MC",[["ACE_EntrenchingTool",1],["SmokeShell",4,1],["HandGrenade",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",9,30],["SmokeShellBlue",2,1],["rhsusf_100Rnd_762x51_m62_tracer",2,100],["SmokeShellPurple",1,1]]],["USP_ZIPON_PANEL_CPC_MC",[["USP_PVS15",1],["rhsusf_100Rnd_762x51_m62_tracer",3,100]]],"USP_OPSCORE_FASTMTC_CMSW","",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];    
    icon = "iconManLeader";
};
class Cav_B_C_Weapons_M240B_Machinegunner_F: Cav_B_Charlie_Weapons_base_F {
    displayName = "Machine Gunner";
    scope = 2;
    loadout = [["rhs_weap_m240B","rhsusf_acc_ARDEC_M240","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_MDO",["rhsusf_100Rnd_762x51_m62_tracer",100],[],""],[],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_quikclot",10],["kat_chestSeal",2],["kat_guedel",1],["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_packingBandage",10],["ACE_splint",2],["USP_PVS15",1],["ACE_EarPlugs",1],["kat_Painkiller",1,4],["SmokeShell",1,1]]],["USP_CRYE_JPC_MGB",[["SmokeShell",1,1],["rhsusf_100Rnd_762x51_m62_tracer",6,100],["HandGrenade",2,1]]],["USP_HYDRATION_PACK_MC",[]],"USP_OPSCORE_FASTMTC_CW","",[],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
    icon = "iconManMG";
};

class Cav_B_C_Weapons_M240B_MachinegunnerAmmoBearer_F: Cav_B_Charlie_Weapons_base_F {
    displayName = "Machine Gun Assistant";
    scope = 2;
    loadout = [["rhs_weap_m4a1_blockII_KAC","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15","rhsusf_acc_ACOG_RMR_3d",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",30],[],""],["dzn_MG_Tripod_M122A1_M240Mount_Carry","","","",[],[],""],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_quikclot",10],["kat_chestSeal",2],["kat_guedel",1],["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_splint",2],["USP_PVS15",1],["kat_Painkiller",1,4],["ACE_Chemlight_IR",2,1],["SmokeShell",1,1]]],["USP_CRYE_CPC_FAST_BELT_MC",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",9,30],["HandGrenade",2,1],["rhsusf_100Rnd_762x51_m62_tracer",3,100]]],["USP_ZIPON_PANEL_CPC_SMK_MC",[["rhsusf_100Rnd_762x51_m62_tracer",2,100],["ACE_SpareBarrel",1,1]]],"USP_OPSCORE_FASTMTC_CW","",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
};

class Cav_B_C_Weapons_MAAWS_MAAWSGunner_F: Cav_B_Charlie_Weapons_base_F {
    displayName = "MAAWS Gunner";
    scope = 2;
    loadout = [["rhs_weap_m4a1_blockII_KAC","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15","rhsusf_acc_ACOG_RMR_3d",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",30],[],""],["launch_MRAWS_green_F","","","",["MRAWS_HEAT_F",1],[],""],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_quikclot",10],["kat_chestSeal",2],["kat_guedel",1],["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_splint",2],["USP_PVS15",1],["kat_Painkiller",1,4],["ACE_Chemlight_IR",2,1]]],["USP_CRYE_CPC_LIGHT_MC",[["SmokeShell",4,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",9,30],["HandGrenade",2,1]]],["USP_PACK_HYDRATION",[["MRAWS_HEAT_F",1,1]]],"USP_OPSCORE_FASTMTC_CW","",[],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
    icon = "iconManAT";
};

class Cav_B_C_Weapons_MAAWS_MAAWSAssistant_F: Cav_B_Charlie_Weapons_base_F {
    displayName = "MAAWS Assistant";
    scope = 2;
    loadout = [["rhs_weap_m4a1_blockII_KAC","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15","rhsusf_acc_ACOG_RMR_3d",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",30],[],""],[],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_packingBandage",11],["kat_chestSeal",2],["kat_guedel",1],["ACE_EarPlugs",1],["ACE_splint",2],["kat_Painkiller",1,4]]],["USP_CRYE_CPC_LEAD_BELT_MC",[["ACE_EntrenchingTool",1],["USP_PVS15",1],["SmokeShell",4,1],["ACE_Chemlight_IR",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",9,30],["HandGrenade",2,1],["SmokeShellBlue",1,1]]],["USP_REEBOW_3DAP_MC",[["MRAWS_HEAT_F",2,1],["MRAWS_HE_F",2,1]]],"USP_OPSCORE_FASTMTC_CTW","",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
};

class Cav_B_C_Weapons_Mortar_FireTeamLeader_F: Cav_B_Charlie_Weapons_base_F {
    displayName = "Mortar Team Leader";
    scope = 2;
    loadout = [["rhs_weap_m4a1_blockII","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15","rhsusf_acc_ACOG_RMR",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",30],[],""],[],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_PlottingBoard",1],["ACE_microDAGR",1],["ACE_packingBandage",14],["kat_chestSeal",2],["kat_guedel",1],["ACE_EarPlugs",1],["ACE_artilleryTable",1],["ACE_IR_Strobe_Item",1],["ACE_splint",2],["USP_PVS15",1],["kat_Painkiller",1,4],["ACE_Chemlight_IR",2,1]]],["USP_CRYE_CPC_COMMS_BELT_MC",[["ACE_EntrenchingTool",1],["SmokeShell",4,1],["HandGrenade",2,1],["SmokeShellBlue",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",9,30],["SmokeShellPurple",1,1]]],["USP_REEBOW_3DAP_MC",[["NDS_M_6Rnd_60mm_HE_0",1,6],["NDS_M_6Rnd_60mm_SMOKE",1,6],["NDS_M_6Rnd_60mm_HE",1,6]]],"USP_OPSCORE_FASTMTC_CW","",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
};
class Cav_B_C_Weapons_Mortar_M224_F: Cav_B_Charlie_Weapons_base_F {
    displayName = "Mortar Gunner";
    scope = 2;
    loadout = [["rhs_weap_m4a1_blockII_KAC","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15","rhsusf_acc_ACOG_RMR_3d",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",30],[],""],[],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_quikclot",10],["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_PlottingBoard",1],["ACE_EarPlugs",1],["ACE_microDAGR",1],["ACE_packingBandage",10],["kat_chestSeal",2],["kat_guedel",1],["ACE_splint",2],["kat_Painkiller",1,4],["ACE_Chemlight_IR",2,1]]],["USP_CRYE_CPC_WEAPON_BELT_MC",[["USP_PVS15",1],["SmokeShell",4,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",9,30],["HandGrenade",2,1]]],["NDS_B_M224_mortar",[]],"USP_OPSCORE_FASTMTC_CW","",[],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
    icon = "iconStaticMortar";
};
class Cav_B_C_Weapons_Mortar_Assistant_F: Cav_B_Charlie_Weapons_base_F {
    displayName = "Mortar Assistant";
    scope = 2;
    loadout = [["rhs_weap_m4a1_blockII_KAC","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15","rhsusf_acc_ACOG_RMR_3d",["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",30],[],""],[],[],["USP_G3C_RS2_KP_OR_MC",[["ACE_quikclot",10],["ACE_tourniquet",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_PlottingBoard",1],["ACE_microDAGR",1],["ACE_packingBandage",10],["kat_chestSeal",2],["kat_guedel",1],["ACE_EarPlugs",1],["ACE_splint",2],["kat_Painkiller",1,4]]],["USP_CRYE_CPC_FAST_BELT_MC",[["ACE_artilleryTable",1],["ACE_EntrenchingTool",1],["USP_PVS15",1],["SmokeShell",4,1],["ACE_Chemlight_IR",2,1],["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",9,30],["HandGrenade",2,1],["NDS_M_6Rnd_60mm_HE",1,6]]],["USP_REEBOW_3DAP_MC",[["NDS_M_6Rnd_60mm_HE",2,6],["NDS_M_6Rnd_60mm_HE_0",1,6]]],"USP_OPSCORE_FASTMTC_CGW","",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","","ItemCompass","ACE_Altimeter",""]];
};

// Named
class Cav_B_C_Weapons_SquadLeader_1_4_F: Cav_B_C_Weapons_SquadLeader_F { scope = 1; };
class Cav_B_C_Weapons_SquadLeader_2_4_F: Cav_B_C_Weapons_SquadLeader_F { scope = 1; };

class Cav_B_C_Weapons_Alpha_FireTeamLeader_F: Cav_B_C_Weapons_M240B_FireTeamLeader_F { scope = 1; };
class Cav_B_C_Weapons_Alpha_Trooper_2_F: Cav_B_C_Weapons_M240B_Machinegunner_F { scope = 1; };
class Cav_B_C_Weapons_Alpha_Trooper_3_F: Cav_B_C_Weapons_M240B_MachinegunnerAmmoBearer_F { scope = 1; };
class Cav_B_C_Weapons_Alpha_Trooper_4_F: Cav_B_C_Weapons_MAAWS_MAAWSGunner_F { scope = 1; };

class Cav_B_C_Weapons_Bravo_FireTeamLeader_F: Cav_B_C_Weapons_M240B_FireTeamLeader_F { scope = 1; };
class Cav_B_C_Weapons_Bravo_Trooper_2_F: Cav_B_C_Weapons_M240B_Machinegunner_F { scope = 1; };
class Cav_B_C_Weapons_Bravo_Trooper_3_F: Cav_B_C_Weapons_M240B_MachinegunnerAmmoBearer_F { scope = 1; };
class Cav_B_C_Weapons_Bravo_Trooper_4_F: Cav_B_C_Weapons_MAAWS_MAAWSGunner_F { scope = 1; };
