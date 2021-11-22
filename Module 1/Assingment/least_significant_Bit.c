// importing header files
#include <stdio.h>

// main function
int main()
{
    // declaring integer variable
    int bit;

    // assinging value to the varialbe
    printf("The the Number: ");
    scanf("%d", &bit);

    // working on 2 possiblities
    if (bit & 1)
    {

        // if bit is set
        printf("The least significant bit is set(1).");
    }
    else
    {

        // if bit is not set
        printf("The least significant bit is not set(0).");
    }
    
    return 0;
}