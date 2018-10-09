#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int M[3][3];
	int i,j;int qtdPares, qtdImpares;
	
	//preenchimento da matriz
	for(i = 0;i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Entre com o valor da matriz:\n");
			scanf("%d",&M[i][j]);
		}
	}
	//contadores... sempre iniciar com 0
	//quando o contador for entrar em um loop
	qtdImpares = 0;
	qtdPares = 0;
	for(i = 0;i < 3; i++){
		for(j = 0; j < 3; j++){
			if(M[i][j] % 2 == 0){
				qtdPares++;
			}else{
				qtdImpares++;
			}
		}
	}
	for(i = 0;i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ",M[i][j]);
	}
	printf("\n");
}
printf("Pares: %d\n",qtdPares);
printf("Ímpares: %d\n",qtdImpares);
	system("pause");
}
