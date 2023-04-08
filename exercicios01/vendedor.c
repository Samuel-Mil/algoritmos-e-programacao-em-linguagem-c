#include <stdio.h>
#include <stdlib.h>

/*
* Elabore um algoritimo que leia o nome de um
* vendedor, o seu salario fixo e o total de
* vendas efetuadas por ele no mes (em dinheiro)
* Sabendo que esse vendedor ganha 15% de comissao 
* sobre suas vendas efetuadas, faca que o algoritmo
* informe o seu nome, o salario fixo e salario no final
* do mes.
*/

int main(){
	char name[20];
	float salary, sales, result;

	printf("Qual o nome do vendedor? ");
	scanf("%s", name);

	printf("Qual o salario fixo do %s? ", name);
	scanf("%f", &salary);

	printf("Quanto em vendas o %s fez (em dinheiro)? ", name);
	scanf("%f", &sales);

	result = (0.15*sales)+salary;

	printf("O vendedor %s fez %.2f nesse mes.\n", name, result);

	return 0;
}