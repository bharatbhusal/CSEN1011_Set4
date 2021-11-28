#include <stdio.h>

int main()
{
    int counter;
    int largestValue;
    printf("Enter largest value: ");
    scanf("%d", &largestValue);

    for (counter = 1; counter<= largestValue; counter++)
    {
        printf("%d\n", counter);
    }
    return 0;

    
    
}