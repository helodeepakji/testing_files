#include <stdio.h>

int main()
{
  int m;
  printf("Enter the Section no\n");
  scanf("%d",&m);
  switch(m)
  {
   case 1:
     printf("63");
     break;
    case 2:
     printf("76");
     break;
    case 3:
     printf("87");
     break;
    case 4:
     printf("61");
     break;
    case 5:
     printf("62");
     break;
    case 6:
     printf("64");
     break;
    case 7:
     printf("66");
     break;
    case 8:
     printf("56");
     break;
     default:
       printf("enter vald no");
  }
  return 0;
}