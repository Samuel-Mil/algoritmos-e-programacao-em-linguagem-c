#include <stdio.h>
#include <stdlib.h>

/*
* Construa um algoritmo que calcule o valor do comprimento da 
* circunferencia, a partir do valor do raio.
*/

int main(){
	// Fórmula: C = 2πr
	float radius, result;
	float pi = 3.14159265;

	printf("Qual o valor do raio? ");
	scanf("%f", &radius);

	result = 2*pi*radius;

	printf("O comprimento da circunferencia eh %f \n", result);

	return 0;
}