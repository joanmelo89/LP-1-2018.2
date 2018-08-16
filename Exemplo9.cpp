#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	int qtdMorango;
	int qtdMaca;
	float precoKgMorango;
	float precoKgMaca;
	float total;
	float totalMorango;
	float totalMaca;
	float totalKg;
	float totalParcial;
	
	printf("Quantos morangos vai levar?");
	scanf("%d", &qtdMorango);
	printf("Quantas maçãs vai levar?");
	scanf("%d", &qtdMaca);	
	if(qtdMorango <= 5){
		totalMorango = qtdMorango * 2.50;
	}else{
		totalMorango = qtdMorango * 2.20;
	}
	if(qtdMaca <= 5){
		totalMaca = qtdMaca * 1.80;
	}else{
		totalMaca = qtdMaca * 1.50;
	}
	totalParcial = totalMaca + totalMorango;
	total = totalParcial;
	totalKg = qtdMaca + qtdMorango;
	
	if(totalParcial > 25 || totalKg > 8){
		total = totalParcial - (totalParcial * 0.1);
	}
	printf("Valor total: R$ %.2f",total);
	system("pause");
}
