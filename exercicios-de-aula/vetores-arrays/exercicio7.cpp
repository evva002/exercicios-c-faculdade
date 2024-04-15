#include <stdio.h>;

int main(void){
	
	int linhas, colunas, i, j;
	char array[20][20];
	
	printf("Digite o numero de colunas: (max 20) ");
	scanf("%d", &colunas);
	
	printf("Digite o numero de linhas (max 20): ");
	scanf("%d", &linhas);
	
	
	for(int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			array[i][j] = '*';
			printf("%c", array[i][j]);
		}
		printf("\n");

	}
}