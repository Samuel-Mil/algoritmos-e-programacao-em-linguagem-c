#include <stdio.h>
#include <stdlib.h>

/*
* Dadas as medidas de uma sala, informe sua area.
*/

int main(){
	int option;

	printf("Escolha uma das opcoes de sala a baixo para medir sua area:\n");
	printf("[1] Quadrada.\n");
	printf("[2] Retangular.\n");
	printf("[3] Triangular.\n");
	printf("Qual é o formato (digitar somente o numero): ");
	
	scanf("%d", &option);
	
	float lado, altura;
	switch(option){
		case 1:
			printf("Quanto mede a base dessa sala: ");
			scanf("%f", &lado);

			printf("A sala tem %.2fm²\n", lado*lado);
		break;

		case 2:
			printf("Quanto mede a base dessa sala: ");
			scanf("%f", &lado);

			printf("Qual a altura desse retangulo: ");
			scanf("%f", &altura);

			printf("A sala tem %.2fm²\n", lado*altura);
		break;

		case 3:
			printf("Quanto mede a base dessa sala: ");
			scanf("%f", &lado);

			printf("Qual a altura desse retangulo: ");
			scanf("%f", &altura);

			printf("A sala tem %.2fm²\n", lado*altura/2);
		break;
		default:
			printf("Operação invalida!\n");
		break;
	}

	return 0;
}