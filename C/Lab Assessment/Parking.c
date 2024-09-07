#include<stdio.h>
#define READBIT(Input, Position) (Input & (1 << Position))
#define SETBIT(Input, Position) (Input ^ (1 << Position))
#define RESETBIT(Input, Position) (Input & ~(1 << Position))


int main(void) {

    // Used for reading the user input
    unsigned char Input;
    scanf("%hhu", &Input);

    // Need to read individual bit for checking the status
    int D0 = READBIT(Input, 0);
    int D1 = READBIT(Input, 1);
    int D2 = READBIT(Input, 2);
    int D5 = READBIT(Input, 5);
    int D6 = READBIT(Input, 6);
    int D7 = READBIT(Input, 7);

    // If our D0 is set or not, we need to modify on both the condition for D6, 
    D6 = D0;

    // checking the status of D0
    if (D0) {

        D5 = D0;    // Set D5, if D0 is high
        D7 = D0;    // Set D7, if D0 is high
        Input = SETBIT(Input, 5);   // Since the we taken seperately for checking, we need to update it in Input Variable
        Input = SETBIT(Input, 7);   // We need to update in Input Variable in the position of 7.
        Input = SETBIT(Input, 6);   // We need to update in Input Variable in the position of 6


    } else {
        D5 = 0; // If the D0 is low, we need to reset the bit for D5.
        D7 = 0; // If the D0 is low, we need to reset the bit for D7.
        Input = RESETBIT(Input, 5); // We need to update as well in the input, the above changes.
        Input = RESETBIT(Input, 7); // Update in Input Number for D7.
        Input = RESETBIT(Input, 6); // Update in Input Number for D6.
    }

    if (D6) {   // If D6 is high, printf Ignition status is "On"
        printf("IGNITION ON\n");
    }

    if (D5) {   // If the D5 is high, it means left indicator is "On"
        printf("Right Indicator is ON \n");
    }

    if (D7) {   //
        printf("Left Indicator is ON \n");
    }

    if (D5 && D7) {

        printf("PARKING ON\n");

    }

    printf("%d", Input);

    return 0;
}