#include<stdio.h>

int main()
{
int arr[] = {51,32,43,24,5,26};
int i;
for(i=0; i<=5; i++) 
{
  printf("\n%d %d %d %d",arr[i],*(i+arr),*(arr+i),i[arr]);
}
printf("\n");
return 0;
}