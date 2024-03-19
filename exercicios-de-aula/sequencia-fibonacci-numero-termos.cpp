#include <stdio.h>

int main(void){
	int numeroUsuario, contador;
	int numero1 =1, numero2 = 0;
	
	printf("Digite o numero de termos desejado para apresentar a sequencia fibonacci: ");
	scanf("%d", &numeroUsuario);
	
	printf("%d \n", numero2);
	printf("%d \n", numero1);
	
	for (contador = 0; contador <= numeroUsuario; contador++){
		numero1 = numero1 + numero2;
		numero2 = numero1 - numero2;
		printf("%d \n", numero1);
	}
}