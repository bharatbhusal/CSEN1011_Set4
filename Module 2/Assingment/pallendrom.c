#include <stdio.h>

int main()
{
    int num;
    int i = 0;
    int temp;
    int r_num = 0;
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    while (num != 0)
    {
        temp = num %10;
        r_num = r_num * 10 + temp;
        num /= 10;

    }
    printf("%d", r_num);

    return 0;
}