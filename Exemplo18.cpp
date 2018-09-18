#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	//declaração do vetor com 5
	float notas[5] = {7,8,9.5,9.9,5.2};
	printf("Exibindo ps valores do vetor:\n");
	printf("notas[0] = %.1f\n",notas[0]);
	printf("notas[1] = %.1f\n",notas[1]);
	printf("notas[2] = %.1f\n",notas[2]);
	printf("notas[3] = %.1f\n",notas[3]);
	printf("notas[4] = %.1f\n",notas[4]);
	
	system("pause");
}
