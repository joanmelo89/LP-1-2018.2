#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float notas[5] = {7,8,9.4,5,4.3};
	int i;
	printf("Exibindo valores do vetor:\n");
	for(i = 0; i <= 4; i++){
		printf("notas[%d] = %.1f\n",i,notas[i]);
	}
	system("pause");
}
