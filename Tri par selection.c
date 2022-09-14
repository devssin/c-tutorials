#include<stdio.h>
int main(){
	int numbers[] = {1,2,3,4,5,6,7,8,10,9};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int i,j,temp,min;
	
	for(i=0 ;i < size - 1; i++){
		min = i;
		for(j = i+1 ; j < size ; j++){
			
			if(numbers[j] < numbers[min]){
				min = j;	
			}
		}
		temp = numbers[i];
		numbers[i] = numbers[min];
		numbers[min] = temp;
		
	}
	
	for(i = 0 ; i < size ; i++){
		printf("%d ",numbers[i]);
	}

	
	
	
	return 0;
}
