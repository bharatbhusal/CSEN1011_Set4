#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the values: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("------------Results------------\n");
    printf("%d == %d is %d\n", a, b, a==b);
    printf("%d == %d is %d\n", a, c, a==c);
    printf("%d > %d is %d\n", a, b, a>b);
    printf("%d > %d is %d\n", a, c, a>c);
    printf("%d < %d is %d\n", a, b, a<b);
    printf("%d < %d is %d\n", a, c, a<c);
    printf("%d != %d is %d\n", a, b, a!=b);
    printf("%d != %d is %d\n", a, c, a!=c);
    printf("%d >= %d is %d\n", a, b, a>=b);
    printf("%d >= %d is %d\n", a, c, a>=c);
    printf("%d <= %d is %d\n", a, b, a<=b);
    printf("%d <= %d is %d\n", a, c, a<=c);
    return 0;
    
}
