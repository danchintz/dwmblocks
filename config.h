//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",   "recording", 	60000, 9},
	{"", "torrentstats",  1, 1},
	{"",	"pacpackages",	0,	8},
	{"",   "weather", 600, 2 },
	{"🎧", "pulsemixer --get-volume | awk '{print $1\"%\"}'",  0, 11 },
	{"📬", "mail", 	30, 12 },
	{"", "battery", 5, 3},
	{"", "vpnstatus", 30, 4},
	{"",   "date \"+%I:%M%P\"", 	1, 5 },

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:
//autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
