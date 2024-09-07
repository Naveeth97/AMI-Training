/*
AUTHOR : NAVEETH KHAN J
DATE : 1/09/2024
Description : 
*/
#include <stdio.h>
#include "../include/main.h"

// Conditional compilation for global variables
#if STAGE == 1
    int SIDE = 5;  // Global variable for side of square
#elif STAGE == 2
    float RADIUS = 3.0;  // Global variable for radius of circle
#endif

// Function prototype
void DisplayArea(void);  // Function declaration for display_area from display.c

int main(void) {
    DisplayArea();  // Call the function to display area
    return 0;
}
