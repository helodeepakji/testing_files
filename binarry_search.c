#include <stdio.h>

	
	 int BinearySearch(int arr[], int size,int element) {
	int low, mid , high;
	low = 0;
	high = size -1;
	
	 while (low <= high) { 
		// mid = low + (high - low) / 2;
		mid = (low + high)/2;
	 if (arr[mid] == element){
	 return mid;
	 }
	 if (arr[mid] < element){
	 	 low = mid + 1;
	 	 }
	 else {
	 	high = mid - 1;
	 	}
	 	 }
	 return -1;
   } 

	
	
int main()
{
	int arr[] = {12,32,45,56,82,86,99,114,214};
	int size = sizeof(arr)/sizeof(int);
	int element = 82;
	int SearchIndex = BinearySearch(arr,size,element);
	printf("The element is %d and index is %d\n",element,SearchIndex+1);
	return 0;
}
 
