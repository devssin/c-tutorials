#include<stdio.h>

int main(){
	char name[40];
	int age ; 
	
	printf("Entrer votre nom \n");
	scanf("%s",&name);
	printf("Bonjour %s \nEntrer votre age \n",name);
	scanf("%d",&age);
	if(age < 12){
		printf("Vous etes enfant \n");
	}
	else if( age < 18){
		printf("Vous etes adolescent \n");
	}else{
		printf("Vous etes adult \n");
	}
	return 0;
	
}
