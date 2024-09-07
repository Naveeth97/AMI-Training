/*
AUTHOR : NAVEETH KHAN J
Date : 01/09/2024
Description : Write a program to read the input value from user, read individually 4 bit of LSB,
                if the bit is 1, then | with 1, else & with 1
                Observe the output finally.
*/

#include<stdio.h>

#define READBIT(InputValue) (InputValue >> 1)
#define SETBITS(Position, OutputValue) (OutputValue | (1 << Position))
#define RESETBITS(Position, OutputValue) (OutputValue & ~(1 << Position))

int main(void) {

    int InputValue;

    printf("Enter the value : ");
    scanf("%d", &InputValue);

    unsigned int OutputValue = 0;

    int Position = 28;

    //we need first four bits of LSB
    for (int Index = 0; Index < 4; Index++) {

        if (InputValue & 1) {       // If the bit is 1, then set it on corresponding position
            OutputValue = SETBITS(Position, OutputValue);
        } else {  //If the bit is 0,  then set it on 0 for corresponding position
            OutputValue = RESETBITS(Position, OutputValue);
        }
        
        Position++; // Increment to ensure the respective position to set
        InputValue = READBIT(InputValue); //Update the InputValue
    }

    printf("\nAfter Setting and resetting the OutputValue will be : %u", OutputValue);

    return 0;
}