Port of the nano text editor for m68k Macs
===============

Unfinished.

For CodeWarrior Pro 6.

Probably requires 7.5+

Uses old public domain curses implmentation for Mac, hacked a little (includes original archive).
Added a couple curses functions that weren't included, but nano needed.

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
