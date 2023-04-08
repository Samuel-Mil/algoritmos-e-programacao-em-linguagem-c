#include <stdio.h>
#include <stdlib.h>

/*
* Crie um algoritmo que leia o nome de um aluno 
* e as notas das tres provas que ele obteve no semestre,
* com pesos 2,3 e 5. No final, deve-se informar o nome 
* do aluno e sua media ponderada.
*/

int main(){
	char name[20];
	float test1, test2, test3, result;

	printf("Qual o nome do aluno? ");
	scanf("%s", name);


	printf("Qual o resultado da primeira prova? ");
	scanf("%f", &test1);

	printf("Qual o resultado da segunda prova? ");
	scanf("%f", &test2);

	printf("Qual o resultado da terceira prova? ");
	scanf("%f", &test3);

	result = (test1*2 + test2*3 + test3*5) / (2 + 3 + 5);

	printf("A media do %s eh %.1f.\n", name, result);

	return 0;
}