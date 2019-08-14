
Debian
====================
This directory contains files used to package elsperod/elspero-qt
for Debian-based Linux systems. If you compile elsperod/elspero-qt yourself, there are some useful files here.

## elspero: URI support ##


elspero-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install elspero-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your elspero-qt binary to `/usr/bin`
and the `../../share/pixmaps/elspero128.png` to `/usr/share/pixmaps`

elspero-qt.protocol (KDE)

