#include <stdio.h>;

int main(void){
	
	int linhas, i, j;
	char array[20][20];
	
	printf("Digite o numero de linhas (max 20): ");
	scanf("%d", &linhas);
	
	
	for(i = 0; i < linhas; i++){
		for (j = 0; j <= i; j++){
			array[i][j] = '*';
			printf("%c", array[i][j]);
		}
		printf("\n");
	}
}