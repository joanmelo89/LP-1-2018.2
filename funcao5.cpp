#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float calcularMedia(float numeros[], int n){
	int i;
	float media;
	for(i = 0; i < n; i++){
		media += numeros[i];
	}
	return (media/n);
}
main(){
	setlocale(LC_ALL, "portuguese");
	float numeros[5];
	int i;
	for(i = 0; i < 5; i++){
		printf("Valores do vetor...\n");
		scanf("%f",&numeros[i]);
	}
	printf("O valor da média: %.1f\n",calcularMedia(numeros, 5));
	system("pause");
}
