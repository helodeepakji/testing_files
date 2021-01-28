#include <stdio.h>


int main()
{ char i;

  int a,b;
 
  printf("+ for Add ,- for Sub ,* for multi, other for divide \n"); 
  scanf("%c",&i);
  
   printf("Enter Two Number\n");
   scanf("%d%d",&a,&b);
  
  
  if(i=='+'){

    printf(" the sum is %d",a+b);
  }else if(i=='-'){
    
    printf("the sub is %d",a-b);
  }else if(i=='*'){
    
    printf("the mult is %d",a*b);
  }else{
    
    printf("the divide is %d",a/b);
  }
  
  
  
   return 0;
}