#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int SIZE = 10;

bool recherch(int num[],int n){
	int i;
	for(i = 0 ; i < 10; i++){
		if(n == num[i])
			return true;
			
	}
	return false;
}

int main(){
	
	int numbers[SIZE];
	int num,i;
	
	for(i = 0; i < SIZE; i++){
		printf("Entrer la valeur n%d: ", i+1);
		scanf("%d", &numbers[i]);
	}
	printf("Tappez le nombre a chercher : \n");
	scanf("%d",&num);
	bool exist = recherch(numbers, num);
	if(exist){
		printf("Existe \n");
	}else{
		printf("Doesn\'t exist \n");
	}
	

	return 0;

}

