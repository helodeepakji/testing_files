#include <stdio.h>

int prime(int a,int b);

int main() {
   int num , not = 0;
   printf("Enter the number:\n");
   scanf("%d",&num);
   not = prime(num,not);
   if(not == 0) {
      printf("%d is a prime number", num);
   }
}

int prime(int a,int b)
{
  
  for(int i=2 ; i <= a/2 ; i++) {
      if(a%i == 0) {
         printf("%d is not a prime number", a);
         b = 1;
         break;
      }
   }
   return b;
}