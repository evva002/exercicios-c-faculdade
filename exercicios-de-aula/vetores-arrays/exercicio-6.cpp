#include<stdio.h>;

int main(void){
	
	int vetor1[10], vetor2[10], contador, numero1 = 1;

	
	for(contador = 0; contador < 10; contador ++){
		vetor1[contador] = numero1;
		printf("%d\n", vetor1[contador]);
		numero1 = numero1 * 2;
		
	}
	for(contador = 1; contador < 10; contador ++){
		vetor2[contador] = vetor1[contador] - vetor1[0];
		printf("%d\n", vetor2[contador]);
	}
}