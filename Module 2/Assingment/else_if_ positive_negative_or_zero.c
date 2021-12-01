#include <stdio.h>

int main()
{
    int a; 
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("%d is less than zero(negative).\n", a);
    }
    else if (a > 0)
    {
        printf("%d is greater than zero(Positive).\n", a);
    }
    else
    {
        printf("The numberis zero.\n");
    }
    return 0;
}