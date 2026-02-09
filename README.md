# ModMover CLI
## CLI Tool for moving Minecraft mods

I am using ATLauncher and it expects
mods to be downloaded to /home/adam/Downloads/
but they download to /home/adam/Pobrane/. 
Moving these mods is fast but I don't like
to do this manually so I made this instead.

## Usage :rocket:

Basic command to move mods:
```
modmover move
```
```
modmover move --source ./Downloads --destination ./mods
```

## Installation :hammer_and_wrench:

1. Clone the repo:
```
git clone https://github.com/AdaskoKwi/modmover.git
cd modmover
```
2. Compile:
```
g++ -std=c++20 -I include/ src/*.cpp -o modmover
```
3. Build & Install
```
cd cmake-build-debug/
cmake ..
ninja
sudo ninja install
```

## Options :notebook_with_decorative_cover:
* ```move```: Primary command for executing the file moving.
* ```-s, --source <path>```: Directory to scan for ```.jar``` files.
* ```-d, --destination <path>```: Target directory.
* ```-h, --help```: Show help message.

## Author :pen:
Adam Nowak