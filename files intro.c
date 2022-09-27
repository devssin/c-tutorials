#include<stdio.h>
#include<stdlib.h>


int main(){
	char name[50];
	FILE *fp;
	fp = fopen("hello.txt","w");
	printf("Enter your name ");
	scanf("%s",name);
//	fprintf(fp,"Hello World");

	fprintf(fp,"%s",name);
	
	fclose(fp);
	return 0;
	
}
