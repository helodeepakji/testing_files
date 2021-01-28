#include <stdio.h>

int pal(int b,int c);

int main()
{
  int a,c=0;
  printf("Enter the no: \n");
  scanf("%d",&a);
  c=pal(a,c);
 if(a==c)
 {
   printf(" %d is palindrome number",a);
 }else{
   printf(" %d is not palindrome number",a);
 } 
  return 0;
}

int pal(int b,int c)
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