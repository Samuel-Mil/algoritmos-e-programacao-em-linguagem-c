#include <stdio.h>
#include <stdlib.h>

/*
* Faca um algoritmo que receba um numero 
* e diga se este esta no intervalo entre 100 e 200.
*/

int main(){
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num >= 100 && num <= 200){
		printf("Esse numero esta entre 100 e 200!\n");
	}else{
		printf("Esse numero nao esta entre 100 e 200!\n");
	}

	return 0;
}