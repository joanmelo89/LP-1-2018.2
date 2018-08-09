#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Media de notas com verificacao se ta
//aprovado ou nao.
//entre 4,0 e 6,9 recuperacao
//7,0 ou mais aprovado
//3.9 ou menos reprovado direto
main(){
	setlocale(LC_ALL,"portuguese");
	float n1;
	float n2;
	float n3;
	float media;
	printf("Valor da primeira nota:\n");
	scanf("%f",&n1);
	printf("Valor da segunda nota:\n");
	scanf("%f",&n2);
	printf("Valor da terceira nota:\n");
	scanf("%f",&n3);
	media = (n1 + n2 + n3) / 3;
	if(media >= 7){
		printf("Aluno aprovado");
	}
	if(media >= 4 && media <= 6.9){
		printf("Aluno em recuperação.");
	}
	if(media < 4){
		printf("Alunno reprovado.");
	}
		
		
}
