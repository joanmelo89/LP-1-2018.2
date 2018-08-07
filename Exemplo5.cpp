#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Calcular média de 3 notas
main(){
	setlocale(LC_ALL,"portuguese");
	float n1;
	float n2;
	float n3;
	float media;
	printf("Valor da primeira nota:\n");
	scanf("%f",&n1);
	printf("Valor da segunda nota:\n");
	scanf("%f",&n2);
	printf("Valor da tarceira nota:\n");
	scanf("%f",&n3);
	media = (n1+n2+n3)/3;
	printf("Média total: %.1f",media);
	system("pause");
}
