#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	FILE *arq;
	char texto[20];
	arq = fopen("exemplo2.txt","r");
	while(fgets(texto,20,arq) != NULL){
		printf("%s",texto);
	}
	fclose(arq);
	system("pause");
}
