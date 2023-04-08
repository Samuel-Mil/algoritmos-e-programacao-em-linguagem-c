#include <stdio.h>
#include <stdlib.h>

/*
* Desenhe um algoritmo que leia uma temperatura 
* em graus Celcius e a apresente convertida em 
* graus Fahrenheit. A formula de conversao
* eh: F = (9 * C + 160) / 5, sendo F a temperatura 
* em graus Fahrenheit e C, a temperatura em graus Celcius.
*/

int main(){
	float celcius, fahrenheit;

	printf("Qual a temperatura (em celcius)? ");
	scanf("%f", &celcius);

	fahrenheit = (9 * celcius + 160) / 5;

	printf("Em Fahrenheit da: %.1f \n", fahrenheit);

	return 0;
}