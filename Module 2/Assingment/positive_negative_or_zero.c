#include <stdio.h>

int main()
{
    int a;
    char s;

    printf("Enter the number: ");
    scanf("%d", &a);

    if (a < 0) s = 'n';
    else if (a > 0) s = 'p';
    else if (a == 0) s = 'z';

    switch (s)
    {
        case 'n':
            printf("The number is Less than zero(negative)!!\n");
            break;
        case 'p':
            printf("The number is greater than zero(Positive)!!\n");
            break;
        case 'z':
            printf("The number is equal to zero(0)!!\n");
            break;
        default:
            printf("Invalid nummber.\n");
            break;
    }

    return 0;
}

//wrong!!