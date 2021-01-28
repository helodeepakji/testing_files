#include <stdio.h>

int main()
{
  int n,x=0;
  int a=0,b=1;
  printf("Enter Any no: \n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    x=a+b;
    printf("%d",x);
    
  }
  
  return 0;
}