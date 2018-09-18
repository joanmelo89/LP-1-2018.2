#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vetorA[15];
	int vetorB[15];
	int i;
	for(i = 0; i <= 14;i++){
		printf("Digite o valor para o vetor %d:\n",i);
		scanf("%d",&vetorA[i]);
		vetorB[i] = vetorA[i] * vetorA[i];
	}	
	printf("VetorB = \n");
	for(i = 0; i <= 14;i++){
		printf("vetorB[%d] = %d\n",i,vetorB[i]);
	}
	
	system("pause");
}
