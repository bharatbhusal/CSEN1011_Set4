#include<stdio.h>

int main()
{
    int a, b, c, result;
    printf("Enter the values: ");
    scanf("%d %d %d", &a, &b, &c);
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d\n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d\n", result);
    result = (a == b) || (c > b);
    printf("(a == b) || (c > b) is %d\n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d\n", result);
    result = !(a != b);
    printf("!(a != b) is %d\n", result);
    result = !(a == b) || (c < b);
    printf("!(a == b) is %d\n", result);


}