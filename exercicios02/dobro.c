#include <stdio.h>
#include <stdlib.h>

/*
* Escreva um programa que receba um numero qualquer e mostre o seu dobro.
*/

int main(){
	float num;

	printf("Digite um numero: ");
	scanf("%f", &num);

	printf("O dobro eh: %f", num*2);
	return 0;
}