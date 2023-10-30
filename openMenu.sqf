////////////////////////////////////////
// Displays a menu with all arma sounds. 
// @ZzBombardierzZ & Choc
///////////////////////////////////////

if (!(isNull (findDisplay 3841))) exitwith  {closeDialog 0;};
	createDialog "bcSounds";
	local _display = uiNamespace getVariable "bcSounds"; 
	local _listbox	= _display displayCtrl 9501;
	lbClear _listbox;
	local _allSounds = configFile >> "CfgSounds";
	local _numSounds = (count _allSounds);
	for "_i" from 0 to _numSounds - 1 do {
		local _soundClass = _allSounds select _i;
		local _soundName = configName _soundClass;
	if !(_soundName=="") then {
		_listbox lbAdd _soundName;
		_listbox lbSetData [(lbSize _listbox) -1,_soundName];
		};		
	};
	lbSort _listbox;
};
