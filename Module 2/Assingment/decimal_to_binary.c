#include <stdio.h>  
  
int main()  
{  
    long long num, bin = 0, rem = 0, place = 1;  
  
    printf("Enter a decimal number\n");  
    scanf("%llu", &num);  
  
    printf("\nBinary equivalent of %d is ", num);  
    while(num)  
    {  
        rem = num % 2;  
        num /= 2;  
        bin += (rem * place);  
        place *= 10;  
    }  
    printf("%llu\n", bin);  
  
    return 0;  
}  