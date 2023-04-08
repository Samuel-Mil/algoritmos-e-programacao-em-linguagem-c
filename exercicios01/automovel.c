#include <stdio.h>
#include <stdlib.h>

/*
* Desenhe um algoritmo para determinar o consumo medio de um automovel,
* considerando que a distancia total percorrida e o total de combustivel
* gasto sao fornecidos.
*/

int main(){
	float km, gas;

	printf("Qual a distancia percorridan (em Km)? ");
	scanf("%f", &km);

	printf("Quanto de gasolina voce gastou (em litros)? ");
	scanf("%f", &gas);

	printf("Seu automovel consome %.2f litros por Km. \n", km/gas);

	return 0;
}