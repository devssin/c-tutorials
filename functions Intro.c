#include<stdio.h>
void sayHi(char name[50]);
int main(){
	char nom[50];
	printf("Entrez votre nom \n");
	fgets(nom,50,stdin);
//	scanf("%s",&nom);
	sayHi(nom);
	return 0;
}
void sayHi(char name[50]){
	printf("Bonjour %s \n",name);
}


