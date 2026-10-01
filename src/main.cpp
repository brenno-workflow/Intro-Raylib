#include "utils/utils.h"
#include <raylib.h>

int main(){

    // Print
    print("Hello World!");

    // Soma
    int __result2 = 10 + 40;
    int __n1 = 10;
    int __n2 = 50;
    int __result3 = __n1 + __n2;
    print(__result2);
    print(__result3);
    print("{} {}", __result2, __result3);
    
}