#include <stdio.h>

int main(void){
	float numeroUm, numeroDois, numeroTres, resultadoPerimetro;
	
	printf("Digite o primeiro lado do triangulo: \n");
	scanf("%f", &numeroUm);
	
	printf("Digite o segundo lado do triangulo: \n");
	scanf("%f", &numeroDois);
	
	printf("Digite o terceiro lado do triangulo: \n");
	scanf("%f", &numeroTres);
	
	resultadoPerimetro = numeroUm + numeroDois + numeroTres;
	
	printf("O perimeto do triangulo e : %f \n", resultadoPerimetro);
	
}