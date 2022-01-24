#include <stdio.h>

double average (int size, int ary[*]);

int main()
{
  int size;
  double ave;
  

  printf("Size of the Array: ");
  scanf("%d", &size);
  int ary[size];

  for (int i = 0; i< size; i++)
  {
    printf("Enter number %2d: ", i+1);
    scanf("%d", &ary[i]);
  }
  ave = average(size, ary);

  printf("Average is: %.2lf\n", ave);
  return 0;
}

double average (int size, int ary[size])
{
  int sum = 0;
  double ave;

  for (int i = 0; i<size; i++)
  sum += ary[i];
  ave = (double)sum/size;
  return ave;
}