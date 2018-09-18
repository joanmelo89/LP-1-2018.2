#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	float notas[5] = {7,8,9.5,9.9,5.2};
	printf("Exibindo ps valores do vetor:\n");
	for(i = 0;i <= 4;i++){
		printf("notas[%d] = %.1f\n",i,notas[i]);
	}
	
	system("pause");
}
