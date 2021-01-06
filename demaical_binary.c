#include <stdio.h>


int main() {
    int n,b;
    int arr[100], i=0;
    printf("Enter a decimal number: \n");
    scanf("%d", &n);
    while(n!=0){
      b=n%2;  
      n=n/2;
      arr[i] = b; 
      printf("%d",arr[i]);
     i++;
    }
 
    printf("\n result is :- \n");
      
    for(int a = i-1; a >= 0 ;a--){ 
       arr[100];
     printf("%d",arr[a]);
    }
 
    return 0;
}

