#include <stdio.h>;

int main(void){
	
	int i, j;
	int array[12][12];
	
	
	for(i = 1; i <= 10; i++){
		for (j = 1; j <= 10; j++){
			array[i][j] = j * i;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}