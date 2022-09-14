#include<stdio.h>
int main(){
	
	int nombres[] = {21,23,43,42,12};
	int * ptr = nombres;
	
	int i,taille = sizeof(nombres) / sizeof(int);
	for(i =0 ; i < taille ; i++){
		printf("Adress : %p \tValeur: %d \n", ptr , *ptr);
		ptr++;
	}
	return 0;
}
