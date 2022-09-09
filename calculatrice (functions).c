#include<stdio.h>
#include<stdbool.h>

int sum(int a, int b){
	return a + b;
}
int difference(int a, int b){
	return a - b;
}
int product(int a, int b){
	return a * b;
}
float divider(int a, int b){
	
	return (float)a / (float)b;
}
int main(){
	int num1 , num2, operation, choix;
	bool repeter;
	
	do{
		printf("Veuillez choisir une operation \n1 Addition \t2 Soustraction \t3 Multiplication \t4 Division \n");
		scanf("%d",&operation);
		
		switch(operation){
			case 1 :
				printf("Entrer la valeur du premier nombre: ");
				scanf("%d",&num1);
				printf("Entrer la valeur du deusieme nombre: ");
				scanf("%d",&num2);
				printf("%d + %d = %d \n",num1 , num2, sum(num1, num2));
				break;
			case 2:
				printf("Entrer la valeur du premier nombre: ");
				scanf("%d",&num1);
				printf("Entrer la valeur du deusieme nombre: ");
				scanf("%d",&num2);
				printf("%d - %d = %d \n",num1 , num2, difference(num1, num2));
				break;
			case 3 : 
				printf("Entrer la valeur du premier nombre: ");
				scanf("%d",&num1);
				printf("Entrer la valeur du deusieme nombre: ");
				scanf("%d",&num2);
				printf("%d * %d = %d \n",num1 , num2, product(num1, num2));
				break;
			case 4 :
				printf("Entrer la valeur du premier nombre: ");
				scanf("%d",&num1);
				printf("Entrer la valeur du deusieme nombre: ");
				scanf("%d",&num2);
				if(num2 == 0){
					printf("Impossible de diviser par 0 \n");
					return;
				}
				printf("%d / %d = %f \n",num1 , num2, divider(num1, num2));
				break;
			default:
				printf("Choix Invalid");
				break;
		}
		
		printf("\n1- Ressayer \t 2- Quitter");
		scanf("%d",&choix);
		if(choix == 2){
			printf("Au revoir");
			repeter = false;
		}else{
			repeter = true;
		}
	}while(repeter == true);
}


