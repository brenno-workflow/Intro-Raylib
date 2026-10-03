#include "utils/utils.h"
#include <raylib.h>
#include <print>
#include <unordered_map>
#include <variant>
#include <string>
using namespace std;

int main()
{
    // Variables
    int __ball_x = 400;
    int __ball_y = 400;
    Color __green = {20, 160, 133, 255};

    // Window Open
    InitWindow(800, 800, "Teste");
    SetTargetFPS(60);

    // Game Loop
    while(WindowShouldClose() == false)
    {
        // 1. Event Handling
        if(IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
            __ball_x += 3;

        if(IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
            __ball_x -= 3;
        
        if(IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
            __ball_y -= 3;

        if(IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))
            __ball_y += 3;

        // 2. Updating Position

        // 3. Drawing
        BeginDrawing();
        ClearBackground(__green);
        DrawCircle(__ball_x, __ball_y, 20, WHITE);
        EndDrawing();        
    }

    // Window Open
    CloseWindow();

    // End
    return 0;
}