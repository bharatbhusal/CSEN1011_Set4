// importing header files
#include <stdio.h>

// main function
int main()
{
    // declaring integer variables
    int hours, minutes, seconds;

    // assinging values to the variables
    printf("Enter the hours: ");
    scanf("%d", &hours);

    // calculations
    minutes = hours*60;
    seconds = hours*3600;

    // displaying the result
    printf("Given hours in:\nMinutes: %d \nSeconds: %d\n", minutes, seconds);
    
    return 0;
}