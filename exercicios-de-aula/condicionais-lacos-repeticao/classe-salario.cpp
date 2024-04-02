#include <stdio.h>

int main (void){
	
	float faixaA = 0, faixaB = 0, faixaC = 0, faixaD = 0, salario;;
	
	printf("Digite o seu salario: R$");
	scanf("%f", &salario);
	
	
	if (salario > 11262){
		printf("O seu salario pertence a classe A: R$%.2f", salario);
	}
	else if(salario > 8641 && salario <= 11262){
		printf("O seu salario pertence a classe B: R$%.2f", salario);
	}
	else if(salario > 2004 && salario <= 8641){
		printf("O seu salario pertence a classe C: R$%.2f", salario);
	}
	else{
		printf("O seu salario pertence a classe D: R$%.2f", salario);
	}
}