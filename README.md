# Prototype Game No. 3

Prototype Game No. 3 is an early C++/Raylib game prototype exploring a
tile-based room system, player movement, textures, and a real-time game loop.

## Current direction

The prototype currently contains the initial structure for:

- Raylib window and audio initialization
- A `Rooms` class for tile and texture data
- A `Player` class for position, sprite, movement, and drawing
- A 60 FPS update target

## Technologies

- C++
- Raylib
- Raymath

## Build

Install Raylib and a C++ compiler, then compile the source with the include
and library flags required by your platform. A typical Linux command is:

```bash
g++ -std=c++17 main.cpp -o prototype \
  -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```

Run it with:

```bash
./prototype
```

## Project status

This repository is an in-development prototype, not a finished game. It is
kept as a record of experimentation with native game loops, Raylib, player
state, and room-based level structure.
