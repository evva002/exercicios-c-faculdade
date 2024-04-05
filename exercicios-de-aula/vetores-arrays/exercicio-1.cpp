#include <stdio.h>;

int main(void){
	
	int numUsuario;
	char vetor[20];
	
	fflush(stdin);
	printf("Digite um numero inteiro de 1 a 20: ");
	scanf("%d", &numUsuario);
	
	for (int i = 0; i < numUsuario; i++){
		vetor[i] = '*';	
	}
	printf("%s ", vetor);
	
}