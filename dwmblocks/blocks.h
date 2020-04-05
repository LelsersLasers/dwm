//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
	{" Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	1,		0},

	{"", "~/dwmBar/pacupdate",						0,		9},

	{"Vol: ", "~/dwmBar/volume",						1,		10},

	//{"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
	
	//{"", "~/dwmBar/battery",						5,		0},

	//{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	{"", "~/dwmBar/clock",							1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
