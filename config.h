/* See LICENSE file for copyright and license details. */
/* USG Engineering Theme — phosphor-green on near-black */
/* Matches DWM color scheme exactly                     */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"BerkeleyMono-Regular:size=13"
};

static const char *prompt = NULL;           /* -p  option; prompt to the left of input field */

/* USG Engineering Palette — mirrors dwm config.h exactly */
static const char *colors[SchemeLast][2] = {
	/*                fg          bg        */
	[SchemeNorm] = { "#c8cfc4", "#0e0e0e" }, /* warm off-white on near-black                */
	[SchemeSel]  = { "#6db36d", "#0a150a" }, /* phosphor green on lifted black — selected   */
	[SchemeOut]  = { "#c8a84a", "#0e0e0e" }, /* amber — for out/marked items                */
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
