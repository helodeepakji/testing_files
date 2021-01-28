#include<stdio.h>

int main(){
int a,b,c;
printf("enter the value of a : ");
scanf("%d",&a);
printf("enter the value of b : ");
scanf("%d",&b);
printf("enter the value of c : ");
scanf("%d",&c);
if(a<b){
    if(a<c){
        printf("%d is the smallest ",a);
    }else{
        printf("%d is the smallest ",c);
    }
}
if(b<a){
    if(b<c){
        printf("%d is the smallest",b);
    }else{
        printf("%d is the smallest",c);
    }
}
return 0;

}
