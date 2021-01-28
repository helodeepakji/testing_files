#include<stdio.h>
int main()
{
  int x,y;
    printf("Enter the marks in X and Y : \n");
    scanf("%d%d",&x,&y);
  if((x>=65&&y>=55)||(x<65&&x>=55&&y>=65))
    printf("Your are passed\n");
  else if(x>=75&&y<=55)
    printf("You have to appear in Re-exam for subject Y\n");
  else
    printf("You are failed,better luck next time\n");
return 0;
} 