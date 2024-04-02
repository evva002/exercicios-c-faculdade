#include <stdio.h>

int main (void){
	float peso, altura;
	
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	float imc = peso / (altura * altura);
	
	if (imc < 18.5){
		printf("IMC: %.2f \n", imc);
		printf("Magreza");
	}
	else if(imc >= 18.5 && imc < 25){
		printf("IMC: %.2f \n", imc);
		printf("Normal");
	}
	
	else if(imc >= 25 && imc < 30){
		printf("IMC: %.2f \n", imc);
		printf("Sobrepeso"); 
	}
	else if(imc >= 30 && imc < 40){
		printf("IMC: %.2f \n", imc);
		printf("Obesidade");
	}
	else{
		printf("IMC: %.2f \n", imc);
		printf("Obesidade grave");
	}
}