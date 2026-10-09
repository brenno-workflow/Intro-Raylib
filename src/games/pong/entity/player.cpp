#include "player.h"
#include <raylib.h>

using namespace std;

void Player::Draw()
{
    DrawRectangleRounded(Rectangle{__x, __y, __width, __height}, 0.8, 0, WHITE);
}

void Player::Update()
{
    // Move
    if(IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
    {
        __y -= __speed;
    }
        
    if(IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))
    {
        __y += __speed;
    }

    // Collision
    if(__y <= 0)
    {
        __y = 0;
    }

    if(__y + __height >= GetScreenHeight())
    {
        __y = GetScreenHeight() - __height;
    }
}

