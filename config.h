/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar 	               = 1;   /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy 		       = 1;   /* -F option; if 0, dmenu doesn't use fuzzy matching */
static int min_width 		       = 500; /* minimum width when centered */
static const unsigned int border_width = 0;   /* size of window border */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[]     = { "Fira Code:size=12" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     		 	  fg         bg       */
 	[SchemeNorm] =          { "#E7D7AD", "#363636" },
      	[SchemeSel] =           { "#af7fcd", "#363636" },
	[SchemeSelHighlight] =  { "#af7fcd", "#434343" },
	[SchemeNormHighlight] = { "#af7fcd", "#434343" },
        [SchemeOut] =           { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
