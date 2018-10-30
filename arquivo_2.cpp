#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	FILE *arq;
	char texto[20];
	
	arq = fopen("exemplo2.txt","w");
	
	printf("Escreva uma palavra qualquer:\n");
	fgets(texto,20,stdin);
	
	fprintf(arq,"%s",texto);
	
	fclose(arq);
	
	printf("Dados gravados com sucesso!");
	
	system("pause");
}
