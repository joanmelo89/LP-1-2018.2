#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	int n1;
	int n2;
	int soma;
	printf("Primeiro valor:\n");
	scanf("%d",&n1);//ler variavel inteira
	printf("Segundo valor:\n");
	scanf("%d",&n2);
	soma = n1 + n2;
	printf("Soma total:%d\n",soma);
	system("pause");
}
