#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vetorA[5];
	int vetorB[5];
	int i;
	for(i = 0; i <= 4; i++){
		printf("Digite o valor %d pra o vetor\n",i);
		scanf("%d",&vetorA[i]);
		vetorB[i] = vetorA[i];
	}
	printf("Imprimindo vetorB:\n");
	for(i = 0; i <= 4; i++){
		printf("vetorB[%d] = %d\n",i,vetorB[i]);
	}
	
	system("pause");
}
