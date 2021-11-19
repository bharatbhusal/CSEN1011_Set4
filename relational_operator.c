#include<stdio.h>
int is_equal(float, float);
int is_not_equal(float, float);
int is_greater(float, float);
int is_less(float, float);
int is_less_equal(float, float);
int is_greater_equal(float, float);
int main()
{
    float a, b, c;
    printf("Enter the values: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("----------Results:------------\n");
    is_equal(a, b);
    is_not_equal(a, b);
    is_equal(a, c);
    is_not_equal(a, c);
    is_greater(a, b);
    is_greater_equal(a, b);
    is_greater(a, c);
    is_greater_equal(a, c);
    is_less(a, b);
    is_less_equal(a, b);
    is_less(a, c);
    is_less_equal(a, c);
    return 0;

}

// Use of >
int is_greater(float x, float y)
{
    if (x>y)
    {
        printf("%.2f > %.2f is 1\n", x, y);
    }
    else
    {
        printf("%.2f > %.2f is 0\n", x, y);
    }
}

// Use of >=
int is_greater_equal(float x, float y)
{
    if (x>=y)
    {
        printf("%.2f >= %.2f is 1\n", x, y);
    }
    else
    {
        printf("%.2f >= %.2f is 0\n", x, y);
    }
}

// Use of <
int is_less(float x, float y)
{
    if (x<y)
    {
        printf("%.2f < %.2f is 1\n", x, y);
    }
    else
    {
        printf("%.2f < %.2f is 0\n", x, y);
    }
}

// Use of <=
int is_less_equal(float x, float y)
{
    if (x<=y)
    {
        printf("%.2f <= %.2f is 1\n", x, y);
    }
    else
    {
        printf("%.2f <= %.2f is 0\n", x, y);
    }
}

// Use of ==
int is_equal(float x, float y)
{
    if (x==y)
    {
        printf("%.2f == %.2f is 1\n", x, y);
    }
    else
    {
        printf("%.2f == %.2f is 0\n", x, y);
    }
}

// Use of !=
int is_not_equal(float x, float y)
{
    if (x!=y)
    {
        printf("%.2f != %.2f is 1\n", x, y);
    }
    else
    {
        printf("%.2f != %.2f is 0\n", x, y);
    }
}