//Strong Numbers in given interval using functions

#include <stdio.h>

long long fact(int);
void prtStNum(int, int);
int main()
{
    int strt, ed;
    printf("Enter the lower limit: ");
    scanf("%d", &strt);
    printf("Enter the upper limit: ");
    scanf("%d", &ed);
    printf("All strong numbers between %d to %d: \n", strt, ed);
    prtStNum(strt, ed);
    return 0;
}


void prtStNum(int strt, int ed)
{
    long long sum;
    int num;
    
    while(strt != ed)
    {
        sum = 0;
        num = strt;
    
    while(num != 0)
    {
        sum += fact(num % 10);
        num /= 10;
    }
    
    if(strt == sum)
    {
        printf("%d, ", strt);
    }
    strt++;
    }
    printf("\n");
}

long long fact(int a)
{
    int fact = 1;
    while (a> 0)
    {
        fact *= a;
        a--;
    }
    return fact;

}