#include <stdio.h>

int main (void){
	int numero1, numero2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	if (numero1 > numero2){
		printf("O primeiro numero e maior %d", numero1);
	}
	else{
		printf("O segundo numero e maior %d", numero2);
	}
}