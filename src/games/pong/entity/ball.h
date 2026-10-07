#pragma once

// Class
class Ball{

    // Public
    public:

        // Variables
        float __x, __y;
        int __speed_x, __speed_y;
        int __radius;

        // Functions
        void Draw();
        void Update();
        void Reset();
};