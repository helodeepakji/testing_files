#include <stdio.h>
int fact(int n);
int main()
{
  int n,x;
  printf("Enter the number: \n");
   scanf("%d",&n);
  x = fact(n);
  printf("The factorial of %d is %d",n,x);
  
  return 0;
}

int fact(int n)
{
  int a=1;
  for(int i = 0;n!=0;i++)
  {
    a=a*n;
    n-=1; 
  }
  return a;
}