#include <stdio.h>

int sun(int b);

int main()
{
  int b,c;
  printf("Enter the number: \n");
  scanf("%d",&b);
  c = sun(b);
  printf("%d",c);
  return 0;
}

int sun(int b)
{ 
  int c,x=0;
  for(int a=0;b!=0;a++)
  {
    c=b%10;
    x=x+c;
    b=b/10;
  }
  

  return x;
}