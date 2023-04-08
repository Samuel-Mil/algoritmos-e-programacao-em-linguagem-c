#include <stdio.h>
#include <stdlib.h>

/*
* Dado um valor em reais e a cotacao do dolar, converta esse valor para dolares. 
*/

int main(){
	float dollarValue, userValue;

	printf("Qual a cotacao atual do dolar? ");
	scanf("%f", &dollarValue);
	
	printf("Qual a quantia que voce tem em real? ");
	scanf("%f", &userValue);

	printf("Voce tem R$%f reais.\n", userValue / dollarValue);

	return 0;
}