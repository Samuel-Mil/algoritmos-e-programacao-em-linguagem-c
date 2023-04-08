#include <stdio.h>
#include <stdlib.h>

/*
* Crie um algoritmo que leia dois valores inteiros
* distintos e informe qual eh o maior.
*/

int main(){
	int numX, numY;

	printf("Digite um numero: ");
	scanf("%d", &numX);

	printf("Digite outro numero: ");
	scanf("%d", &numY);

	if(numX > numY){
		printf("%d eh maior que %d", numX, numY);
	}else{
		printf("%d eh maior que %d", numY, numX);
	}

	return 0;
}