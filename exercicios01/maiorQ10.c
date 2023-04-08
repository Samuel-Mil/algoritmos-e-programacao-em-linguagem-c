#include <stdio.h>
#include <stdlib.h>

/*
* Faca um algoritmo que receba um numero 
* e mostre uma mensagem caso este seja maior que 10.
*/

int main(){
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num > 10){
		printf("Esse numero eh maior que 10!\n");
	}else{
		printf("Esse numero nao eh maior que 10!\n");
	}

	return 0;
}