    /*
    Author      : NAVEETH KHAN J
    Date        : 26/08/2024
    Description : Write a program to get two numbers and print their size and value.
    */

    #include<stdio.h>

    #define INTEGER_VALUE 7
    #define FLOAT_VALUE 9.0

    int main(void) {

        // Printing the integer value
        printf("The value of the integer: %d\n", INTEGER_VALUE);

        // Printing the size of the integer value
        printf("Size of the integer: %zu bytes\n", sizeof(INTEGER_VALUE));

        // Printing the float value
        printf("\nThe value of the float: %f\n", FLOAT_VALUE);

        // Printing the size of the float value
        printf("Size of the float: %zu bytes\n", sizeof(FLOAT_VALUE));

        // Indicating successful execution of the C program
        return 0;
    }
