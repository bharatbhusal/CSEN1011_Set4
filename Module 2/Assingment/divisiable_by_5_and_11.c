#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    if (a % 5 == 0 && a % 11 == 0)
        printf("The number is exactly divisiable by both 5 and 11\n");
    else
        printf("The number is not divisiable by 5 and 11.\n");
    return 0;
}