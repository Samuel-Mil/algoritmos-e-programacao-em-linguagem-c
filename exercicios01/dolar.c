#include <stdio.h>
#include <stdlib.h>

/*
* Elabore um algoritmo que efetue a apresentacao
* do valor da conversao em real (R$) de um valor lido
* em dolar (US$). O algoritmo devera solicitar o valor
* da cotacao do dolar e tambem a quantidade de dolares disponiveis com o usuario.
*/

int main(){
	float dollarValue, userValue;

	printf("Qual a cotacao atual do dolar? ");
	scanf("%f", &dollarValue);
	
	printf("Qual a quantia que voce tem em dolar? ");
	scanf("%f", &userValue);

	printf("Voce tem R$%f reais.\n", userValue * dollarValue);

	return 0;
}