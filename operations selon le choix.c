#include<stdio.h>
int main(){
	int a, b, choix;
	float resultat;
	
	printf ("Entrer La valeur de A \n");
	scanf("%d",&a);
	printf ("Entrer La valeur de B \n");
	scanf("%d",&b);
	printf ("Choisir une Opperation: \n");
	printf("- Pour l'addition , tappez 1 \n");
	printf("- Pour la soustraction , tappez 2 \n");
	printf("- Pour la multiplication  , tappez 3 \n");
	printf("- Pour la division , tappez 4 \n");
	scanf("%d",&choix);
	switch(choix){
		case 1:
			resultat = a + b;
			printf("%d + %d = %f \n", a,b, resultat );
			break;
		case 2:
			resultat = a - b;
			printf("%d - %d = %f \n",a, b,resultat );
			break;
		case 3:
			resultat = a * b;
			printf("%d x %d = %f \n",a, b,resultat );
			break;
		case 4:
			resultat = (float)a - (float)b;
			printf("%d / %d = %f \n",a, b,resultat );
			break;
		default:
			printf("Choix invalide \n");
			
	}

	return 0;
	
}
