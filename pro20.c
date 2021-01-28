#include <stdio.h>

int main()
{
  char x;
  int a,age;
  printf("Enter Your Gender M for Male F for Female\n");
  scanf("%c",&x);
  printf("Enter 1 for Married 0 for Unmarried \n");
  scanf("%d",&a);
  printf("Enter you age\n");
  scanf("%d",&age);
   
  
  if(x=='f'||x=='F'){
    if(a == 0)
    {
      if(age >= 25){
      printf("you are eligible for this job");
      }else{
        printf("you are age less than 25 ");
      }
    }else{
      printf("only for Unmarried\n");
    }
  }else if(x=='m'||x=='M'){
    if(a == 1)
    {
      if(age >= 30){
      printf("you are eligible for this job");
      }else{
        printf("you are age less than 30 ");
      }
    }else{
      printf("only for married\n");
    }
  }else{
    
    printf("unable to find your gender");
  }
 
  
  
  return 0;
}