#include <stdio.h>
#include <string.h>

struct ref
{
    int data;
    char val;
    struct ref *link;
};

int main()
{
    struct ref object1;
    object1.link = NULL;
    object1.data = 10;
    object1.val = 20;
    struct ref object2;
    object2.link = NULL;
    object2.data = 30;
    object2.val = 40;
    object1.link = &object2;
    printf("%d\n", object1.link->data);
    printf("%d\n", object1.link->val);
    printf("%p\n", object1.link->link);
    return 0;
}