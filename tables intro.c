#include<stdio.h>

int main(){
	const SIZE = 10;
	
	int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
	int i ;
	for(i = 0; i < SIZE; i++){
		printf("%d ",numbers[i]);
	}
	return 0;
}
