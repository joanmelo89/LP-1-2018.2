#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	float salario;
	printf("Digite o valor do salário:\n");
	scanf("%f", &salario);
	if(salario <= 280){
		float novoSalario;
		novoSalario = salario + (salario*0.20);
		float valorAumento;
		valorAumento = novoSalario - salario;
		printf("Valor do salário: R$ %.2f\n",salario);
		printf("O percentual é 20%.\n");
		printf("Valor do aumento: R$ %.2f\n",valorAumento);
		printf("Novo salário: R$ %.2f\n",novoSalario);
	}
	if(salario > 280 && salario <= 700){
		float novoSalario;
		novoSalario = salario + (salario*0.15);
		float valorAumento;
		valorAumento = novoSalario - salario;
		printf("Valor do salário: R$ %.2f\n",salario);
		printf("O percentual é 15%.\n");
		printf("Valor do aumento: R$ %.2f\n",valorAumento);
		printf("Novo salário: R$ %.2f\n",novoSalario);
	}
	if(salario > 700 && salario <= 1500){
		float novoSalario;
		novoSalario = salario + (salario*0.10);
		float valorAumento;
		valorAumento = novoSalario - salario;
		printf("Valor do salário: R$ %.2f\n",salario);
		printf("O percentual é 10%.\n");
		printf("Valor do aumento: R$ %.2f\n",valorAumento);
		printf("Novo salário: R$ %.2f\n",novoSalario);
	}
	if(salario > 1500){
		float novoSalario;
		novoSalario = salario + (salario*0.05);
		float valorAumento;
		valorAumento = novoSalario - salario;
		printf("Valor do salário: R$ %.2f\n",salario);
		printf("O percentual é 5%.\n");
		printf("Valor do aumento: R$ %.2f\n",valorAumento);
		printf("Novo salário: R$ %.2f\n",novoSalario);
	}
	
	system("pause");
}
