#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    printf("Enter your subject: ");
    gets(name);
    printf("Your subject is: ");
    puts(name);
    return 0;
}