#include <stdio.h>

int main(void){
	
	int numeroUsuario;
	
	printf("Digite 1 para 'bom dia' \n");
	printf("Digite 2 para 'boa tarde' \n");
	printf("Digite 3 para 'boa noite' \n");
	printf("Digite 4 para 'Ate mais' \n");
	scanf("%d", &numeroUsuario);
	
	switch(numeroUsuario){
		
		case 1:
			printf("Bom dia");
			break;
		case 2:
			printf("Boa tarde");
			break;
		case 3:
			printf("Boa noite");
			break;
		case 4:
			printf("Ate mais");
			break;
		default:
			printf("Numero invalido!");
	}
	
}