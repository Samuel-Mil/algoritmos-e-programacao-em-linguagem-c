#include <stdio.h>
#include <stdlib.h>

/*
* Faca um algoritmo que calcule o rendimento de um deposito 
* apos um mes de aplicacao. Considere fixa a taxa de juros 
* de remuneracao, correspondente a 0.50% ao mes.
*/

int main(){
	float deposit, performance, result;

	printf("Qual o valor do deposito? ");
	scanf("%f", &deposit);

	result = (deposit * 0.005) + deposit; // 0.50% em taxas de juros eh 0.005

	printf("Depois de um mes com a taxa de juros de 0.50%% ao mes, voce tera: %f\n", result);

	return 0;
}