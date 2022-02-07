#include <stdio.h>

int main()
{
    char *p = "Hello world";
    printf("Before Assigning: %s\n", p);
    p = "Helloooo there";
    printf("After Assigning: %s\n", p);
    return 0;
}