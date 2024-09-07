#include<stdio.h>

int main(void) {

    //getting the user input
    unsigned int InputNumber;
    scanf("%d", &InputNumber);

    //using digit place, to extract the single digit individually
    unsigned int tens = 1;
    int DuplicateInputNumber = InputNumber / 10; // Used to achieve the digit place 

    while (DuplicateInputNumber > 0) { // runs to calculate the tens place

        tens *= 10;
        DuplicateInputNumber /= 10;
    }
    
    while (tens > 0) {  // tens is setting to handle all the edge cases in the problem statement, especially trailing zeros

        int num = InputNumber / tens; //extract individual digits

        switch (num)
        {   //checking all the necessary condition to print the integer in str using switch.
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        
        default:
            printf("Zero ");
            break;
        }

        InputNumber %= tens;    //every iteration reducing the inputnumber
        tens /= 10; //every iteration need to reduce the digit place,
    }

    return 0;   // Indicating successfully execution of a C Program.
}
