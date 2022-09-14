#include<stdio.h>
void swap(int * x, int * y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void insertionSort(int arr[], int size){
	int i, j, current;
	for(i =0; i < size ; i++){
		current = arr[i];
		j = i;
		while(j >=  1 && arr[j -1] > current){
			arr[j] = arr[j-1];
			j--;	
		}
		arr[j] = current;
		
	}
}

fillArray(int arr[],int size){
	int i;
	for(i =0; i < size; i++){
		printf("Donner le nombre %d: ", i+1);
		scanf("%d", &arr[i]);
	}
}

void printArray(int arr[],int size){
	int i;
	for(i = 0; i <size; i++){
		printf("%d, ",arr[i]);
	}
	
}
int main(){
	int taille, i, j;
	printf("Donner la taille du tableau: ");
	scanf("%d", &taille);
	
	int * numbers = malloc(taille * sizeof(int));
	fillArray(numbers, taille);
	printf("\nAvant Tri: ");
	printArray(numbers, taille);
	insertionSort(numbers,taille);
	printf("\nApres Tri: ");
	printArray(numbers,taille);

}
