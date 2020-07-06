# dwm
Need to Fix: Make Picom not make the boarders transparent.FIX CFACTS AND ALPHA!!

Will add: fixborders, save_floats, alternativetags, barpadding or statuspadding.

Also need to do: Add keybindings for more apps, and add all keybinding and number changes in config.h to config.def.h (make patching easier, and might fix some other minor issues).

My Personal files for dwm. I have this in my home dir. By default, terminal is 'termite' and run launcher is 'dmenu'. 

My dmenu is also from suckless.org (not arch repos)

Current patches: attachaside, actualfullscreen, movestack, gridmode, fullgaps, autostart, restartsig, cyclelayouts,

INSTALL:

Have 'dmenu', Have 'termite' (not required, can just find your terminal in dmenu), Have 'nitrogen' and use it to set wallpaper once, Have 'make', Have 'gcc', Have 'pacman-contrib', Have 'alsa-utils', Have 'picom' (should work without it)....

Go into the dwm folder (might be 'dwm/dwm', if so, just move it up to home dir) and 'sudo make clean install' once inside folder.

Put 'autostart.sh' into the .dwm folder (might have to create, .dwm folder is in home dir) and 'sudo chmod a+x autostart.sh' to have wallpaper.

For each file in the 'dwmBar' folder, 'sudo chmod a+x $nameOfFile'.

Go into the 'dwmblocks' folder and 'sudo make clean install'.

Also create 'dwm.desktop' in the '/usr/share/xsessions/' folder. ('sudo vim /usr/share/xsessions/dwm.desktop'). Copy the following in:

[Desktop Entry]

Encoding=UTF-8

Name=dwm

Comment=dwm window manager

Exec=/usr/local/bin/dwm

Type=Application
