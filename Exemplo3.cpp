#include <stdio.h>
#include <stdlib.h>

main(){
	float n1;
	float n2;
	float n3;
	float media;
	printf("Digite o valor da primeira nota:\n");
	scanf("%f",&n1);
	printf("Digite o valor da segunda nota:\n");
	scanf("%f",&n2);
	printf("Digite o valor da terceira nota:\n");
	scanf("%f",&n3);
	media = (n1 + n2 +n3)/3;
	printf("O valor total da média é: %.1f\n",media);
	system("pause");
}
