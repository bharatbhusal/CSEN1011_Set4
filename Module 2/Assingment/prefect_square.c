#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter the number:");
    scanf("%d", &num);

    for (i = 1; i<= num/2; i++)
    {
        if (i*i == num)
        {
            printf("Prefect Square Number!!\n%d is the square of %d.\n", num, i);
            break;
        }
    }
}