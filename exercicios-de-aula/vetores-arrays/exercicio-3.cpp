#include<stdio.h>;

int main(void){
	
	int vetor[20], contador, numero = 0;

	
	for(contador = 0; contador < 20; contador ++){
		
		numero = numero + 2;
		vetor[contador] = numero;
		printf("%d ", vetor[contador]);
		
	}
	
}