#include <stdio.h>
#include <stdio.h>

int main()
{
    float r1, r2;
    float co_x, co_y, con;

    printf("Enter coefficient of x of the equation: ");
    scanf("%d", &co_x);
    printf("Enter coefficient of y of the equation: ");
    scanf("%d", &co_y);
    printf("Enter the constant value of the equation: ");
    scanf("%d", &con);

    r1 = (- co_y + pow(pow(co_y, 2) - 4*co_x*con, 0.5))/2*co_x; 
    r2 = (- co_y - pow(pow(co_y, 2) - 4*co_x*con, 0.5))/2*co_x; 
    
    printf("The roots of the give equation are: %.2f and %.2d\n", r1, r2);
    return 0;
}