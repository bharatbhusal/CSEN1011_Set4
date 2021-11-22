// importing header file.
#include <stdio.h>

// main function
int main()
{
    // declaring integer variable
    int a, b, c;
    // declaring character variable
    char ch;

    // assinging values to integer variables
    printf("Enter the value of A and B: ");
    scanf("%d %d", &a, &b);

    // assinging values to character variable 
    printf("Select Choice: \nA: A + B\nB: A - B\nC: A * B\nD: A / B\n");
    scanf(" %c", &ch);

    printf("***********\n");

    // switchnig to cases for different mathematical operations
    switch(ch)
    {
        // if value of ch is a then addition case is executed and rest of the statementes below this case is skipped
        case 'a':
            c = a + b;
            printf("%d + %d: %d\n", a, b, c);
            break;      //break skipps all statements below the line of the block or function

        // if value of ch is b then subtraction case is executed and rest of the statementes below this case is skipped
        case 'b':
            c = a - b;
            printf("%d - %d: %d\n", a, b, c);
            break;

        // if value of ch is C then multiplication case is executed and rest of the statementes below this case is skipped
        case 'c':
            c = a * b;
            printf("%d * %d: %d\n", a, b, c);
            break;

        // if value of ch is d then division case is executed and rest of the statementes below this case is skipped
        case 'd':
            c = a / b;
            printf("%d / %d: %d\n", a, b, c);
            break;

        // if value of ch is anything other than a, b, c or d, than the default case of switch function is executed and rest of the statements below this case is skipped 
        default:
            printf("Invalid Choice!!!\n");
            break;
    }

    return 0;
}