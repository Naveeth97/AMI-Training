// display.c
#include <stdio.h>
#include "../include/main.h"

// Accessing global variables using extern
#if STAGE == 1
    extern int SIDE;
#elif STAGE == 2
    extern float RADIUS;
#endif

// Function to display the area
void DisplayArea(void) {
    #if STAGE == 1
        printf("Area of square with side %d: %d\n", SIDE, AREA(SIDE));
    #elif STAGE == 2
        printf("Area of circle with radius %.2f: %.2f\n", RADIUS, AREA(RADIUS));
    #endif
}
