#include <stdio.h>

int main()
{
    char s[10];
    printf("Enter the string: \n");
    fgets(s, 10, stdin);
    printf("You entered: %s\n", s);
    return 0;
}