#include<stdio.h>
int main(){
	int n , inversN, a1,a2,a3,a4;
	do{
		printf("Donner un nombre entre 1000 et 9999 ");
		scanf("%d", &n);
		if(n < 1000 || n > 9999){
			printf("Recommencer \n");
		}
	}while(n < 1000 || n > 9999);
	a1 = n / 1000;
	a2 = n/100 - a1 * 10;
	a3 = n /10 - (a1 * 100 + a2 * 10);
	a4 = n - (a1 * 1000 + a2 * 100 + a3 * 10);
	printf("%d, %d, %d, %d", a1, a2, a3, a4);
	inversN = a4 * 1000 + a3 * 100 + a2 * 10 + a1;
	printf("\nInverse n = %d", inversN);
	return 0;
}
