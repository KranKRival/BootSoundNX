# BootSoundNX

A system module that plays sound on the nintendo switch boot!

## Notes

MP3 Only!

## Installation

Copy the contents of the release zip to root of the sd card, and restart the switch.

## Change Sound

To replace the boot sound replace it with your sound in ```sdmc://config/BootSoundNX/sound/bootsound.mp3```

## Credits

Credits: [jakibaki](https://github.com/jakibaki) & [TheModdersDen](https://github.com/TheModdersDen)

## Troubleshooting

To disable/remove the sysmodule, please do one of the three following

- Remove the following file: ```sdmc://atmosphere/contents/00FF0000000002AA/flags/boot2.flag.```

**OR**

- Disable the sys-module in a sysmodule manager (Such as DeepSea toolbox)

**OR**

- Download this handy boot payload and remove all sysmodules by starting it and try again (**last resort**): [CommonProblemResolver](https://github.com/Team-Neptune/CommonProblemResolver/releases).

Also, there is a possible bug I have encountered in which certain MP3 files play at a wierd pitch and speed. I am investigating this in my spare time, but if someone finds the cause, or has issues with it, please let me know by creating an issue.
