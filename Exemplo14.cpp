#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int popA = 80000;
	int popB = 200000;
	int cont = 0;
	while(popA <= popB){
		popA = popA + (0.03 * popA);
		popB = popB + (0.015 * popB);
		cont++;//cont = cont + 1;
	}
	printf("Quantidade de anos: %d\n",cont);
	system("pause");
}
