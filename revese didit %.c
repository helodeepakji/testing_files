#include <stdio.h>

int res(int b,int c);

int main()
{
  int a,c=0;
  printf("Enter the no: \n");
  scanf("%d",&a);
  c=res(a,c);
  printf("The reverse no is %d\n",c);
  return 0;
}

int res(int b,int c)
{
  int x;
  while(b!=0)
  {
    x=b%10;
    c=c*10+x;
    b=b/10;
  }
  
  return c;
}