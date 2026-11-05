#pragma once
#include <vector>
#include "raylib.h"
#include "raymath.h"

class Rooms
{
    private:
    Texture2D background, wallTexture, groundTexture;
    int width, height;
    std::vector<std::vector<int>> tileData;
};


class Player
{
    private:
    Vector2 position;
    Texture2D playerSprite;
    float speed, width, height, rotation;

    public:
    Player();

    void Update(Rooms &room);
    void Draw();

    Vector2 GetPosition() {return position;}
};
