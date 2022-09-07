#include <stdio.h>

int main(){
	int a, b;
	
	printf("Donner la valeur de A: \n");
	scanf("%d",&a);
	
	printf("Donner la valeur de B: \n");
	scanf("%d",&b);
	
	
	
	printf("%d + %d = %d \n", a,b, a + b );
	printf("%d - %d = %d \n", a,b, a - b );
	printf("%d x %d = %d \n", a,b, a * b );
	printf("%d / %d = %f \n", a,b, (float)a / (float)b );
	
	return 0;
}
