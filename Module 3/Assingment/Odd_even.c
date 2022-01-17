//Odd Even numbers in range
#include<stdio.h>

void even_numbers(int l_limit,int u_limit);
void odd_numbers(int l_limit,int u_limit);

int main()
{
    int l_limit,u_limit;
    
    printf("Enter lower and upper limit values to display even and odd numbers: ");
    scanf("%d %d",&l_limit,&u_limit);
    
    even_numbers(l_limit,u_limit);
    printf("\n");
    odd_numbers(l_limit,u_limit);
    printf("\n");
    return 0;
}

void even_numbers(int l_limit,int u_limit)
{
    int i;
    printf("\nEven Numbers: \n");

    for(i=l_limit;i<=u_limit;i++)
    if(i%2==0)
    printf("%d, ",i);
}

void odd_numbers(int l_limit,int u_limit)
{
    int i;
    printf("\nOdd Numbers: \n");

    for(i=l_limit;i<=u_limit;i++)
    if(i%2!=0)
    printf("%d, ",i);
}