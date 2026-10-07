#pragma once

// Class
class Enemy{

    // Public
    public:

        // Variables
        float __x, __y;
        float __width, __height;
        int __speed;

        // Functions
        void Draw();
        void Update(int __ball_y);
};

