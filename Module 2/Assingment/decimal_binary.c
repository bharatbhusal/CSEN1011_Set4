#include <stdio.h>

int main()
{
    int num;
    int i = 0;
    int bin[32] = {};
    int temp, j;

    printf("Enter the number:");
    scanf("%d", &num);

    while (num > 0)
    {
        temp = num % 2;
        bin[32-i] = temp;
        num /= 2;
        i++;
    }

    for (i = 0; i<=32; i++)
    {
        printf("%d", bin[i]);
    }
    printf("\n");
    return 0;
}