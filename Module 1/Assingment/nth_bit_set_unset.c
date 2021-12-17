// importing header files
#include <stdio.h>

// main function
int main()
{

    // declaring integer varialbes
    int num, n;

    // assinging values to the varibles
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Enter which bit to check: ");
    scanf("%d", &n);

    // working with cases
    if (num>>(n)&1)
    {
        // if bit is set
        printf("The %dth bit is set(1).\n", num>>n);
    }
    else
    {
        // if bit is not set
        printf("The %dth bit is not set(0).\n", n);
    }
    
    return 0;    
}