#include<stdio.h>
int main(){
	int x,i; 
	printf("Donner la taille du tableau: \n");
	scanf("%d",&x);
	int *tableauDynamic = malloc(x * sizeof(int));
	
	for(i = 0; i < x; i++){
		printf("Entrer le nombre %d ", i+1);
		scanf("%d", &tableauDynamic[i]);
	}
	
	for(i = 0 ; i < x; i++){
		printf("Nombre %d : %d \n", i+1, tableauDynamic[i]);
	}
	
	return 0;
}
