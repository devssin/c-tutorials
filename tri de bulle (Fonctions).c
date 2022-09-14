#include<stdio.h>
void swap(int * x, int * y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int size){
	int i, j;
	for(i =0; i < size -1; i++){
		for(j = 0; j < size - i - 1; j++){
			if(arr[j] < arr[j + 1]){
				swap(&arr[j],&arr[j + 1]);
			}
		}
	}
}

fillArray(int arr[],int size){
	int i;
	for(i =0; i < size; i++){
		printf("Donner le nombre %d: ", size+1);
		scanf("%d", &arr[size]);
	}
}

void printArray(int arr[],int size){
	int i;
	for(i = 0; i <size; i++){
		printf("%d, ",arr[i]);
	}
	
}


int main(){
	int taille ;
	printf("Donner la taille du tableau: ");
	scanf("%d", &taille);
	int * numbers = malloc(taille * sizeof(int));
	fillArray(numbers, taille);
	printf("\nAvant Tri: ");
	printArray(numbers, taille);
	bubbleSort(numbers,taille);
	printf("\nApres Tri: ");
	printArray(numbers,taille);
		
}
