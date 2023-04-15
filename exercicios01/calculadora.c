#include <stdio.h>
#include <stdlib.h>

/*
* Desenhe um algoritmo que receba dois numeros e
* motre a soma, a subtracao, 
* a multiplicacao e a divisao dos numeros.
*/

int main(){
	float numX, numY;

	printf("Qual o primeiro numero? ");
	scanf("%f", &numX);

	printf("Qual o segundo numero? ");
	scanf("%f", &numY);

	printf("O resultado da soma eh %f \n", numX+numY);
	printf("O resultado da subtracao eh %f \n", numX-numY);
	printf("O resultado da multiplicacao eh %f \n", numX*numY);
	printf("O resultado da divisao eh %f \n", numX/numY);

	return 0;
}
