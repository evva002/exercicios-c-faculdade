#include <stdio.h>;

int main (void){
	int array [20][10];
	int i, j, count;
	
	count = 1;
	
	for(i = 0; i < 20; i++){
		for(j = 0; j < 10; j++){
			array[i][j] = count;
			printf("%d ", array);
			count++;;
		}
	}
}