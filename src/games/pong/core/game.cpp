#include "game.h"
#include <raylib.h>

using namespace std;

#include "../windows/window.h"
#include "../entity/ball.h"
#include "../entity/player.h"
#include "../entity/enemy.h"

// Game
void Pong1()
{
    // Class
    Window window;
    Ball ball;
    Player player;
    Enemy enemy;

    // Variables
    ball.__x = window.__width / 2;
    ball.__y = window.__height / 2;
    ball.__radius = 20;
    ball.__speed_x = 7;
    ball.__speed_y = 7;
    player.__x = window.__width - 35;
    player.__y = window.__height / 2 - 60;
    player.__width = 25;
    player.__height = 120;
    player.__speed = 6;
    enemy.__x = 10;
    enemy.__y = window.__height / 2 - 60;
    enemy.__width = 25;
    enemy.__height = 120;
    enemy.__speed = 6;

    // Window Open
    window.Start();

    // Game Loop
    while(WindowShouldClose() == false)
    {
        // Start
        BeginDrawing();

        // Updating
        ball.Update();
        player.Update();
        enemy.Update(ball.__y);

        // Event
        if(CheckCollisionCircleRec(Vector2{ball.__x, ball.__y}, ball.__radius, Rectangle {player.__x, player.__y, player.__width, player.__height}))
            ball.__speed_x *= -1;

        if(CheckCollisionCircleRec(Vector2{ball.__x, ball.__y}, ball.__radius, Rectangle {enemy.__x, enemy.__y, enemy.__width, enemy.__height}))
            ball.__speed_x *= -1;

        // Collision
        // Score

        // Drawing
        window.Draw();
        ball.Draw();
        player.Draw();
        enemy.Draw();

        // End
        EndDrawing();        
    }

    // Window Close
    window.End();
}
