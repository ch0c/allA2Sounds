/// ----
class smStructuredText {
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {0.812,0,0.498,1};
	class Attributes	{
		font = "Zeppelin32";
		color = "#cf007f";
		align = "center";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = 0.03921;
	shadow = 2;
};
class smPicture {
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class smEdit {
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,1};
	colorText[] = {0.95,0.95,0.95,1};
	colorSelection[] = {0.8784,0.8471,0.651,1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
};
class smListBox {
	type = 5;
	w = 0.4;
	h = 0.4;
	rowHeight = 0;
	colorText[] = {0.8784,0.8471,0.651,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0,0,0,1};
	colorSelectBackground2[] = {0.8784,0.8471,0.651,1};
	colorBackground[] = {0,0,0,1};
	soundSelect[] = {"",0.1,1};
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	class ScrollBar	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
	};
	style = 16;
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
	color[] = {1,1,1,1};
	period = 1.2;
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class smButton {
	type = 1;
	text = "";
	colorText[] = {1,1,1,0.9};
	colorDisabled[] = {1,1,1,0.03};
	colorBackground[] = {1,1,1,0.25	};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {1,1,1,0.25};
	colorFocused[] = {1,0.537,0,1};
	colorShadow[] = {0.023529,0,0.0313725,1};
	colorBorder[] = {0.023529,0,0.0313725,1};
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "Zeppelin32";
	sizeEx = 0.03921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
class smFrame {
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "Zeppelin32";
	sizeEx = 0.02;
	text = "";
};


/// ----

class bcSounds {
	idd = 3841;
	name= "bcSounds";
	onload = "uiNamespace setVariable ['bcSounds', _this select 0]; "; 
	onUnload = "uiNamespace setVariable ['bcSounds', null]; "; 
	class controlsBackground {
		class SND_MNUBG: smPicture {
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.8)";
			x = 0.303125 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.39375 * safezoneW;
			h = 0.735 * safezoneH;
		};
		class SND_MNULBBG: smPicture {
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.8)";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.1675 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.56 * safezoneH;
		};
		class SND_MNUFRAME: smFrame {
			idc = -1;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.1675 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.56 * safezoneH;
		};
		class SND_MNUTITLE: smStructuredText {
			idc = -1;
			text = "Arma 2 Sounds";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.1325 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.035 * safezoneH;
		};
	};

	class controls {
		class SND_MNULISTBOX: smListbox {
			idc = 9501;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.185 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.5425 * safezoneH;
			onMouseButtonDblClick = "local _sound=lbtext[9501,(lbCurSel 9501)]; playSound _sound;";
			onLBSelChanged = "local _sound=lbtext[9501,(lbCurSel 9501)]; local _dialog = uiNamespace getVariable 'bcSounds'; local _combo	= _dialog displayCtrl 9400; _combo ctrlSetText _sound; ";
		};
		
		class SND_MNUFNAME: smEdit {
			idc = 9400;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.745 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class SND_MNUPLAYBTN: smButton {
			idc = 9601;
			text = "Play Sound";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.7975 * safezoneH + safezoneY;
			w = 0.229687 * safezoneW;
			h = 0.035 * safezoneH;
			onButtonClick = "local _sound=lbtext[9501,(lbCurSel 9501)]; playSound _sound;";
		};
		class SND_MNUEXIT: smButton {
			idc = 9600;
			text = "Exit";
			x = 0.573828 * safezoneW + safezoneX;
			y = 0.7975 * safezoneH + safezoneY;
			w = 0.106641 * safezoneW;
			h = 0.035 * safezoneH;
			onButtonClick = "closeDialog 0;";
			};
			
		};
		
	};
	
	
