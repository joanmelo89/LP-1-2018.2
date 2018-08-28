#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	int num;
	int maior;
	for(i=0;i<5;i++){
		printf("Digite qualquer valor inteiro:\n");
		scanf("%d",&num);
		if(num > maior){
			maior = num;
		}
			
	}
printf("Maior valor: %d\n",maior);
	system("pause");
}
