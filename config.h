//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"⌨", "sb-kbselect", 0, 30},
	// {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	// {"",	"sb-tasks",	10,	26},
	// {"",	"sb-music",	0,	11},
	/* {"",	"sb-price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"sb-price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"sb-moonphase",	        18000,	17}, */
	// {"",	"sb-mailbox",	        180,	12},
	// {"",	"sb-torrent",	20,	7},
	// {"",	"sb-help-icon",	        0,	15},
	// {"",	"sb-price btc Bitcoin 💰",				9000,	21},
	// {"",	"sb-forecast",	        18000,	5},
	// {"",	"sb-nettraf",	        2,	16},
    // {"",	"sb-price btc Bitcoin 💰 21",			9000,	21},
	{"",	"sb-pacpackages",	    24400,	8},
	{"",	"sb-todo",	            200,	11},
	{"",	"sb-news",		        0,	6},
	{"",	"sb-memory",	        10,	14},
	{"",	"sb-disk",	            60,	5},
	{"",	"sb-cpu",		        3,	18},
	{"",	"sb-battery",	        5,	3},
	{"",	"sb-eta",	            0,	2},
	{"",	"sb-volume",	        0,	10},
	{"",	"sb-clock",	            60,	1},
	{"",	"sb-internet",	        5,	4},
	{"",	"sb-menu",	            0,	9},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
