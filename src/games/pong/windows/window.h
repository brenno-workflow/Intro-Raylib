#pragma once

#include <raylib.h>

// Class
class Window{

    // Public
    public:

        // Variables
        int __height = 800;
        int __width = 1280;
        int __fps = 60;
        int __player_score = 0;
        int __enemy_score = 0;
        Color __green = {38, 185, 154, 255};
        Color __dark_green = {20, 160, 133, 255};
        Color __light_green = {129, 204, 184, 255};

        // Functions
        void Start();
        void End();
        void Draw();
        void Background();
        void Score();
};