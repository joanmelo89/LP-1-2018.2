#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//criacao de uma constante DIM com valor 3
#define DIM 3
void preencher(int matriz[][DIM]){
		int linha, coluna;
		for (linha = 0; linha < DIM; linha++){
			for(coluna = 0; coluna < DIM;coluna++){
				printf("Preencha a matriz 3x3...\n");
				scanf("%d",&matriz[linha][coluna]);
			}
		}
	}
int exibir(int matriz[][DIM]){
	int linha, coluna;
		for (linha = 0; linha < DIM; linha++){
			for(coluna = 0; coluna < DIM;coluna++){
				printf("%d",matriz[linha][coluna]);
				//printf("\n");
			}
			printf("\n");
		}
}
main(){
	setlocale(LC_ALL, "portuguese");
	int matriz[DIM][DIM];
	preencher(matriz);
	printf("Minha matriz: %d\n",exibir(matriz));
	
	system("pause");
}
