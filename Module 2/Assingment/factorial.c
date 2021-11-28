#include <stdio.h>

int main()
{
    int fact = 1;
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    while (a> 0)
    {
        fact *= a;
        a--;
    }

    printf("The factorial of the number is: %d\n", fact);
    return 0;
}