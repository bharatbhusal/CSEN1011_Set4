// importing header file
#include <stdio.h>
// declaring another function
void printstmt();

// declaring main function
int main()
{
    printf("Main Functions!!\n");
    // calling another function
    printstmt();
    return 0;
}

// defining another function
void printstmt()
{
    printf("printstmt function!!\n");
}