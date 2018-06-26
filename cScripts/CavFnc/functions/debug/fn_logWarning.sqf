/*
 * Author: CPL.Brostrom.A
 *  This function print debug information in the RPT log
 *
 * Arguments:
 * 0: Message <STRING>
 * 1: Forced <BOOL>
 *
 * Example:
 * ["Something is wrong here."] call cScripts_fnc_logWarning
 *
 */

#include "..\script_component.hpp"

params [
    "_message",
    ["_isForced",false]
];

if ((cScripts_Settings_setDebugMode) or (_isForced)) then {
    diag_log formatText ["[cScripts] WARNING: %1", _message];
};
