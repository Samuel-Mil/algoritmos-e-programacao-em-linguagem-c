#include <stdio.h>
#include <stdlib.h>

/*
* Escreva um programa que receba um valor em metros e o converta para milimetros.
*/

int main(){
	float num;

	printf("Quanto eh o valor em metros? ");
	scanf("%f", &num);

	printf("Em milimetros da: %f\n", num*1000);
	return 0;
}