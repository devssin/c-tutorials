#include<stdio.h>

int search(int arr[],int size, int n){
	int i;
	for(i = 0; i <size; i++){
		if(arr[i] == n){
			return 1;			
		}
	}
	return 0;
}
fillArray(int arr[],int size){
	int i;
	for(i =0; i < size; i++){
		printf("Donner le nombre %d: ", i+1);
		scanf("%d", &arr[i]);
	}
}

int main(){
	int taille, num;
	printf("Donner la taille du tableau: ");
	scanf("%d",&taille);
	int * numbers = calloc(taille, sizeof(int));
	fillArray(numbers, taille);
	printf("Rechercher un nombre: ");
	scanf("%d",&num);
	int exists = search(numbers, taille, num);
	if(exists == 0)
		printf("Le nombre n'existe pas dans ce tableau \n");
	else
		printf("Le nombre existe dans ce tableau \n");
	
	

	
	return 0;
}
