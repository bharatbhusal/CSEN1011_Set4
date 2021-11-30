#include <stdio.h>

int main()
{
    int a;


    printf("Enter the number: ");
    scanf("%d", &a);

    switch (a>0)
    {
        case 0:
            switch (a = 0)
            {
                case 0:
                    printf("The number is Less than zero(negative)!!\n");
                    break;
                case 1:
                    printf("The number is equal to zero(0)!!\n");
                    break;
            }
            break;
        case 1:
            printf("The number is greater than zero(Positive)!!\n");
            break;
        default:
            printf("Invalid nummber.\n");
            break;
    }

    return 0;
}

//wrong!!