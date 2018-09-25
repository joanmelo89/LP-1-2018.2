#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vetorA[10];
	int i;
	int qtdPares = 0;
	for(i = 0; i <= 9; i++){
		printf("Digite um valor para o vetor na posição %d:\n",i);
		scanf("%d",&vetorA[i]);
		if(vetorA[i] % 2 == 0){
			qtdPares++;
		}
	
	}
		printf("Quantidade de números pares no vetor: %d\n",qtdPares);
	system("pause");
}
