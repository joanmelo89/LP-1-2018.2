#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vetorA[8];
	int vetorB[8];
	int i;
	for(i = 0; i <= 7;i++){
		printf("Digite o valor para o vetor %d:\n",i);
		scanf("%d",&vetorA[i]);
		vetorB[i] = vetorA[i] * 2;
	}
	printf("Imprimindo vetorB:\n");
	for(i = 0; i <= 7; i++){
		printf("vetorB[%d] = %d\n",i,vetorB[i]);
	}
	system("pause");
}
