//Maximim of two numbers

#include <stdio.h>

int maximum(int, int);

int main()
{
    int n1, n2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    result = maximum(n1, n2);
    printf("\nMaximum Number: %d\n", result);
    return 0;
}
int maximum(int n1,int n2)
{
    if(n1>n2)
    return n1;
    else
    return n2;
}