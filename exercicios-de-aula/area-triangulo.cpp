#include <stdio.h>

int main(void){
	float numeroUm, numeroDois, resultadoArea;
	
	printf("Digite o valor da base do triangulo: \n");
	scanf("%f", &numeroUm);
	
	printf("Digite a altura do triangulo: \n");
	scanf("%f", &numeroDois);
	
	resultadoArea = (numeroUm * numeroDois) / 2;
	
	printf("A area do triangulo e : %f \n", resultadoArea);
	
}