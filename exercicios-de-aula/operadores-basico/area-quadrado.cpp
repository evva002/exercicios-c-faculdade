#include <stdio.h>

int main(void){
	float numeroUm, numeroDois, resultadoArea;
	
	printf("Digite o primeiro lado: \n");
	scanf("%f", &numeroUm);
	
	printf("Digite o segundo lado: \n");
	scanf("%f", &numeroDois);
	
	resultadoArea = numeroUm * numeroDois;
	
	printf("A area do quadrado e : %f \n", resultadoArea);
	
}