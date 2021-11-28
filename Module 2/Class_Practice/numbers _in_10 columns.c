// importing HEADER FILE 
#include <stdio.h>

// MAIN function 
int main()
{
    // declaring integer variables
    int num;
    int lineCount;

    // assinging values to the variables 
    printf("Enter an integer between 1 and 100: ");
    scanf("%d", &num);


    if (num > 100)
    {
        num = 100;
    }

    lineCount = 0;

    while (num > 0)
    {
        if (lineCount < 10)
        {
            lineCount++;
        }
        else
        {
            printf("\n");
            lineCount = 1;
        }
        printf("%4d", num--);
    }
    printf("\n");

    return 0;

}