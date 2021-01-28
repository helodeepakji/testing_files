#include <stdio.h>
#include <math.h>

int main() {
 int num, ori,a=0, rem, res = 0;
 
 printf("Enter Any Number:\n ");
 scanf("%d", &num);
 ori = num;


 while(ori != 0){
 rem = ori % 10;
 ori = ori/10;
 a++;
 } 
 
 rem=0;
 ori=num;
 
 //printf("%d",a);
 
 while(ori != 0){
 rem = ori % 10;
 res = res + pow(rem, a);
 ori = ori/10;
 }
 
 //printf("%d",res);
 
 if (res == num)
 printf("%d is an Armstrong number.", num);
 else
 printf("%d is not an Armstrong number.", num);
 
 return 0;
}