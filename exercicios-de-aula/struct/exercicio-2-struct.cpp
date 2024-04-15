#include <stdio.h>;

struct PESSOA
{
	char nome [50];
	long int telefone;
};


int main(void){
	
	struct PESSOA pessoa1;
	
	printf("Digite seu primeiro nome: ");
	scanf("%[^\n]s", &pessoa1.nome);
	printf("Digite seu numero de telefone: ");
	scanf("%d", &pessoa1.telefone);
	
	printf("%s\n", pessoa1.nome);
	printf("%d", pessoa1.telefone);
}