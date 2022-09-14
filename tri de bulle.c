#include<stdio.h>
void swap(int * a ,int * b){
	int temp = *a;
	*a = *b;
	*b = temp;

}
int main(){
	int taille, i ,j, temp;
	printf("Entrer la taille du tableau: ");
	scanf("%d",&taille);
	int * numbers = malloc(taille * sizeof(int));
	for(i = 0; i < taille; i++){
		printf("Entrer le nombre %d ", i+1);
		scanf("%d", &numbers[i]);
	}	
	for(i = 0; i < taille ; i++){
		for(j = 0 ; j < taille  - 1 ; j++){
			if(numbers[j + 1]  < numbers[j]){
				swap(&numbers[j+1],&numbers[j]);
			}
		}
	}
	for(i = 0 ; i < taille; i++){
		printf("Nombre %d : %d \n", i+1, numbers[i]);
	}
	return 0;
}
