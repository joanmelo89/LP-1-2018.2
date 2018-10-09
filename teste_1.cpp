#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vetorA[10];
	int i;
	for (i=0; i<10; i++){
		printf("Entre com o valor do vetor:\n");
		scanf("%d",&vetorA[i]);
	}
		bool palindromo = true;
		for (i=0; i<(10/2); i++){	
		if(vetorA[i] != vetorA[10 - 1 - i]){
			palindromo = false;
			break;
		}
		
	}
	printf("Vetor A = \n");
		for (i=0; i<10; i++){
			printf("%d ",vetorA[i]);	
		}
		printf("\n");
		if(palindromo){
			printf("Palindromo");
			
		}else{
			printf("Não é palindromo");
		}
	system("pause");
	
}
