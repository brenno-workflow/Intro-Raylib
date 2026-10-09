#include "ball.h"
#include <raylib.h>

using namespace std;

void Ball::Draw()
{
    DrawCircle(__x, __y, __radius, __yellow);
}

void Ball::Reset()
{
    // Position
    __x = GetScreenWidth() / 2;
    __y = GetScreenHeight() / 2;

    // Speed
    // Novo valor aleatório por reset
    int __speed[2] = {-1,1};
    __speed_x *= __speed[GetRandomValue(0,1)];
    __speed_y *= __speed[GetRandomValue(0,1)];
}

void Ball::Update()
{
    // Move
    __x += __speed_x;
    __y += __speed_y;

    // Collision
    if(__y + __radius >= GetScreenHeight() || __y - __radius <= 0)
    {
        __speed_y *= -1;
    }
}

