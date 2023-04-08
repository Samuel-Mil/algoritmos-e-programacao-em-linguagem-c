#include <stdio.h>
#include <stdlib.h>

/*
* Escreva um programa que desenhe uma tela de abertura com
* a logomarca da empresa ACME(usar caracteres da Tabela ASCII) e,
* depois, as opcoes de operacoes administrativas que o usuario pode realizar. 
*/

int main(){
	// Foi o melhor que eu consegui :P
	printf("     _____         ________     __          __     |------ \n");
    printf("    /     \\       /        \\  |  |        |  |   |       \n");
    printf("   / /| |\\ \\     /   ______/  |  |\\      /|  |  |----   \n");
    printf("  / / | | \\ \\   /   /         |  | \\____/ |  |  |       \n");
    printf(" / /__|_|__\\ \\  \\  \\______   |  |        |  |  |       \n");
    printf("/_/         \\_\\  \\________\\  |__|        |__|  |------ \n");

    printf("\n");
    printf("----------------------------------------------------------\n");
    printf("OPCOES DE OPERADOR\n");
    printf("----------------------------------------------------------\n");
    printf("[1] Consultar finanças.\n");
    printf("[2] Tabela de funcionarios.\n");
    printf("[3] Produtos.\n");
    printf("[4] Sair.\n");

	return 0;
}
