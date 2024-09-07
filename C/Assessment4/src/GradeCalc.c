/*
AUTHOR : NAVEETH KHAN J
DATE   : 01 - 09 - 2024
Description :   Write a c program to get the five subjects mark, and output the percentage
                based on the given criteria.
*/
#include <stdio.h>

int  TotalMarks = 500;  // Total Score will be 500 for five subjects

int main(void) {

    unsigned int GetMark = 0;    
    unsigned int ScoredMarks = 0;

    for (int Subjects = 0; Subjects < 5; Subjects++) {  // Get fice subjects marks using getMarks variable

        printf("Enter the Subject %d mark : ",Subjects + 1);
        scanf("%d", &GetMark);
        ScoredMarks += GetMark;

    }

    printf("Scored Marks out of 500 : %d \n", ScoredMarks);

    float Percentage = (ScoredMarks * 100) / TotalMarks; // Calculate the percentage of marks score 

    printf("Percentage : %f\n", Percentage);

    if (Percentage >= 90.0f) {
        printf("GRADE A");
    } else if (Percentage >= 80.0f) {
        printf("GRADE B");
    } else if (Percentage >= 70.0f) {
        printf("GRADE C");
    } else if (Percentage >= 60.0f) {
        printf("GRADE D");
    } else if (Percentage >= 40.0f) {
        printf("GRADE E");
    } else {
        printf("GRADE F");
    }

    return 0;

}