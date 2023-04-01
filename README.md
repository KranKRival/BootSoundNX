# BootSoundNX

A system module that plays sound on the nintendo switch boot!

## Credits

Credits: [jakibaki](https://github.com/jakibaki), [KranKRival](https://github.com/KranKRival), and [TheModdersDen](https://github.com/TheModdersDen)

## Notes

This sysmodule supports the '.mp3' extension **ONLY**. Please do not ask for additional file support as I do not have the time to learn how to encode more sound formats to this sys-module. If you don't know how do this, please look here: [link](https://gprivate.com/5ynap).

## Latest Tested Version (BootSoundNX v1.3.0)

Tested on Atmosphere 1.3.2 (found [here](https://github.com/Atmosphere-NX/Atmosphere/releases/tag/1.3.2)), Hekate v5.7.2 (found [here](https://github.com/CTCaer/hekate/releases/tag/v5.7.2)) and HOS 14.1.1.

It works. There are a few things which I might need to iron out, but it works.

For now, I recommend downloading boot sounds from [Zedge](https://www.zedge.net/ringtones-and-wallpapers).

## Installation

Copy the contents of the release zip to root of the sd card, and restart the switch.

## How to Change the Sound

To replace the boot sound, replace it with your sound in ```sdmc://config/BootSoundNX/sound/bootsound.mp3```.

## Regarding Long BootSounds

This is from a conversation with a tester of this sysmodule named @[pixeltester](https://github.com/pixeltester). Shoutout to that individual for this find:

> Regarding the issue with the gap in the audio, I finally tested a long bootsound with two SD cards on the same Switch and there is quite a large variance as to where the gap occurs. Sandisk = the gap is very early in the bootsound, Samsung = the gap is in the middle of the bootsound.

> These are good quality SD cards formatted to FAT32 with hekate. I have no idea how to resolve it but it seems it was indeed down to some kind of hardware variance and possibly format method also.

## Troubleshooting

To disable/remove the sysmodule, please do one of the three following

- Remove the following file: ```sdmc://atmosphere/contents/00FF0000000002AA/flags/boot2.flag.```

**OR**

- Disable the sys-module in a sysmodule manager (Such as DeepSea toolbox)

**OR**

- Download this handy boot payload and remove all sysmodules by starting it and try again (**last resort**): [CommonProblemResolver](https://github.com/Team-Neptune/CommonProblemResolver/releases).
  - Stick it in your ```bootloader/payloads``` folder to use it in Hekate.

Also, there is a possible bug I have encountered in which certain MP3 files play at a wierd pitch and speed. I am investigating this in my spare time, but if someone finds the cause, or has issues with it, please let me know by creating an issue.

## Changelog

To view the changelog see the [_CHANGELOG.md](_CHANGELOG.md) file.

## ToDo/Future Plans

To view the ToDo/Future Plans see the [docs/TODO.md](docs/TODO.md) file.

## License

This project is licensed under the Apache 2.0 License - see the [LICENSE.md](LICENSE.md) file for details.

## Acknowledgments

- [jakibaki](https://www.github.com/jakibaki) for the original idea (from [this](https://gbatemp.net/threads/boot-sound-on-nx.540201/) thread).
- [KranKRival](https://www.github.com/KranKRival) for the original code repository
