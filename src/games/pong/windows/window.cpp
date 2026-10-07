#include "window.h"
#include <raylib.h>

using namespace std;

void Window::Start()
{
    InitWindow(__width, __height, "Pong v0.0.1");
    SetTargetFPS(__fps);
}

void Window::End()
{
    CloseWindow();
}

void Window::Background()
{
    ClearBackground(__green);
    DrawLine(__width / 2, 0, __width / 2, __height, WHITE);
}

