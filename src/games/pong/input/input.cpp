#include "input.h"
#include <raylib.h>
using namespace std;

// Up
bool Up()
{
    return IsKeyDown(KEY_UP) || IsKeyDown(KEY_W);
}

// Down
bool Down()
{
    return IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S);
}
