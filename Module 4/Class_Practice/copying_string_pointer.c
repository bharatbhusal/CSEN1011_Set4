#include<stdio.h>

int main()
{
    char *p = "hello world";
    printf("String p: %s\n", p);
    char *q;
    printf("Copying the content of p into q: \n");
    q = p;
    printf("String q: %s\n", q);
    return 0;
}