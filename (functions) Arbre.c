#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j , k , L ,a;
    printf("donner les lingnes ");
    scanf("%d",&L);
    
    for(a = 3; a > 0; a--){
    	for (i=1 ; i<=L ; i++){
	        for ( j = L-i+a;j > 0 ; j--){
	            printf(" ");
	        }
	        for ( j = 1  ; j<= (2*i-1); j++){
	            printf("*");
	        }
	        printf("\n");
	        
	    }
	    L++;
	}
}
