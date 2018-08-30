#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int numAlunos;
	float media;
	int soma;
	int numTurmas;
	int i;
	bool invalido = true;
	printf("Informa a quantidade de turmas:\n");
	scanf("%d",&numTurmas);
	for(i = 1; i <= numTurmas;i++){
		invalido = true;
		do{
			printf("Digite a quantidade pra turma %d\n",i);
			scanf("%d",&numAlunos);
			if(numAlunos <= 40){
				invalido = false;
			}else{
				//invalido = true;
				printf("Favor informar o número novamente.");
			}
		}while(invalido);
		soma = soma + numAlunos;
	}//for
	media = soma / numTurmas;
	printf("Média total: %f",media);
	system("pause");
}
