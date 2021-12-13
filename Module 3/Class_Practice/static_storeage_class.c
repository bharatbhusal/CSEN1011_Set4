#include <stdio.h>


int funct()
{

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