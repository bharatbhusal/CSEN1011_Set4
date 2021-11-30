#include <stdio.h>
#include <stdio.h>

int main()
{
    float r1, r2;
    float a, b, c;

    printf("Enter coefficient of secd order of x in the equation: ");
    scanf("%d", &a);
    printf("Enter coefficient of first order of x in the equation: ");
    scanf("%d", &b);
    printf("Enter the cstant value of the equation: ");
    scanf("%d", &c);

    r1 = (- b + pow((pow(b, 2) - 4*a*c), 0.5))/(2*a); 
    r2 = (- b - pow((pow(b, 2) - 4*a*c), 0.5))/(2*a); 
    
    printf("The roots of the give equation are: %.2f and %.2d\n", r1, r2);
    return 0;
}