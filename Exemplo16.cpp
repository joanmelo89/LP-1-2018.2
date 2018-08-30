#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	int i;
	int fatorial = 1;
	printf("Digite o número para calcular o fatorial:\n");
	scanf("%d",&num);
	printf("Fatorial de %d\n:",num);
	
	for(i = num;i > 1;i--){
		fatorial = fatorial * i;
		
	}
	printf("O valor total é: %d",fatorial);
	system("pause");
}
