#include <stdio.h>

int sum(int, int);

int main()
{
    int a = 10;
    int b = 20;
    printf("Sum: %d\n", sum(a, b));
    return 0;
}


int sum(int x, int y)
{
    return x+y;
}