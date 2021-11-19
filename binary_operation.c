#include <stdio.h>

int main()
{
    int a = 17;
    int b = 5;
    float x = 17.67;
    float y = 5.1;
    printf("Integral calulations\n");
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n\n", a, b, a%b);
    printf("Floating-point calculations\n");
    printf("%.2f + %.2f = %.2f\n", x, y, x+y);
    printf("%.2f - %.2f = %.2f\n", x, y, x-y);
    printf("%.2f * %.2f = %.2f\n", x, y, x*y);
    printf("%.2f / %.2f = %.2f\n", x, y, x/y);
    return 0;
}