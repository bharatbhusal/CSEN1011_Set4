#include <stdio.h>
#include <math.h>

int fact(int);

int main()
{
    int i, x, j;
    float sum = 0;


    printf("Enter the number of terms:");
    scanf("%d", &i);

    printf("Enter the value of x:");
    scanf("%d", &x);

    for (j = 0; j < i; j++)
    {
        sum += (pow(-1, j)*pow(x, 2*j))/fact(2*j);
        printf("Sum%d : %f\n", j+1, sum);
        
    }
    printf("\n%f\n", sum);
    return 0;
}

int fact(int num)
{
    int a;
    int factorial = 1;
    
    for (a = 1; a<= num; a++)
    {
        factorial *= a;
    }
    return factorial;
}