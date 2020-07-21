# Tetris written in pure C

*By: Joel Howell*

## About 
This is tetris written in pure C and will eventually implement a GUI interface.

## Controls
* Up Arrow: Rotate by 90 degrees
* Left Arrow: Move Left
* Right Arrow: Move Right
* Down Arrow/Space: Drop

## To use
First, clone the repository and install the below dependencies. Then, use 'make' to build Tetris and then run the exectuable.

### Dependencies
- make
- gcc

### On Ubuntu
```
$ sudo apt-get intsall make
$ sudo apt-get install gcc
```

### On Windows
Download and install MinGW or any other alternative that contains gcc and make. Then add the following to your `PATH` under `system environment variables`:

```
C:\MinGW\bin
C:\MinGW\msys\1.0\bin
```

### Build Executable
```
$ make
```

### Run Executable
##### Ubuntu
```
$ ./tetris
```

##### Windows
```
> tetris.exe
```

### Help & Usage
```
$ ./tetris --help
```

## License
This project is licensed under the MIT License, see the [LICENSE.md](LICENSE "MIT License") file for details.