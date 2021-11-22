// importing header files
#include <stdio.h>

// function that check pass or fail
int is_pass(int, int);

// main function
int main()
{

    // declaring floating variables
    float average, percentage;
    float total = 0;
    
    // declaring array of floating values
    float marks[5];

    // declaring integer variables
    int i;
    
    // assinging the values to the array.
    for (i = 0; i<5; i++)
    {
        printf("Enter the marks of Subject %c: ", i+65);
        scanf(" %f", &marks[i]);
        total += marks[i];
    }

    // line break
    printf("\n");

    // calculations
    average = total/5;
    percentage = (total/500)*100;

    // running is_pass function for each values in the array
    for (i = 0; i<5; i++)
    {
        is_pass(marks[i], i+65);
    }

    // displaying the results
    printf("\nTotal Full Marks: 500\nTotal Obtained Marks: %.2f\nAverage: %.2f\nPercentage: %.2f%%\n", total, average, percentage);
}

// function to check pass or fail
int is_pass(int mark, int subject)
{

    if (mark <60)
    {
        // display message if fail
        printf("You are fail in Subject %c\n", subject);
    }
    else
    {
        // display message if pass
        printf("You are pass in Subject %c\n", subject);
    }

    // returning 0 
    return 0;
}

