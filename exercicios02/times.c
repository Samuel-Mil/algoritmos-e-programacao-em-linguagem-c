#include <stdio.h>
#include <stdlib.h>

/*
* Escreva um programa eme C que apresente um menu de opcoes para a escolha do time de futebol de alguem.
*/

int main(){
	int opcao;

	printf("Escolha um time:\n");
	printf("[1] Flamengo\n");
	printf("[2] Botafogo\n");
	printf("[3] Vasco\n");
	printf("[4] Gama\n");
	
	printf("Escolha um numero: ");
	scanf("%d", &opcao);

	switch(opcao){
		case 1:
			printf("Vc eh Flamengo\n");
		break;

		case 2:
			printf("Vc eh Botafogo\n");
		break;

		case 3:
			printf("Vc eh Vasco\n");
		break;

		case 4:
			printf("Vc eh Gama\n");
		break;

		default:
			printf("Valor invalido!\n");
		break;
	}

	return 0;
}