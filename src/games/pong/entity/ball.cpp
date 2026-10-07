#include "ball.h"
#include <raylib.h>

using namespace std;

void Ball::Draw()
{
    DrawCircle(__x, __y, __radius, WHITE);
}

void Ball::Reset()
{
    __x = GetScreenWidth() / 2;
    __y = GetScreenHeight() / 2;
}

void Ball::Update()
{
    // Move
    __x += __speed_x;
    __y += __speed_y;

    // Collision
    if(__y + __radius >= GetScreenHeight() || __y - __radius <= 0)
        __speed_y *= -1;

    // Reset
    if(__x + __radius >= GetScreenWidth() || __x - __radius <= 0)
        Reset();
}

