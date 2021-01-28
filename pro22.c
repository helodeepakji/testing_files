#include <stdio.h>

int main()
{ 
  char x;
  int c,b,a;
  printf("+ for Add \n- for sub \n* for multi \n/ for divide \n");
  scanf("%c",&x);
  switch(x)
  {
  case '+':  printf("Enter two number\n");
           scanf("%d%d",&a,&b);
           c=a+b;
           printf("result is %d",c);
           break;
           
  case '-': printf("Enter two number\n");
           scanf("%d%d",&a,&b);
           c = (a-b);          
           printf("result is %d",c);
           break;
         
  case '*': printf("Enter two number\n");
           scanf("%d%d",&a,&b);
           c = (a*b);
           printf("result is %d",c);
           break;
  case '/':printf("Enter two number\n");
           scanf("%d%d",&a,&b);
           c = (a/b);
           printf("result is %d",c);
           break;
 default: printf("Enter vaild number");
 }              
  return 0;
}