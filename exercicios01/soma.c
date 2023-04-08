#include <stdio.h>
#include <stdlib.h>

/*
* Desenhe um algoritmo que receba dois numeros e
* exiba o resultado da sua soma.
*/

int main(){
	float numX, numY;

	printf("Qual o primeiro numero? ");
	scanf("%f", &numX);

	printf("Qual o segundo numero? ");
	scanf("%f", &numY);

	printf("O resultado eh %f \n", numX+numY);

	return 0;
}