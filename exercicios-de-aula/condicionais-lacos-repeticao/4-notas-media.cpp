#include <stdio.h>

int main (void){
	float nota1, nota2, nota3, nota4;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);
	
	float media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if (media >= 7){
		printf("O aluno passou direto com media de: %.1f", media);
	}
	else if(media >= 4 && media < 7){
		printf("O aluno ficou de recuperacao com media de: %.1f", media);
	}
	else{
		printf("O aluno reprovou direto com media de: %.1f", media);
	}
}