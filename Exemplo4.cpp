#include <stdio.h>
#include <stdlib.h>

main(){
	float comprimento;
	float largura;
	float area;
	printf("Digite o comprimento do terreno:\n");
	scanf("%f",&comprimento);
	printf("Digite a largura do terreno:\n");
	scanf("%f",&largura);
	area = comprimento * largura;
	printf("O valor total da �rea do terreno �:%.2f\n",area);
	system("pause");
	
}
