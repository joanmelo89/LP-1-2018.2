#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	float litros;
	char tipo;
	printf("Entre com a qtd de litros vendidos:\n");
	scanf("%f", &litros);
	printf("Entre com o tipo de combustível:\n");
	scanf("%s", &tipo);
	float precoGas = 2.5;
    float precoAlc = 1.9;
    int percDesconto = 0;
    float total = 0;
    float totalDesc = 0;
     if (tipo = 'a'){
            
            if (litros <= 20){
                percDesconto = 3;
            } else {
                percDesconto = 5;
            }
            
            total = litros * precoAlc;
            
        }
	else if (tipo = 'g'){
            
            if (litros <= 20){
                percDesconto = 4;
            } else {
                percDesconto = 6;
            }
            
            total = litros * precoGas;
        }
        
        totalDesc = (total / 100) * percDesconto;
        
        float precoAPagar;
		precoAPagar = total - totalDesc;
        
        printf("Valor a ser pago: %.2f",precoAPagar);
        system("pause");
}

        

