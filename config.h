/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;       /* -b  option; if 0, dmenu appears at bottom */
static int centered = 1;     /* -c option; centers dmenu on screen */
static int min_width = 1000; /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hurmit Nerd Font:style=Regular:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#deb88d", "#09141b" },
	[SchemeSel] = { "#09141b", "#fca02f" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 5;
static unsigned int columns = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
