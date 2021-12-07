#include <stdio.h>

int main()
{
    int num, temp, i;
    int sum = 0;

    printf("Enter the number:");
    scanf("%d", &num);
    for (i = 1; i<num; i++)
    {
        if (num %i == 0)
        {
            sum += i;
        }
    }
    
    if (sum == num)
    printf("Prefect Number!!\n");
    
    return 0;
    
}

//prefect number= sum of prefectly divisor of given number equal to the given number.