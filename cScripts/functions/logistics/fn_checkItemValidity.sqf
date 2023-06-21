#include "..\script_component.hpp";
/*
 * Author: Whitsel.M
 * This function checks if a item are usable and valid.
 *
 * Arguments:
 * 0: Item <OBJECT>
 *
 * Return Value:
 * True if item is valid
 *
 * Example:
 * ["ACE_EarPlugs"] call cScripts_fnc_checkItemValidity;
 */

params [
    ["_item", "", ["", objNull]]
];

private _return = true;

if EGVAR(patches,usesACE) then {
    if (_item isKindOf "ACE_EarPlugs") then {
        _return = if (!isNil {ace_hearing_disableEarRinging}) then {ace_hearing_disableEarRinging} else {false};
    };
    if (_item isKindOf "ACE_ropeBase") then {
        _return = if (!isNil {ace_fastroping_requireRopeItems}) then {ace_fastroping_requireRopeItems} else {false};
    };
    if (_item isKindOf "ACE_WaterBottle" || _item isKindOf "ACE_Canteen" || _item isKindOf "ACE_Can_Spirit" || _item isKindOf "ACE_MRE_LambCurry") then {
        _return = if (!isNil {acex_field_rations_enabled}) then {acex_field_rations_enabled} else {false};
    };
};

_return
