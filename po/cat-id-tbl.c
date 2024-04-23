/* Automatically generated by po2tbl.sed from nano.pot.  */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include "libgettext.h"

const struct _msg_ent _msg_tbl[] = {
  {"", 1},
  {"add_to_cutbuffer called with inptr->data = %s\n", 2},
  {"Blew away cutbuffer =)\n", 3},
  {"read_line: not on first line and prev is NULL", 4},
  {"Read %d lines", 5},
  {"\"%s\" not found", 6},
  {"New File", 7},
  {"File \"%s\" is a directory", 8},
  {"File \"%s\" is a device file", 9},
  {"Reading File", 10},
  {"File to insert [from ./] ", 11},
  {"Cancelled", 12},
  {"Could not open file for writing: %s", 13},
  {"Wrote >%s\n", 14},
  {"Could not close %s: %s", 15},
  {"Could not open %s for writing: %s", 16},
  {"Could not set permissions %o on %s: %s", 17},
  {"Wrote %d lines", 18},
  {"File Name to write", 19},
  {"filename is %s", 20},
  {"File exists, OVERWRITE ?", 21},
  {"(more)", 22},
  {"Can't move up a directory", 23},
  {"Can't open \"%s\": %s", 24},
  {"Constant cursor position", 25},
  {"Auto indent", 26},
  {"Suspend", 27},
  {"Help mode", 28},
  {"Pico mode", 29},
  {"Mouse support", 30},
  {"Cut to end", 31},
  {"Regular expressions", 32},
  {"Auto wrap", 33},
  {"Invoke the help menu", 34},
  {"Write the current file to disk", 35},
  {"Exit from nano", 36},
  {"Goto a specific line number", 37},
  {"Justify the current paragraph", 38},
  {"Unjustify after a justify", 39},
  {"Replace text within the editor", 40},
  {"Insert another file into the current one", 41},
  {"Search for text within the editor", 42},
  {"Move to the previous screen", 43},
  {"Move to the next screen", 44},
  {"Cut the current line and store it in the cutbuffer", 45},
  {"Uncut from the cutbuffer into the current line", 46},
  {"Show the posititon of the cursor", 47},
  {"Invoke the spell checker (if available)", 48},
  {"Move up one line", 49},
  {"Move down one line", 50},
  {"Move forward one character", 51},
  {"Move back one character", 52},
  {"Move to the beginning of the current line", 53},
  {"Move to the end of the current line", 54},
  {"Go to the first line of the file", 55},
  {"Go to the last line of the file", 56},
  {"Refresh (redraw) the current screen", 57},
  {"Mark text at the current cursor location", 58},
  {"Delete the character under the cursor", 59},
  {"Delete the character to the left of the cursor", 60},
  {"Insert a tab character", 61},
  {"Insert a carriage return at the cursor position", 62},
  {"Make the current search or replace case (in)sensitive", 63},
  {"Go to file browser", 64},
  {"Cancel the current function", 65},
  {"Get Help", 66},
  {"Exit", 67},
  {"WriteOut", 68},
  {"Justify", 69},
  {"Read File", 70},
  {"Replace", 71},
  {"Where Is", 72},
  {"Prev Page", 73},
  {"Next Page", 74},
  {"Cut Text", 75},
  {"UnJustify", 76},
  {"UnCut Txt", 77},
  {"Cur Pos", 78},
  {"To Spell", 79},
  {"Up", 80},
  {"Down", 81},
  {"Forward", 82},
  {"Back", 83},
  {"Home", 84},
  {"End", 85},
  {"Refresh", 86},
  {"Mark Text", 87},
  {"Delete", 88},
  {"Backspace", 89},
  {"Tab", 90},
  {"Enter", 91},
  {"Goto Line", 92},
  {"First Line", 93},
  {"Last Line", 94},
  {"Case Sens", 95},
  {"Cancel", 96},
  {"No Replace", 97},
  {"To Files", 98},
  {"\
\n\
Buffer written to %s\n", 99},
  {"\
\n\
No %s written (file exists?)\n", 100},
  {"Window size is too small for Nano...", 101},
  {"Key illegal in VIEW mode", 102},
  {"\
 nano help text\n\
\n\
 The nano editor is designed to emulate the functionality and ease-of-use of \
the UW Pico text editor.  There are four main sections of the editor: The \
top line shows the program version, the current filename being edited, and \
whether or not the file has been modified.  Next is the main editor window \
showing the file being edited.  The status line is the third line from the \
bottom and shows important messages. The bottom two lines show the most \
commonly used shortcuts in the editor.\n\
\n\
 The notation for shortcuts is as follows: Control-key sequences are notated \
with a caret (^) symbol and are entered with the Control (Ctrl) key.  \
Escape-key sequences are notated with the Meta (M) symbol and can be entered \
using either the Esc, Alt or Meta key depending on your keyboard setup.  The \
following keystrokes are available in the main editor window. Optional keys \
are shown in parentheses:\n\
\n", 103},
  {"delete_node(): free'd a node, YAY!\n", 104},
  {"delete_node(): free'd last node.\n", 105},
  {"\
Usage: nano [GNU long option] [option] +LINE <file>\n\
\n", 106},
  {"Option\t\tLong option\t\tMeaning\n", 107},
  {" -T [num]\t--tabsize=[num]\t\tSet width of a tab to num\n", 108},
  {" -R\t\t--regexp\t\tUse regular expressions for search\n", 109},
  {" -V \t\t--version\t\tPrint version information and exit\n", 110},
  {" -c \t\t--const\t\t\tConstantly show cursor position\n", 111},
  {" -h \t\t--help\t\t\tShow this message\n", 112},
  {" -i \t\t--autoindent\t\tAutomatically indent new lines\n", 113},
  {" -k \t\t--cut\t\t\tLet ^K cut from cursor to end of line\n", 114},
  {" -l \t\t--nofollow\t\tDon't follow symbolic links, overwrite\n", 115},
  {" -m \t\t--mouse\t\t\tEnable mouse\n", 116},
  {" -p\t \t--pico\t\t\tEmulate Pico as closely as possible\n", 117},
  {"\
 -r [#cols] \t--fill=[#cols]\t\tSet fill cols to (wrap lines at) #cols\n", 118},
  {" -s [prog] \t--speller=[prog]\tEnable alternate speller\n", 119},
  {" -t \t\t--tempfile\t\tAuto save on exit, don't prompt\n", 120},
  {" -v \t\t--view\t\t\tView (read only) mode\n", 121},
  {" -w \t\t--nowrap\t\tDon't wrap long lines\n", 122},
  {" -x \t\t--nohelp\t\tDon't show help window\n", 123},
  {" -z \t\t--suspend\t\tEnable suspend\n", 124},
  {" +LINE\t\t\t\t\tStart at line number LINE\n", 125},
  {"\
Usage: nano [option] +LINE <file>\n\
\n", 126},
  {"Option\t\tMeaning\n", 127},
  {" -T [num]\tSet width of a tab to num\n", 128},
  {" -R\t\tUse regular expressions for search\n", 129},
  {" -V \t\tPrint version information and exit\n", 130},
  {" -c \t\tConstantly show cursor position\n", 131},
  {" -h \t\tShow this message\n", 132},
  {" -i \t\tAutomatically indent new lines\n", 133},
  {" -k \t\tLet ^K cut from cursor to end of line\n", 134},
  {" -l \t\tDon't follow symbolic links, overwrite\n", 135},
  {" -m \t\tEnable mouse\n", 136},
  {" -p \t\tEmulate Pico as closely as possible\n", 137},
  {" -r [#cols] \tSet fill cols to (wrap lines at) #cols\n", 138},
  {" -s [prog]  \tEnable alternate speller\n", 139},
  {" -t \t\tAuto save on exit, don't prompt\n", 140},
  {" -v \t\tView (read only) mode\n", 141},
  {" -w \t\tDon't wrap long lines\n", 142},
  {" -x \t\tDon't show help window\n", 143},
  {" -z \t\tEnable suspend\n", 144},
  {" +LINE\t\tStart at line number LINE\n", 145},
  {" GNU nano version %s (compiled %s, %s)\n", 146},
  {" Email: nano@nano-editor.org\tWeb: http://www.nano-editor.org", 147},
  {"\
\n\
 Compiled options:", 148},
  {"Mark Set", 149},
  {"Mark UNset", 150},
  {"check_wrap called with inptr->data=\"%s\"\n", 151},
  {"current->data now = \"%s\"\n", 152},
  {"After, data = \"%s\"\n", 153},
  {"Edit a replacement", 154},
  {"Could not create a temporary filename: %s", 155},
  {"Spell checking failed: unable to write temp file!", 156},
  {"Finished checking spelling", 157},
  {"Spell checking failed", 158},
  {"Save modified buffer (ANSWERING \"No\" WILL DESTROY CHANGES) ? ", 159},
  {"Received SIGHUP", 160},
  {"Cannot resize top win", 161},
  {"Cannot move top win", 162},
  {"Cannot resize edit win", 163},
  {"Cannot move edit win", 164},
  {"Cannot resize bottom win", 165},
  {"Cannot move bottom win", 166},
  {"Can now UnJustify!", 167},
  {"%s enable/disable", 168},
  {"enabled", 169},
  {"disabled", 170},
  {"NumLock glitch detected.  Keypad will malfunction with NumLock off", 171},
  {"Main: set up windows\n", 172},
  {"Main: bottom win\n", 173},
  {"Main: open file\n", 174},
  {"I got Alt-O-%c! (%d)\n", 175},
  {"I got Alt-[-1-%c! (%d)\n", 176},
  {"I got Alt-[-2-%c! (%d)\n", 177},
  {"I got Alt-[-%c! (%d)\n", 178},
  {"I got Alt-%c! (%d)\n", 179},
  {"Case Sensitive Regexp Search%s%s", 180},
  {"Regexp Search%s%s", 181},
  {"Case Sensitive Search%s%s", 182},
  {"Search%s%s", 183},
  {" (to replace)", 184},
  {"Search Cancelled", 185},
  {"\"%s...\" not found", 186},
  {"Search Wrapped", 187},
  {"Replaced %d occurrences", 188},
  {"Replaced 1 occurrence", 189},
  {"Replace Cancelled", 190},
  {"Replace this instance?", 191},
  {"Replace failed: unknown subexpression!", 192},
  {"Replace with [%s]", 193},
  {"Replace with", 194},
  {"Enter line number", 195},
  {"Aborted", 196},
  {"Come on, be reasonable", 197},
  {"Only %d lines available, skipping to last line", 198},
  {"actual_x_from_start for xplus=%d returned %d\n", 199},
  {"input '%c' (%d)\n", 200},
  {"New Buffer", 201},
  {"  File: ...", 202},
  {"   DIR: ...", 203},
  {"Modified", 204},
  {"Moved to (%d, %d) in edit buffer\n", 205},
  {"current->data = \"%s\"\n", 206},
  {"I got \"%s\"\n", 207},
  {"Yy", 208},
  {"Nn", 209},
  {"Aa", 210},
  {"Yes", 211},
  {"All", 212},
  {"No", 213},
  {"do_cursorpos: linepct = %f, bytepct = %f\n", 214},
  {"line %d of %d (%.0f%%), character %d of %d (%.0f%%)", 215},
  {"Dumping file buffer to stderr...\n", 216},
  {"Dumping cutbuffer to stderr...\n", 217},
  {"Dumping a buffer to stderr...\n", 218},
  {"The nano text editor", 219},
  {"version ", 220},
  {"Brought to you by:", 221},
  {"Special thanks to:", 222},
  {"The Free Software Foundation", 223},
  {"Pavel Curtis, Zeyd Ben-Halim and Eric S. Raymond for ncurses", 224},
  {"and anyone else we forgot...", 225},
  {"Thank you for using nano!\n", 226},
};

int _msg_tbl_length = 226;