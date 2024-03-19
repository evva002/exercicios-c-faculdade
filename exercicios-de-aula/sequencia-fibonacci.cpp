#include <stdio.h>

int main(void){
	
	int numeroAnterior = 1, numeroAtual= 0, contador = 0;
	int numeroUsuario;
	
	printf("Digite um numero: ");
	scanf("%d", &numeroUsuario);
	
	while (numeroAtual < numeroUsuario){
		int numeroProximo = numeroAnterior + numeroAtual;
		numeroAnterior = numeroAtual;
		numeroAtual = numeroProximo;
		contador++;
	}
	
	if( numeroAtual == numeroUsuario){
		printf("O numero %d faz parte da sequencia de fibonacci na posicao %d", numeroUsuario, contador);
	}
	else{
		printf("O numero %d nao faz parte da sequencia de fibonacci", numeroUsuario);
	}
	
	
}