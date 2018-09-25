#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float notas1[10];
	float notas2[10];
	float result[10];
	int i;
	for(i=10; i <= 9;i++){
		printf("Entre com a nota1 do aluno %d",i);
		scanf("%f",&notas1[i]);
		printf("Entre com a nota2 do aluno %d",i);
		scanf("%f",&notas2[i]);
		result[i] = (notas1[i] + notas2[i]) / 2;
		if(result[i] >= 7){
			printf("%f - Aprovado\t",result[i]);
		}else{
			printf("%f - Reprovado\t",result[i]);
		}
	}
	
	system("pause");
}
