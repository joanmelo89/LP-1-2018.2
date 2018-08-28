#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float nota;
	bool notaValida = false;
	do{
		printf("Digite uma nota:\n");
		scanf("%f",&nota);
		if(nota >= 0 && nota <= 10){
			notaValida = true;
			printf("Nota digitada:%.2f\n",nota);
		}else{
			//notaValida = false;
			printf("Nota inválida, favor digitar novamente.");
		}
	}while(!notaValida);
	
	system("pause");
}
