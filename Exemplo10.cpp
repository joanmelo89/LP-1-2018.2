#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	for(i=1;i<=20;i++){
		printf("Valor do i:%d\n",i);
	}
	
	system("pause");
}
