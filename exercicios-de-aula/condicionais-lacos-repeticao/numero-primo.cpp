#include <stdio.h>

int main(void){
	int numeroUsuario, contador1; 
	int numeroDivisores = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &numeroUsuario);
	
	for(contador1 = 1; contador1 <= numeroUsuario; contador1++){
		if(numeroUsuario % contador1 == 0){
			numeroDivisores++;
		}
	}
	
	if(numeroDivisores == 2){
		printf("O numero digitado e primo: %d", numeroUsuario);
	}
	else{
		printf("O numero digitado nao e primo: %d", numeroUsuario);
	}
	
}