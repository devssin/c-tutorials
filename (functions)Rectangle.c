#include<stdio.h>
void rect(int lang, int larg){
	int i , j;
	for(i = 0; i < lang; i++){
		for(j = 0; j < larg; j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int langueur, largeur;
	printf("Donner La langueur \n");
	scanf("%d",&langueur);
	printf("Donner La largeur \n");
	scanf("%d",&largeur);
	rect(langueur, largeur);
	return 0;
	
}


