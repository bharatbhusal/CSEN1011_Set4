#include<stdio.h>
int main()
{
    // Right Shift
    int num = 212, i;
    for (i= 0; i<=2; ++i)
    {
        printf("Right Shift by %d: %d\n", i, num>>i);
    }
    printf("\n");
    
    // Left Shift
    for (i = 0; i<= 2; i++)
    {
        printf("Left Shift by %d: %d\n", i, num<<i);
    }
    return 0;
}