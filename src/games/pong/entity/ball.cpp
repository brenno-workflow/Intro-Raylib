#include "ball.h"
#include <raylib.h>

using namespace std;

void Ball::Draw()
{
    DrawCircle(__x, __y, __radius, WHITE);
}

void Ball::Update()
{
    // Move
    __x += __speed_x;
    __y += __speed_y;

    // Collision
    if(__y + __radius >= GetScreenHeight() || __y - __radius <= 0)
        __speed_y *= -1;

    if(__x + __radius >= GetScreenWidth() || __x - __radius <= 0)
        __speed_x *= -1;
}

