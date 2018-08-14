#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	float litros;
	int tipo;
	float desconto;
	float total;
	printf("Digite o tipo de combustível:\n 1 - Álcool - R$ 1,90\n2 - Gasolina - R$2,50\n");
	scanf("%d", &tipo);
	printf("Digite a quantidade de litros:\n");
	scanf("%f", &litros);	
	if(tipo == 1){
		if(litros <= 20){
			float valorPago;
			float total;
			total = litros * 1.9;
			valorPago = total - (total * 0.03);
			printf("Valor total: R$ %.2f\t",valorPago);
		}else{
			float valorPago;
			float total;
			total = litros * 1.9;
			valorPago = total - (total * 0.05);
			printf("Valor total: R$ %.2f\t",valorPago);
		}

	}else if(tipo == 2){
		if(litros <= 20){
			float valorPago;
			float total;
			total = litros * 2.5;
			valorPago = total - (total * 0.04);
			printf("Valor total: R$ %.2f\t",valorPago);
		}else{
			float valorPago;
			float total;
			total = litros * 2.5;
			valorPago = total - (total * 0.06);
			printf("Valor total: R$ %.2f\t",valorPago);
		}
 
	}

	system("pause");
}
