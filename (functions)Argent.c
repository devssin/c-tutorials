#include <stdio.h>
int piece_inferieure(int valeur)
{
    switch (valeur)
    {
    case 200: 
		return 100;	
    case 100:
        return 50;
    
    case 50:
        return 20;
    
    case 20:
        return 10;
    
    case 10:
        return 5;
    
    case 5:
        return 2;
    
    case 2:
        return 1;
    
    default:
        return 0;
    }
}


void coupure(int somme)
{
    int valeur = 200;

    while (valeur != 0)
    {
        int nb_coupure = somme / valeur;
        
        if (nb_coupure > 0)
        {
            if (valeur >= 5)
                printf("%d billet(s) de %d.\n", nb_coupure, valeur);
            else
                printf("%d pièce(s) de %d.\n", nb_coupure, valeur);

            somme -= nb_coupure * valeur;
        }

        valeur = piece_inferieure(valeur);
    }
}

int verifierSomme(){
	int somme;
	do{
 		printf("Entrez une somme : \n");
    	scanf("%d", &somme);
		if(somme < 0){
			printf("La somme doit etre superieur de 0 \tRecommencer \n");
		}	
	}while(somme < 0);
	
	return somme;
	
    
	
}

int main(void)
{

	
    int somme = verifierSomme();
    coupure(somme);
    return 0;
}
