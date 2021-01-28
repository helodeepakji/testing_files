#include <stdio.h>

int main()
{ char gen;
  int mar, age;
  printf("Please Enter Your Gender:- \n M for Male \n F for Female\n");
  scanf("%c",&gen);
  printf("Please Enter Your Gender:- \n 0 for Married \n 1 for Unmaried\n");
  scanf("%d",&mar);
  printf("Enter your age:-\n");
  scanf("%d",&age);
  
  if('f'==gen || gen=='F')
 {
   if(age >=18)
   {
     if(mar==1)
     {
         printf("you are eligible for marriage\n");
      }else{
         printf("you are not eligible for marriage\n");
      }
    }else{
     printf("your age is not valid \n");
   }
  }else if('m'==gen || gen=='M')
 {
   if(age >=22)
   {
     if(mar==1)
     {
         printf("you are eligible for marriage\n");
      }else{
         printf("you are not eligible for marriage\n");
      }
    }else{
     printf("your age is not valid \n");
   }
  }else{
    printf("unable to find your gender");
  }
  
  
  



  return 0;
}