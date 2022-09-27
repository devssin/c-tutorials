#include<stdio.h>
#include<stdlib.h>
typedef struct  {
	int day;
	int month;
	int year;
} DateNaissance;

typedef struct  {
	char * nom;
	char * prenom;
	DateNaissance dateN;
	int age;
	
}Eleve;



int calcAge(int day, int month, int year){
	int presentDay = 16 ,presentMonth = 9 ,presentYear = 2022;
	if(month > presentMonth){
		return presentYear - year -1;
	}
	if(month == presentMonth && day > presentDay){
		return presentYear - year -1;
	}
	
	return year;
	
	
}



int menu(){
	
	int op;
	printf("================== Gestion des eleves =================== \n");
	printf("1- Ajouter des eleves : \t 2- Consulter La list des eleves : \n");
	printf("3- Trier les eleves par Nom: \t 4- Trier les eleves par age: \n");
	printf("5- Le plus petit eleve: \t 6- Le plus grand eleve: \n");
	printf("7- La moyennes d'ages du class: \t 8- Quitter \n\n");
	printf("Choisir une operation: ");
	scanf("%d",&op);
	
	return op;
}
int main(){
	
	int taille,i;
	printf("Donner le nombre des eleves a Inserer: ");
	scanf("%d", &taille);
	Eleve * arr = malloc(taille * sizeof(Eleve));
	for(i = 0 ; i < taille ; i++){
		arr[i].nom = malloc(40 * sizeof(char));
		arr[i].prenom = malloc(40 * sizeof(char));
		printf("Donner le nom d'eleve %d ", i+1);
		scanf("%s", arr[i].nom);
		printf("Donner le prenom de %s ", arr[i].nom);
		scanf("%s",arr[i].prenom);
		printf("Donner la date de naissance de %s %s - DD/MM/YYYY ",arr[i].nom, arr[i].prenom);
		scanf("%d/%d/%d",&arr[i].dateN.day,&arr[i].dateN.month, &arr[i].dateN.year);
	}
	
	for(i = 0 ; i < taille ; i ++){
		arr[i].age = calcAge(arr[i].dateN.day, arr[i].dateN.month,arr[i].dateN.year);
		printf("Age de %s %s: %d ans \n", arr[i].nom, arr[i].prenom, arr[i].age);
	}
	
	
	
}
