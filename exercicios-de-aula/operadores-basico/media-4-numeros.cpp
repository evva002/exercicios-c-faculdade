#include <stdio.h>

int main(void){
	float numeroUm, numeroDois, numeroTres, numeroQuatro, resultadoMedia;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &numeroUm);
	
	printf("Digite o segundo numero: \n");
	scanf("%f", &numeroDois);
	
	printf("Digite o terceiro numero: \n");
	scanf("%f", &numeroTres);
	
	printf("Digite o quarto numero: \n");
	scanf("%f", &numeroQuatro);
	
	resultadoMedia = (numeroUm + numeroDois + numeroTres + numeroQuatro) / 4;
	
	printf("A media dos quatro numeros e: %f\n", resultadoMedia);

}