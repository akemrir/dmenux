/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static Bool topbar = 1;                     /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *font = "monospace:size=11";
static const char *prompt      = NULL;      /* -p  option; prompt to the elft of input field */
static const char *normbgcolor = "#2B2C2B"; /* -nb option; normal background                 */
static const char *normfgcolor = "#F9FAF9"; /* -nf option; normal foreground                 */
static const char *selbgcolor  = "#16A085"; /* -sb option; selected background               */
static const char *selfgcolor  = "#F9FAF9"; /* -sf option; selected foreground               */
static const char *dimcolor = "#000000"; 
static double opacity = 1.0, dimopacity = 0.0;


