#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	int num;
	int soma = 0;
	int media;
	for(i=0;i<5;i++){
		printf("Digite qualquer valor inteiro:\n");
		scanf("%d",&num);
		soma = soma + num;
		media = soma / 5;
	}
	printf("Soma: %d\n",soma);
	printf("Média: %d\n",media);
	system("pause");
}
