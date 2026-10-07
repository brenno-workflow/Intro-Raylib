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
        Color __green = {20, 160, 133, 255};

        // Functions
        void Start();
        void End();
        void Background();
};