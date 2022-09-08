#include<stdio.h>
int main(){
	int n,fact,i;
	do{
		printf("Entrer un nombre positif \n");
		scanf("%d",&n);
		if(n < 0 ){
			printf("Le nombre doit etre positif \tRecommencer \n");	
		}	
	}while(n < 0);
	fact = 1;
	if(n != 0){
		for(i= n; i > 0 ; i-- ){
			fact *= i;
		}	
	}
	printf("le factorial de %d est : %d \n", n,fact);
	return 0;
}
