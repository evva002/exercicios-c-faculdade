#include <stdio.h>

int main(void){
	float numeroUm, numeroDois, resultadoSoma, resultadoSubtracao;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &numeroUm);
	
	printf("Digite o segundo numero: \n");
	scanf("%f", &numeroDois);
	
	resultadoSoma = numeroUm + numeroDois;
	resultadoSubtracao = numeroUm - numeroDois;
	
	printf("A soma dos dois numero e : %f \n", resultadoSoma);
	printf("A subtracao dos dois numero e : %f \n", resultadoSubtracao);
	
}