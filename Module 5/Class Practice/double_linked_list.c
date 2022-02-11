#include <stdio.h>
// #include <conio.h>
struct ref
{
    int data;
    struct ref *previous;
    struct ref *next;
};

int main()
{
    struct ref object1;
    object1.previous = NULL;
    object1.next = NULL;
    object1.data = 10;
    struct ref object2;
    object2.previous = NULL;
    object2.next = NULL;
    object2.data = 20;
    struct ref object3;
    object3.previous = NULL;
    object3.next = NULL;
    object3.data = 30;
    object1.next = &object2;
    object2.next = &object3;
    object2.previous = &object1;
    object3.next = &object2;
    object3.previous = &object2;
    printf("%d\t", object1.data);
    printf("%d\t", object1.next->data);
    printf("%d\n", object1.next->next->data);
    printf("%d\t", object2.previous -> data);
    printf("%d\t", object2.data);
    printf("%d\n", object2.next->data);
    printf("%d\t", object3.previous->previous->data);
    printf("%d\t", object3.next -> data);
    printf("%d\n", object3.data);
    return 0;
}