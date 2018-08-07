#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Calcular valor de reajuste salarial
main(){
	setlocale(LC_ALL,"portuguese");
	float salario;
	float novoSalario;
	float reajuste;
	printf("Qual o valor do salário?\n");
	scanf("%f",&salario);
	printf("Valor do reajuste:\n");
	scanf("%f",&reajuste);
	novoSalario = salario + ((salario*reajuste)/100);
	printf("Salário reajustado: R$%.2f\n",novoSalario);
	system("pause");
}

