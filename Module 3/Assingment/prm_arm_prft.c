// C program to check prime, armstrong and perfect numbers using functions

#include <stdio.h>
#include <math.h>

int isPrm(int);
int isArm(int);
int isPrft(int);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(isPrm(num))
    printf("%d is Prime number.\n", num);
    else
    printf("%d is not Prime number.\n", num);

    if(isArm(num))
    printf("%d is Armstrong number.\n", num);
    else
    printf("%d is not Armstrong number.\n", num);
    
    if(isPrft(num))
    printf("%d is Perfect number.\n", num);
    else
    printf("%d is not Perfect number.\n", num);
    
    return 0;
}

int isPrm(int num)
{
    int i;
    for(i = 2; i <= num/2; i++)
    {
        if(num%i == 0)
        return 0;
    }
    return 1;
}

int isArm(int num)
{
    int ldigit, sum, oNum, digits;
    sum = 0;
    oNum = num;
    digits = (int) log10(num) + 1;

    while(num > 0)
    {
        ldigit = num % 10;
        sum = sum + round(pow(ldigit, digits));
        num = num / 10;
    }
    return (oNum == sum);
}

int isPrft(int num)
{
    int i, sum, n;
    sum = 0;
    n = num;
    for(i=1; i<n; i++)
    {
        if(n%i == 0)
        sum += i;
    }
    return (num == sum);
}

