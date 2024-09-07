#ifndef AREA_MACRO_H
#define AREA_MACRO_H

#define STAGE 2

#if STAGE == 1
    #define AREA(SIDE) ((SIDE) * (SIDE))
#else
    #define PI 3.14
    #define AREA(RADIUS)  (PI * RADIUS * RADIUS)
#endif
#endif