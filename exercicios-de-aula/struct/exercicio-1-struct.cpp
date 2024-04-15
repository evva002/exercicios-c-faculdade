#include <stdio.h>;
#include <string.h>;

struct PESSOA
{
	char nome [50];
	long int telefone;
};


int main(void){
	
	struct PESSOA pessoa1;
	
	strcpy(pessoa1.nome, "Carlos Eduardo Belo");
	pessoa1.telefone = 41998424948;
	
	printf("%s \n", pessoa1.nome);
	printf("%d", pessoa1.telefone);
}