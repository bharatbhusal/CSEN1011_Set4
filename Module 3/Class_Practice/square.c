#include <stdio.h>

int square(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The square of %d is %d\n",a, square(a));
    return 0;
}

int square(int x)
{
    return x*x;
}