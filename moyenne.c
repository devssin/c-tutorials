#include<stdio.h>
#include <stdbool.h>

int main(){
	int taille ;
	float notes[taille];
	float somme ;
	double moyenne;
	bool eliminatoire = false;
	printf("Donner le nombre des notes a saisir \n");
	scanf("%d",&taille);
	
	int i;
	somme =0;
	for(i = 0; i < taille ; i++){
		printf("Donner La note n%d \n",i+1);
		scanf("%f",&notes[i]);
		if(notes[i] == 0){
			eliminatoire = true;
		}
		somme += notes[i];
	}
	moyenne = somme / (float)taille;
	if(eliminatoire == false && moyenne >= 10 ){
		printf("Moyenne : %lf /t Vous etes Admis", moyenne);
	}else if(eliminatoire == false && moyenne < 10 ){
		printf("Moyenne : %lf \t Vous etes Redoublant", moyenne);	
	}else{
		printf("Vous etes elimine a cause d'une note eliminatoire");
	}
	return 0;
}
