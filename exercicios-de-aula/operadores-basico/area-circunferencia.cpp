#include <stdio.h>

int main(void){
	float raioCircunferencia, resultadoAreaCircunferencia;
	float const PI = 3.14;
	
	printf("Digite o raio da circunferencia: \n");
	scanf("%f", &raioCircunferencia);
	
	resultadoAreaCircunferencia = PI * (raioCircunferencia * raioCircunferencia);
	
	printf("A area da circunferencia e : %f \n", resultadoAreaCircunferencia);
	
}