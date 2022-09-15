#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i,j, taille,  op ;
	
	printf("Donner le nombre des personnes a saisir ");
	scanf("%d",&taille);
	
	struct Person {
		char * name;
		int age;
	};
	struct Person * persons = malloc(taille * sizeof(struct Person));
	
	for(i = 0; i < taille; i++){
		persons[i].name = malloc(40);
		printf("Entrer le nom du personne %d \n",i+1);
		scanf("%s",persons[i].name);
		printf("Entrer l'age de %s ",persons[i].name);
		scanf("%d", &persons[i].age);
		
	}
	for(i =0; i<taille; i++){
		printf("Personne %d : %s \t%d \n",i+1, persons[i].name, persons[i].age);
	}
	
	do {
		printf("Pour Trier les personnes par nom Tappez 1 \n Pour Trier les personnes par age Tappez 2 \n ");
		scanf("%d",&op);
		switch(op){
			case 1:
				for(i = 0; i < taille; i++){
					for(j = 0; j < taille -1; j++){
						int cmp = strcmp(persons[j].name , persons[j+1].name);
						if(cmp == 1){
							struct Person temp = persons[j];
							persons[j] = persons[j + 1];
							persons[j + 1] = temp;
						}		
					}
				} 
				break;
			case 2:
				for(i = 0; i < taille ; i++){
					for(j = 0 ; j < taille - 1;j++){
					if(persons[j].age > persons[j + 1].age){
						struct Person temp = persons[j];
						persons[j] = persons[j + 1];
						persons[j + 1] = temp;
					}
				}
				break;
			default:
				printf("Choix invalid Recommancer \n");	
				break;
		
			}
		}
				
	}while(op != 1 && op != 2);	
	
	
	for(i =0; i<taille; i++){
		printf("Personne %d : %s \t%d \n",i+1, persons[i].name, persons[i].age);
	}
	
	return 0;	
}
