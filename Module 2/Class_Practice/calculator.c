// importing HEADER FILE.
#include <stdio.h>

// MAIN function
int main()
{
    // declaring INTEGER variable
    int a, b, c;
    // declaring CHARACTER variable
    char ch;

    // assinging values to INTEGER variables
    printf("Enter the value of A and B: ");
    scanf("%d %d", &a, &b);

    // assinging values to CHARACTER variable 
    printf("Select Choice: \nA: A + B\nB: A - B\nC: A * B\nD: A / B\n");
    scanf(" %c", &ch);

    printf("***********\n");

    // switchnig to cases for different MATHEMATICAL OPERATIONS
    switch(ch)
    {
        // if value of ch is a then ADDITION case is executed and rest of the statementes below this case is skipped
        case 'a':
            c = a + b;
            printf("%d + %d: %d\n", a, b, c);
            break;      //break skipps all statements below the line of the block or function

        // if value of ch is b then SUBTRACTION case is executed and rest of the statementes below this case is skipped
        case 'b':
            c = a - b;
            printf("%d - %d: %d\n", a, b, c);
            break;

        // if value of ch is C then MULTIPLICATION case is executed and rest of the statementes below this case is skipped
        case 'c':
            c = a * b;
            printf("%d * %d: %d\n", a, b, c);
            break;

        // if value of ch is d then DIVISION case is executed and rest of the statementes below this case is skipped
        case 'd':
            c = a / b;
            printf("%d / %d: %d\n", a, b, c);
            break;

        // if value of ch is anything other than a, b, c or d, than the DEFAULT case of switch function is executed and rest of the statements below this case is skipped 
        default:
            printf("Invalid Choice!!!\n");
            break;
    }

    return 0;
}

