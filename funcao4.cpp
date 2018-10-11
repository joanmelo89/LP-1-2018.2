#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int minVetor(int v[], int n){
	int i;
	int min;
	for(i = 1; i < n; i++){
		if(i == 1){
			min = v[i];
		}
		if(v[i] < min){
			min = v[i];
		}
	}
	return(min);
}
main(){
	setlocale(LC_ALL, "portuguese");
	int menor;
	int i, num[6];
	int n = 5;
	for(i = 1;i <= 5;i++){
		printf("Digite o valor para o vetor:\n");
		scanf("%d",&num[i]);
	}
	menor = minVetor(num, n);
	printf("Menor valor:%d\n",menor);
	system("pause");
}
