#include<stdio.h>
#include<math.h>


// Menu Fonction
int menu()
{
	system("cls");
    int ch;
    printf("\n===== Veuillez choisir une operatio: =====");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulo");
    printf("\n6. Factorial");
    printf("\n7. SIN");
    printf("\n8. COS");
    printf("\n9. Tan");
    printf("\n10. ln()");
    printf("\n11. log()");
    printf("\n12. e^x");
    printf("\n13. Racine Carree");
    printf("\n14. Racine Cube");
    printf("\n15. Puissance");
    printf("\n16. Valeur Absolut");
    printf("\n17. Exit \n");
    scanf("%d", &ch);
    return ch;
}

void addition(){
	double a , b; 
	printf("Entrer la valeur du premier nombre: ");
	scanf("%lf",&a);
	printf("\nEntrer la valeur du deusieme nombre ");
	scanf("%lf",&b);
	printf("%lf + %lf = %lf", a ,b , a + b);
	printf("\nAppuiller sur un button pour continuer .... ");
	getch();
}

void soustraction(){
	double a , b; 
	printf("Entrer la valeur du premier nombre: ");
	scanf("%lf",&a);
	printf("\nEntrer la valeur du deusieme nombre ");
	scanf("%lf",&b);
	printf("%lf - %lf = %lf", a ,b , a - b);
	printf("\nAppuiller sur un button pour continuer .... ");
	getch();
	
}

void multiplication(){
	double a , b; 
	printf("Entrer la valeur du premier nombre: ");
	scanf("%lf",&a);
	printf("\nEntrer la valeur du deusieme nombre ");
	scanf("%lf",&b);
	printf("%lf x %lf = %lf", a ,b , a * b);
	
}

void division(){
	double a , b; 
	printf("Entrer la valeur du premier nombre: ");
	scanf("%lf",&a);
	printf("\nEntrer la valeur du deusieme nombre ");
	do{
		scanf("%lf",&b);
		if(b == 0){
			printf("\nImpossible de diviser par 0 \tRecommancer ");
		}
	}while(b == 0);
	printf("%lf + %lf = %lf", a ,b , a / b);
	printf("\nAppuiller sur un button pour continuer .... ");
	getch();
	
}
void modulo(){
	int a , b; 
	printf("Entrer la valeur du premier nombre: ");
	scanf("%d",&a);
	printf("\nEntrer la valeur du deusieme nombre ");
	do{
		scanf("%d",&b);
		if(b == 0){
			printf("\nImpossible de diviser par 0 \tRecommancer ");
		}
	}while(b == 0);
	printf("%d mod %d = %d \n", a ,b , a % b);
	printf("\nAppuiller sur un button pour continuer .... ");
	getch();
	
}
void factorial(){
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
	printf("\nAppuiller sur un button pour continuer .... ");
	getch();
}

void sine(){
	double a;
    printf("Entrez l'angle en radians: \n");
    scanf("%lf", &a);
    printf("sin(%lf) = %lf",a, sin(a));
    printf("\nAppuiller sur un button pour continuer .... ");
	getch();
}

void cosine(){
	double a;
    printf("Entrez l'angle en radians: \n");
    scanf("%lf", &a);
    printf("cos(%lf) = %lf",a, cos(a));
    printf("\nAppuiller sur un button pour continuer .... ");
	getch();
}

void tangent(){
	double a;
    printf("Entrez l'angle en radians: \n");
    scanf("%lf", &a);
    printf("tan(%lf) = %lf",a, tan(a));
    printf("\nAppuiller sur un button pour continuer .... ");
	getch();
}

void logBasee()
{
    double a;
    printf("Entrer un number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Erreur\n");
    }
    else
    {
    
    printf("\nLn(%a) = %lf", a,log(a));
    }
    printf("\nAppuiller sur un button pour continuer .... ");
	getch();
}

// Function to calculate log (base 10)
void logBase10()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    
    printf("\nResult = %lf", log10(a));
    }
}

// Function to calculate e^x
void expon()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    
    printf("\nResult = %lf", exp(a));
}

// Function to find the Square Root of a Number
void racine_carree()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
    printf("Math Error\n");
    }
    else
    {
    printf("\nResult = %lf", sqrt(n));
    }
}

// Function to find the Cube Root of a Number
void racine_cube()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    printf("\nResult = %lf",  cbrt(n));
}

// Function to find the Power of a Number
void puissance()
{
    double base, expo;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &expo);
    
    printf("%.1lf^%.1lf = %.2lf", base, expo, pow(base, expo));
}

// Function to find the Absolute Value of a Number
void valeur_absolut()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%lld",&n);
    
    printf("\nResult = %lld", abs(n));
}






int main (){
	int l = 0;
	do{
		switch(menu())
        {
            case 1: addition();
                    break;

            case 2: soustraction();
                    break;

            case 3: multiplication();
                    break;

            case 4: division();
                    break;

            case 5: modulo();
                    break;

            case 6: factorial();
                    break;

            case 7: sine();
                    break;

            case 8: cosine();
                    break;
            case 9: tangent();
                    break;

            case 10:logBasee();
                    break;

            case 11:logBase10();
                    break;

            case 12:expon();
                    break;

            case 13:racine_carree();
                    break;

            case 14:racine_cube();
                    break;

            case 15:puissance();
                    break;

            case 16:valeur_absolut();
                    break;

            case 17:l = 1;
                    break;

            default:
                    printf("\nChoix Invalide");	
    	}
    	if(l == 1){
    		printf("\n Au revoir");
    		break;
		}
	}while(1);
}



