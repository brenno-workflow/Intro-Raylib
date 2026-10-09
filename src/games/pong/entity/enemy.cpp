#include "enemy.h"
#include <raylib.h>

using namespace std;

void Enemy::Draw()
{
    DrawRectangleRounded(Rectangle{__x, __y, __width, __height}, 0.8, 0, WHITE);
}

void Enemy::Update(int __ball_y)
{
    // Move
    if (__y + __height / 2 > __ball_y)
    {
        __y -= __speed;
    }

    if (__y + __height / 2 <= __ball_y)
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

