#include <stdio.h>
int main (void){
	int temperatura;
	
	printf("Digite a temperatura da agua: ");
	scanf("%d", &temperatura);
	
	
	if (temperatura >= 100){
		printf("A agua esta fervendo:");
	}
	else if(temperatura > 0){
		printf("A agua esta liquida");
	}
	else{
		printf("A agua esta congelada ");
	}
}