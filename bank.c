#include <stdio.h>

int main()
{
  int y,u;
  float x,a=0,i;

  printf("Enter The Amount of FD: \n");
  scanf("%f",&x);
  printf("Enter your Age\n");
  scanf("%d",&u);
  printf("Enter the number of day for FD :\n");
  scanf("%d",&y);
  
   if(30<y&&60>y)
  {
    i=(x*6)/100;
  }
   else if(61<y&&y<90)
  {
  i=(x*6.5)/100;
  }
  else if(91<y&&y<180)
  {
    i=(x*7)/100;
  }
  else if(181<y&&y<365)
  {
    i=(x*8)/100;
  }else
  {
    i=(x*8.5)/100;
  }
  
  if(x>50000&&u>60)
  {
    a=x/100;
  }
  printf("%f",x+i+a);
  
  return 0;
}