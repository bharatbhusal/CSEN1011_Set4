#include <stdio.h>


int funct()
{
    // static storage class is called one time initalization class.
     static int count = 0;
     count ++;
     return count;

}

int main()
{
    printf("%d\n", funct());
    printf("%d\n", funct());
    printf("%d\n", funct());

    return 0;
}