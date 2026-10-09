#pragma once

#include <raylib.h>

// Class
class Ball{

    // Public
    public:

        // Variables
        float __x, __y;
        int __speed_x, __speed_y;
        int __radius;
        Color __yellow = {243, 213, 91, 255};

        // Functions
        void Draw();
        void Update();
        void Reset();
};