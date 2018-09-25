#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int matriz[3][3];
	int linha, coluna;
	//preenchimendo da matriz
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("Preencha a matriz...");
			scanf("%d",&matriz[linha][coluna]);	
		}
	}
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("%d ",matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	system("pause");
}
