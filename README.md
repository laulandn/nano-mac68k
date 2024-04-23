Port of the nano text editor for m68k Macs
===============

Unfinished.

For CodeWarrior Pro 6.

Probably requires MacOS 7.5+

This was done as a request, and proof of concept of how easy it would be to port random software to classic MacOS.  I chose version 1.0 because it was the smallest, had the least dependencies (which would also need to be ported!) and wouldn't need a modern compiler or build system.

Uses old public domain curses implmentation for Mac, hacked a little (includes original archive).
Added a couple curses functions that weren't there, but nano needed.

Includes, but does not yet use curses implementation from MacLynx.
(Would be used to start adding mouse support and other features, etc etc)

Not a "Mac Friendly" application!

- No mouse support.
- No menus.
- Window is fixed size.
- Window doesn't have close box.
- Mac event handling is minimal.
- Can't drag a file to its app icon.

Displays some garbage?
Assuming because Nano uses some ASCII escape sequences I haven't implemented.
(See Picture 2.png for example)
