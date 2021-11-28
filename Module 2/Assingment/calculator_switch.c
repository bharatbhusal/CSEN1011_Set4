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
    printf("Select Choice: \n\"+\": A + B\n\"-\": A - B\n\"*\": A * B\n\"/\": A / B\n");
    scanf(" %c", &ch);

    printf("***********\n");

    // switchnig to cases for different MATHEMATICAL OPERATIONS
    switch(ch)
    {
        // if value of ch is + then ADDITION case is executed and rest of the statementes below this case is skipped
        case '+':
            c = a + b;
            printf("%d + %d: %d\n", a, b, c);
            break;      //break skipps all statements below the line of the block or function

        // if value of ch is - then SUBTRACTION case is executed and rest of the statementes below this case is skipped
        case '-':
            c = a - b;
            printf("%d - %d: %d\n", a, b, c);
            break;

        // if value of ch is * then MULTIPLICATION case is executed and rest of the statementes below this case is skipped
        case '*':
            c = a * b;
            printf("%d * %d: %d\n", a, b, c);
            break;

        // if value of ch is / then DIVISION case is executed and rest of the statementes below this case is skipped
        case '/':
            c = a / b;
            printf("%d / %d: %d\n", a, b, c);
            break;

        // if value of ch is anything other than +, -, *, / than the DEFAULT case of switch function is executed and rest of the statements below this case is skipped 
        default:
            printf("Invalid Choice!!!\n");
            break;
    }

    return 0;
}