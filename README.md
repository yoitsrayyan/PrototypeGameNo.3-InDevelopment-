# Prototype Game No. 3

Prototype Game No. 3 is an unfinished C++/Raylib experiment. The repository
currently contains the starting point for a native game project rather than a
playable game.

## Current state

The code currently:

- Initializes an 800x600 Raylib window and audio device
- Sets a target frame rate of 60 FPS
- Defines early `Rooms` and `Player` class declarations for future work

The game loop, rendering, input handling, room loading, player behavior, and
resource cleanup are not implemented yet.

## Technologies

- C++17
- Raylib
- Raymath

## Build

Install Raylib and a C++ compiler, then compile from the repository root with
the flags required by your platform. A typical Linux command is:

```bash
g++ -std=c++17 src/main.cpp -Isrc -o prototype \
  -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```

Run it with:

```bash
./prototype
```

## Project status

This is an in-development prototype kept as a record of early exploration
with native game setup, Raylib, player state, and room-based level structure.
