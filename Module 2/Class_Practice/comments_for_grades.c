// importing HEADER FILE 
#include <stdio.h>

// MAIN function 
int main()
{

    // declaring CHARACTER variable
    char grade;

    // assinging value to the variable
    printf("Enter your grade: ");
    scanf("%c", &grade);

    // switch case for commenting to different grades
    switch(grade)
    {
        // if value of grade is A, first case is executed and rest of the statementes are skipped 
        case 'A':
            printf("Outstanding!!\n");
            break;

        // if value of grade is B, second case is executed and rest of the statementes are skipped 
        case 'B':
            printf("Excellent!!\n");
            break;

        // if value of grade is C, third case is executed and rest of the statementes are skipped 
        case 'C':
            printf("Well done!!\n");
            break;

        // if value of grade is D, fourth case is executed and rest of the statementes are skipped 
        case 'D':
            printf("You passed!!\n");
            break;

        // if value of grade is E, fifth case is executed and rest of the statementes are skipped 
        case 'E':
            printf("You should try harder!!\n");
            break;

        // if value of grade is F, sixth case is executed and rest of the statementes are skipped 
        case 'F':
            printf("Better try again!!\n");
            break;

        // if value of grade is anything other than A, B, C, D, E or F, default case is executed and rest of the statementes are skipped 
        default:
            printf("Invalid grade!!\n");
            break;
    }

    // DISPLAYING the result 
    printf("Your grade is %c\n", grade);
    return 0;
}