#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Calcular area de um terreno retangular
main(){
	setlocale(LC_ALL,"portuguese");
	float largura;
	float comprimento;
	float area;
	printf("Valor da largura:\n");
	scanf("%f",&largura);
	printf("Valor do comprimento:\n");
	scanf("%f",&comprimento);
	area = largura * comprimento;
	printf("Área total do terreno:%.1f\n",area);
	system("pause");
}
