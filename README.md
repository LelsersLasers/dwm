# dwm
My Personal files for dwm. I have this in my home dir. By default, terminal is 'termite' and run launcher is 'dmenu'. 

My dmenu is also from suckless.org (not arch repos)

Current patches: attachaside, actualfullscreen, movestack, gridmode, uselessgaps, autostart

INSTALL:

Have 'dmenu', Have 'termite' (not required, can just find your terminal in dmenu), Have 'nitrogen' and use it to set wallpaper, Have 'make', Have "gcc".

Go into the dwm folder (might be 'dwm/dwm', if so, just move it up to home dir) and 'sudo make clean install' once inside folder.

Put 'autostart.sh' into the .dwm folder (might have to create, .dwm folder is in home dir) and 'sudo chmod a+x autostart.sh' to have wallpaper.

Also create 'dwm.desktop' in the '/usr/share/xsessions/' folder. ('sudo vim /usr/share/xsessions/dwm.desktop'). Copy the following in:

[Desktop Entry]

Encoding=UTF-8

Name=dwm

Comment=dwm window manager

Exec=/usr/local/bin/dwm

Type=Application
