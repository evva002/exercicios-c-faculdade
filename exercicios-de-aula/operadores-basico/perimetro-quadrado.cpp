#include <stdio.h>

int main(void){
	float numeroUm, numeroDois, resultadoPerimetro;
	
	printf("Digite o primeiro lado: \n");
	scanf("%f", &numeroUm);
	
	printf("Digite o segundo lado: \n");
	scanf("%f", &numeroDois);
	
	resultadoPerimetro = (numeroUm + numeroDois) * 2;
	
	printf("O perimeto do quadrado e : %f \n", resultadoPerimetro);
	
}