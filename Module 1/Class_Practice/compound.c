#include <stdio.h>

int main()
{
    int x, y;
    x = 10;
    y = 5;
    printf("x: %d | y: %d \n", x, y);
    printf("x *=y+2: %d \n", x*= y+2);
    printf("x is now: %d \n", x);

    x = 10;
    printf("x: %d | y: %d\n", x, y);
    printf("x/=y+1: %d\n", x/= y+1);
    printf("x is now: %d\n", x);

    x = 10;
    printf("x: %d | y: %d\n", x, y);
    printf("x%%=y-3: %d\n", x%= y-3);
    printf("x is now: %d\n", x);

    return 0;
}