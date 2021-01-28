#include <stdio.h>

int main()
{
  int d;
 float a,b,c;
  printf("Find The Area:- \n 1 for Circle \n 2 for Triangle \n 3 for Rectrangle \n 4 for Square \n");
  scanf("%d",&d);
  switch(d)
  {
   case 1: printf("Enter the radius of circle \n");
           scanf("%f",&a);
           c= (3.14*a*a);
           printf("Area of circle is %f",c);
           break;
    case 2: printf("Enter the hight and base of triangle \n");
           scanf("%f%f",&a,&b);
           c= (0.5*b*a);
           printf("Area of triangle is %f",c);
           break;  
    case 3: printf("Enter the lenght and breath of Rectrangle \n");
           scanf("%f%f",&a,&b);
           c= (a*b);
           printf("Area of Rectangle is %f",c);
           break;          
    case 4: printf("Enter the side of square \n");
           scanf("%f",&a);
           c= (a*a);
           printf("Area of square is %f",c);
           break;
           
  default : printf("Enter vaild number");
    
    
  }
  return 0;
}