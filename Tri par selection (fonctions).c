#include<stdio.h>

void swap(int a ,int b){
	int temp = a;
	a = b; 
	b = temp;
	
}

void sort(int arr[],int size){
	int i , j, min, temp;
	for(i=0 ;i < size - 1; i++){
		min = i;
		for(j = i+1 ; j < size ; j++){
			
			if(arr[j] < arr[min]){
				min = j;	
			}
		}
		swap(arr[i], arr[min]);
		
	}
}

void printArray(int arr[],int size){
	int i ;
	for(i =0; i < size; i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int nombres[] = {0, 32, 231, 2331, 21, 5647,321};
	int size = sizeof(nombres) / sizeof(int);
	printf("%d \n",size);
	sort(nombres, size);
	printArray(nombres, size);
	
	return 0;
}
