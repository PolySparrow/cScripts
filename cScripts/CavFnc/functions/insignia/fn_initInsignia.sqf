/*
 * Author: A.Brostrom
 * This script gives you the ability to select a squad patch.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Unit <UNIT>
 *
 * Example:
 * call cScripts_fnc_AddActionSquadInsignia;
 */

#include "..\script_component.hpp";

params ["_object"];

_object addAction ["Insignia Selection", {}];
_object addAction ["   <t color='#66ff66'>Remove Insignia</t>", {[player,""] call BIS_fnc_setUnitInsignia;}];
_object addAction ["   <img image='cScripts\Data\Insignia\1-1-C-17.paa' /> <t color='#66ff66'>Squad Insignia 1/1/C/1-7</t>", { [player,"11C_17_Insignia"] call BIS_fnc_setUnitInsignia;}];
//_object addAction ["   <img image='cScripts\Data\Insignia\2-1-C-17.paa' /> <t color='#66ff66'>Squad Insignia 2/1/C/1-7</t>", { [player,"21C_17_Insignia"] call BIS_fnc_setUnitInsignia;}];
//_object addAction ["   <img image='cScripts\Data\Insignia\3-1-C-17.paa' /> <t color='#66ff66'>Squad Insignia 3/1/C/1-7</t>", { [player,"31C_17_Insignia"] call BIS_fnc_setUnitInsignia;}];
//_object addAction ["   <img image='cScripts\Data\Insignia\4-1-C-17.paa' /> <t color='#66ff66'>Squad Insignia 4/1/C/1-7</t>", { [player,"41C_17_Insignia"] call BIS_fnc_setUnitInsignia;}];
_object addAction ["   <img image='cScripts\Data\Insignia\2-C-17.paa' /> <t color='#66ff66'>Platoon Insignia 2/C/1-7</t>", { [player,"2C_17_Insignia"] call BIS_fnc_setUnitInsignia;}];


// ACE Insignia Selection
private _Icon = "cScripts\Data\Icon\icon_00.paa";
private _insigniaMenu = ["cScriptInsignia", "Insignia", _Icon, {""}, {true}] call ace_interact_menu_fnc_createAction;
[_object, 0, ["ACE_MainActions"], _insigniaMenu] call ace_interact_menu_fnc_addActionToObject;

private _remove_Insignia = ["remove_Insignia", "Remove Insignia", "", {[player,""] call BIS_fnc_setUnitInsignia;}, {true}] call ace_interact_menu_fnc_createAction;
private _11C_17_Insignia = ["11C_17_Insignia", "Squad Insignia 1/1/C/1-7", "cScripts\Data\Insignia\1-1-C-17.paa", {[player,"11C_17_Insignia"] call BIS_fnc_setUnitInsignia;}, {true}] call ace_interact_menu_fnc_createAction;
//private _21C_17_Insignia = ["21C_17_Insignia", "Squad Insignia 2/1/C/1-7", _Icon, {[player,"21C_17_Insignia"] call BIS_fnc_setUnitInsignia;}, {true}] call ace_interact_menu_fnc_createAction;
//private _31C_17_Insignia = ["31C_17_Insignia", "Squad Insignia 3/1/C/1-7", _Icon, {[player,"31C_17_Insignia"] call BIS_fnc_setUnitInsignia;}, {true}] call ace_interact_menu_fnc_createAction;
//private _41C_17_Insignia = ["41C_17_Insignia", "Squad Insignia 4/1/C/1-7", _Icon, {[player,"41C_17_Insignia"] call BIS_fnc_setUnitInsignia;}, {true}] call ace_interact_menu_fnc_createAction;
private _2C_17_Insignia = ["2C_17_Insignia", "Platoon Insignia 2/C/1-7", "cScripts\Data\Insignia\2-C-17.paa", {[player,"2C_17_Insignia"] call BIS_fnc_setUnitInsignia;}, {true}] call ace_interact_menu_fnc_createAction;

[_object, 0, ["ACE_MainActions", "cScriptInsignia"], _remove_Insignia] call ace_interact_menu_fnc_addActionToObject;
[_object, 0, ["ACE_MainActions", "cScriptInsignia"], _11C_17_Insignia] call ace_interact_menu_fnc_addActionToObject;
//[_object, 0, ["ACE_MainActions", "cScriptInsignia"], _21C_17_Insignia] call ace_interact_menu_fnc_addActionToObject;
//[_object, 0, ["ACE_MainActions", "cScriptInsignia"], _31C_17_Insignia] call ace_interact_menu_fnc_addActionToObject;
//[_object, 0, ["ACE_MainActions", "cScriptInsignia"], _41C_17_Insignia] call ace_interact_menu_fnc_addActionToObject;
[_object, 0, ["ACE_MainActions", "cScriptInsignia"], _2C_17_Insignia] call ace_interact_menu_fnc_addActionToObject;