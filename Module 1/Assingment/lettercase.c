// importing header files
#include <stdio.h>


// main funtion
int main()
{

    // declaring character variable
    char a;

    // assinging value to the variable
    printf("Enter a character: ");
    scanf("%c", &a);

    // calculations
    a -= 32;

    // displaying the result
    printf("The \"%c\" in uppercase is \"%c\"\n", (a+32), a);

    return 0;
}