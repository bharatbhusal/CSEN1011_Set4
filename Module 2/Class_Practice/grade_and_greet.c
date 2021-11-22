#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Outstanding!!\n");
            break;

        case 'B':
            printf("Excellent!!\n");
            break;
        
        case 'C':
            printf("Well done!!\n");
            break;
        
        case 'D':
            printf("You passed!!\n");
            break;
        
        case 'E':
            printf("You should try harder!!\n");
            break;
        
        case 'F':
            printf("Better try again!!\n");
            break;
        
        default:
            printf("Invalid grade!!\n");
            break;
    }
    printf("Your grade is %c\n", grade);
    return 0;
}