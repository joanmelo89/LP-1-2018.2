#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	//ponteiro para criar o arquivo
	FILE *arq;
	
	//abrindo o arquivo
	arq = fopen("exemplo.txt","a");
	
	//fechar o arquivo
	fclose(arq);
	
	//validação do arquivo
	if(arq == NULL){
		printf("Problema na criação do arquivo!");
	}else{
		//mensagem de sucesso
	printf("Arquivo foi criado com sucesso!");
	}
	
	system("pause");
}
