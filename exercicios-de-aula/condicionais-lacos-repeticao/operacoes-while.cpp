#include <stdio.h>

int main(void){
	
	float numero1, numero2, resultado;
	int numeroUsuario;
	
	fflush(stdin);
	
	printf("Digite o primeiro numero: ");
	fflush(stdin);
	scanf("%f", &numero1);
	printf("Digite o segundo numero: ");
	fflush(stdin);
	scanf("%f", &numero2);
	printf("Digite 1 para soma \n");
	printf("Digite 2 para subtracao \n");
	printf("Digite 3 para multiplicacao \n");
	printf("Digite 4 para divisao \n");
	fflush(stdin);
	scanf("%d", &numeroUsuario);
	
	switch(numeroUsuario){
		
		case 1:
			resultado = numero1 + numero2;
			printf("A soma e: %.2f", resultado);
			break;
		case 2:
			resultado = numero1 - numero2;
			printf("A subtracao e: %.2f", resultado);
			break;
		case 3:
			resultado = numero1 * numero2;
			printf("A multiplicacao e: %.2f", resultado);
			break;
		case 4:
			resultado = numero1 / numero2;
			printf("A divisao e: %.2f", resultado);
			break;
		default:
			printf("Numero invalido!");
	}
	
}