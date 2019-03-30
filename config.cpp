#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
    requiredAddons[] = {"fox_radio"};
	};
};

class fox_radio{
	stationList[]  +={ {"myRadioStation","My Radio Station" } };
	class stations{
		myRadioStation[] = {"mycfgsoundstrack1","mycfgsoundstrack1"};
};

class cfgSounds{
	#include "cfgSounds.hpp"
};
