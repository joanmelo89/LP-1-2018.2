#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int multiplicar(int n1, int n2){
		int resultado;
		resultado = n1 * n2;
		return(resultado);
	}
main(){
	setlocale(LC_ALL, "portuguese");
	int v1, v2, resultado;
	printf("Primeiro valor:\n");
	scanf("%d",&v1);
	printf("Segundo valor:\n");
	scanf("%d",&v2);
	//chamada da função
	resultado = multiplicar(v1, v2);
	printf("Resultado: %d\n",resultado);
	
	system("pause");
}
