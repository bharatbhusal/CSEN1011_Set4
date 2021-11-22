// importing header file
#include <stdio.h>

// main function
int main()
{
    // declaring integer variables
    int a, b, temp;

    // assinging values to the variables
    printf("Enter the value to store in a: ");
    scanf("%d", &a);
    printf("Enter the value to store in b: ");
    scanf("%d", &b);

    // displaying the values of variables
    printf("Before swap\na = %d\nb = %d\n", a, b);

    // swapping values
    // saving value of variable a in temp integer variable
    temp = a;

    // saving value of variable b in a integer variable
    a = b;

    // saving value of variable temp in b integer variable
    b = temp;

    // displaying result
    printf("After swap\na = %d\nb = %d\n", a, b);
    
    return 0;
    
}