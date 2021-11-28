// importing HEADER FILE 
#include <stdio.h>

// MAIN function 
int main()
{

    // declaring INTEGER variable
    int x;

    // assinging value to the variable 
    printf("Enter a number: ");
    scanf("%d", &x);

    // switch cases for DISPLAYING the input number 
    switch (x)
    {

        // if the value of x is 1, this case is executed and rest of the cases are skipped 
        case 1:
            printf("Choice is 1!\n");
            break;
        
        // if the value of x is 2, this case is executed and rest of the cases are skipped 
        case 2:
            printf("Choice is 2!\n");
            break;
        
        // if the value of x is 3, this case is executed and rest of the cases are skipped 
        case 3:
            printf("Choice is 3!\n");
            break;

        // if the value of x is 4, this case is executed and rest of the cases are skipped 
        case 4:
            printf("Choice is 4!\n");
            break;

        // if the value of x is anthing other than 1, 2, 3 or 4 this case is executed and rest of the cases are skipped 
        default:
            printf("The number is not 1, 2, 3 or 4!!\n");
            break;
    }


    return 0;
}