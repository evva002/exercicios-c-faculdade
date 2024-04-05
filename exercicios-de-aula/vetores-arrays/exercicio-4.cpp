#include<stdio.h>;

int main(void){
	
	int vetor[20], contador, numero = 0;

	
	for(contador = 0; contador < 20; contador ++){
		
		if(contador % 2 == 0){
		
			vetor[contador] = 1;
			printf("%d ", vetor[contador]);
		}
		else{
			vetor[contador] = -1;
			printf("%d ", vetor[contador]);
		}
	}
	
}