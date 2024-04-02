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
		float notaRecuperacao;
		printf("O aluno ficou de recuperacao com media de: %.1f \n", media);
		printf("Digite a nota da prova de recuperacao do aluno: ");
		scanf("%f", &notaRecuperacao);
		if (notaRecuperacao >= 7){
			printf("O aluno passou na recuperacao com nota: %.1f", notaRecuperacao);
		}
		else{
			printf("O aluno reprovou na recuperacao com nota: %.1f", notaRecuperacao);
		}
	}
	else{
		printf("O aluno reprovou direto com media de: %.1f", media);
	}
}