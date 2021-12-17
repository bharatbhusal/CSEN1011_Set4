#include <stdio.h>

int avg(int, int, int, int, int);

int main()
{
    int a, b, c, d, e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("The average of the given numbers is: %d\n", avg(a, b, c, d, e));
    return 0;
}

int avg(int w, int v, int x, int y, int z)
{
    int a;
    a = (w + v + x + y + z)/5;
    return a;
}