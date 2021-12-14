#include <stdio.h>

int main()
{
    int *a, *b, *c, x, y, z, ch;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &x, &y);
    a = &x;
    b = &y;
    c = &z;
    
    printf("Select Choice: \n\"+\": A + B\n\"-\": A - B\n\"*\": A * B\n\"/\": A / B\n");
    scanf(" %c", &ch);

    printf("***********\n");

    switch (ch)
    {
        case ('+'):
            c = *a + *b;
            printf("%d + %d: %d\n", *a, *b, c);
            break; 

        case ('-'):
            c = *a - *b;
            printf("%d - %d: %d\n", *a, *b, c);
            break; 

        case ('*'):
            c = *a * *b;
            printf("%d * %d: %d\n", *a, *b, c);
            break; 

        case ('/'):
            c = *a / *b;
            printf("%d / %d: %d\n", *a, *b, c);
            break; 

        default:
            printf("Invalid Choice!!!\n");
            break;
    }

    return 0;
}