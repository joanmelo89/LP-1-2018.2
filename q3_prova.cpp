#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void multiplicar(float matriz[3][3], int fator, float matriz2[3][3]){
	int i, j;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			matriz2[i][j] = matriz[i][j] * fator;
		}

	}	
}
void mostrarMatriz(float m[3][3]){
		int i, j;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%.1f ",m[i][j]);
		}
		printf("\n");
	}	
}
main(){
	setlocale(LC_ALL, "portuguese");
	float matriz[3][3] = {1,2,3,
						4,5,6,7,
						8,9.5};
	float matriz2[3][3];
	multiplicar(matriz, 2, matriz2);
	mostrarMatriz(matriz);
	printf("\n\n");
	mostrarMatriz(matriz2);
	system("pause");
}
