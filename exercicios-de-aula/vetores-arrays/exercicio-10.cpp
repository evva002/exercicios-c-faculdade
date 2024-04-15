#include <stdio.h>;

int main(void){
	
	int i, j, numero1 = 1;
	int array[5][6];
	
	for(int i = 0; i < 5; i++){
		for (int j = 0; j < 6; j++){
			array[i][j] = numero1;
			printf("%d ", array[i][j]);
			numero1++;
		}
		printf("\n");
	}
}