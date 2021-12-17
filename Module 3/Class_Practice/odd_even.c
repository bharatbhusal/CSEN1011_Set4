#include <stdio.h>

int check(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (check(a) == 0)
    printf("The number is Even!\n");
    else
    printf("The number is Odd!\n");
    return 0;
}

int check(int x)
{
    return x % 2;

}