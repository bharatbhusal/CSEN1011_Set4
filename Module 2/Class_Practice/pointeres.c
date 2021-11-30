#include <stdio.h>

int main()
{
    int *ptr;
    int *q;
    int a;
    
    a = 6;
    ptr = &a;
    q = NULL;


    printf("Size of pointer valiable: %d\n", sizeof(ptr));
    printf("Address stored in pointer variable: %p\n", ptr);
    printf("Value stored in address that is stored in pointer variable: %d\n", *ptr);
    printf("Address of integer variable: %p\n", &a);
    printf("Value of integer variable: %d\n", a);
    printf("Address of pointer variable: %p\n", &ptr);
    printf("%p\n", q);

    return 0;
}