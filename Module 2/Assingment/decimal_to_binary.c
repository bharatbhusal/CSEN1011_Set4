#include <stdio.h>  
  
int main()  
{  
    int num, bin = 0, rem = 0, place = 1;  
  
    printf("Enter a decimal number: ");  
    scanf("%d", &num);  
  
    printf("\nBinary equivalent of %d is ", num);  
    while(num)  
    {  
        rem = num % 2;  
        num /= 2;  
        bin += (rem * place);  
        place *= 10;  
    }  
    printf("%d\n", bin);  
  
    return 0;  
}  