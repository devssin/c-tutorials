#include<stdio.h>
int calcAge(int day, int month, int year){
	int presentDay = 16 ,presentMonth = 9 ,presentYear = 2022;
	if(month > presentMonth){
		return presentYear - year -1;
	}
	if(month == presentMonth && day > presentDay){
		return presentYear - year -1;
	}
	
	return presentYear - year;
}
int main(){
	int d,m,y;
	printf("Donner la date de naissance DD/MM/YYYY ");
	scanf("%d/%d/%d",&d,&m,&y);
	int age = calcAge(d,m,y);
		
	printf("Age : %d",age);
	
	return 0;
}
