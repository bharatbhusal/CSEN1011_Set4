#include <stdio.h>

int main()
{
    int a, b, c;
    char ch;
    printf("Enter the value of A and B: ");
    scanf("%d %d", &a, &b);

    printf("Select Choice: \nA: A + B\nB: A - B\nC: A * B\nD: A / B\n");
    scanf(" %c", &ch);

    printf("***********\n");
    switch(ch)
    {
        case 97:
            c = a + b;
            printf("%d + %d: %d\n", a, b, c);
            break;

        case 98:
            c = a - b;
            printf("%d - %d: %d\n", a, b, c);
            break;

        case 99:
            c = a * b;
            printf("%d * %d: %d\n", a, b, c);
            break;

        case 100:
            c = a / b;
            printf("%d / %d: %d\n", a, b, c);
            break;

        default:
            printf("Invalid Choice!!!\n");
            break;
    }

    return 0;
}