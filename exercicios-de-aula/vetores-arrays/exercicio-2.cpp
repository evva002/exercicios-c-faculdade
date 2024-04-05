#include <stdio.h>;

int main(void){
	
	float vetorResultado[5];
	char operacao;
	int vetor1[5], vetor2[5];
	
	fflush(stdin);
	
	for (int i = 0; i < 5; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor1[i]);
	}
	
	for(int i = 0; i < 5; i++){
		printf("numero digitado: %d \n", vetor1[i]);
	
	}
	
	for (int i = 0; i < 5; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor2[i]);
	}
	
	for(int i = 0; i < 5; i++){
		printf("numero digita: %d \n", vetor2[i]);
	
	}
	
	printf("Selecione uma operacao: \n");
	printf("+ - * / : ");
	fflush(stdin);
	scanf("%c", &operacao);
	
	switch(operacao){
			case '+':
				for(int i = 0; i < 5; i++){
					vetorResultado[i] = vetor1[i] + vetor2[i];
					printf("%.2f \n", vetorResultado[i]);
				}
				break;
			case '-':
				for(int i = 0; i < 5; i++){
					vetorResultado[i] = vetor1[i] - vetor2[i];
					printf("%.2f \n", vetorResultado[i]);
				}	
				break;
			case '*':
				for(int i = 0; i < 5; i++){
					vetorResultado[i] = vetor1[i] * vetor2[i];
					printf("%.2f \n", vetorResultado[i]);
				}
				break;
			case '/':
				for(int i = 0; i < 5; i++){
					vetorResultado[i] = vetor1[i] / vetor2[i];
					printf("%.2f \n", vetorResultado[i]);
				}
				break;	
		}
	
	
	
	
}