#include <stdio.h>

int swap(int a,int b);

int main()
{
  int a,b;
  printf("Enter a and b\n");
  scanf("%d%d",&a,&b);
  swap(a,b);
   return 0;
}

int swap(int a,int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("a is %d and b is %d",a,b);
}