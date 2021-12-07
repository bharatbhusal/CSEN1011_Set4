#include <stdio.h>
#include <math.h>

int main()
{
    float r1, r2;
    float a, b, c;
    float dis;

    printf("Enter coefficient of second order of x in the equation: ");
    scanf("%f", &a);
    printf("Enter coefficient of first order of x in the equation: ");
    scanf("%f", &b);
    printf("Enter the constant value of the equation: ");
    scanf("%f", &c);
    
    dis = pow(b, 2) - 4*a*c;
    r1 = (- b + sqrt(dis))/(2*a); 
    r2 = (- b - sqrt(dis))/(2*a); 

    if (dis >= 0)
    {
        printf("The real roots of the give equation are: %.2f and %.2f\n", r1, r2);
    }
    else 
    {
        printf("The roots of the given equation are imaginary.\n");
    }
    return 0;
}