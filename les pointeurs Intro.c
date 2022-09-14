#include<stdio.h>
int main(){
	
	int age = 18;
	int * ptr ;
	ptr = &age;
	printf("La valeur de age est : %d \n", age);
	printf("l\'adress de variable age est : %u ", &age);
	printf("\n*****************************************\n");
	printf("La valeur de age est : %d \n", *ptr);
	printf("l\'adress de variable age est : %u ", ptr);
	
	
	return 0;
}
