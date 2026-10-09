#include "window.h"
#include <raylib.h>

using namespace std;

// Public
void Window::Start()
{
    InitWindow(__width, __height, "Pong v0.0.1");
    SetTargetFPS(__fps);
}

void Window::End()
{
    CloseWindow();
}

void Window::Draw()
{
    Background();
    Score();
}

// Privete
void Window::Background()
{
    ClearBackground(__dark_green);
    DrawRectangle(__width / 2, 0, __width / 2, __height, __green);
    DrawCircle(__width / 2, __height / 2, 150, __light_green);
    DrawLine(__width / 2, 0, __width / 2, __height, WHITE);
}

void Window::Score()
{
    DrawText(TextFormat("%i", __player_score), 3 * __width / 4 - 20, 20, 80, WHITE);
    DrawText(TextFormat("%i", __enemy_score), __width / 4 - 20, 20, 80, WHITE);
}