#include<stdio.h>
#include <stdlib.h>
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
void insertionSort(int arr[], int size){
	int i, j, current;
	for(i =0; i < size ; i++){
		current = arr[i];
		j = i;
		while(j > 0 && arr[j -1] > current){
			arr[j] = arr[j-1];
			j--;	
		}
		arr[j] = current;
		
	}
}
int main(){
	
	int high, low , mid , taille, num;
	printf("Donner la taille du tableau: ");
	scanf("%d", &taille);
	int * numbers = malloc(taille * sizeof(int));
	
	fillArray(numbers, taille);
	insertionSort(numbers, taille);
	printArray(numbers, taille);
	printf("\nDonner le nombre a rechercher: ");
	scanf("%d",&num);
	low = 0;
	high = taille - 1;
	int exists = 0;
	while(low <= high){
		mid = low + (high - low) / 2;
		if(numbers[mid] == num){
			exists = 1;
			break;
		}
		else if(numbers[mid] > num){
			high = mid - 1;
		}else{
			low = mid + 1;
		}	
	}
	
	if(exists == 0)
		printf("Le nombre n'existe pas dans ce tableau \n");
	else
		printf("Le nombre existe dans ce tableau \n");
	
	
	
	
	return 0;
}
