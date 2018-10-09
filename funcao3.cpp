#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int somar(int n1,int n2){
	return(n1+n2);
}
int multiplicar(int n1,int n2){
	return(n1*n2);
}
int subtrair(int n1,int n2){
	return(n1-n2);
}
int dividir(int n1,int n2){
	return(n1/n2);
}
main(){
	setlocale(LC_ALL, "portuguese");
	int n1,n2;
	printf("Digitar os dois valores...\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	printf("\nSoma: %d",somar(n1,n2));
	printf("\n Subtração: %d",subtrair(n1,n2));
	printf("\nMultiplicação: %d", multiplicar(n1,n2));
	printf("\nDivisão: %d",dividir(n1,n2));
	system("pause");
}
