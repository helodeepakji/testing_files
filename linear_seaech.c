#include <stdio.h>

int linearSearch(int arr[] , int size, int element){
	for(int i = 0;i < size;i++){
		if(arr[i] == element){
		return i+1;
		 }
	}
	
	return -1;
	}
	
	
int main()
{
	int arr[] = {121,32,45,6,12,86,99,74,45, 2637,717,223};
	int size = sizeof(arr)/sizeof(int);
	int element = 2637;
	int SearchIndex = linearSearch(arr,size,element);
	printf("The element is %d and index is %d\n",element,SearchIndex);
	return 0;
}
 
