#include <stdio.h>

int main (void){
	int numero1, numero2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	if (numero1 > numero2){
		printf("O primeiro numero e maior: %d", numero1);
	}
	else if(numero1 == numero2){
		printf("Os numeros sao iguais: %d e %d", numero1, numero2);
	}
	else{
		printf("O segundo numero e maior: %d", numero2);
	}
}