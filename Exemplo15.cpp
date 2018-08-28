#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float popA;
	float popB;
	float taxaA;
	float taxaB;
	bool valido = false;
	do{
		printf("Entre com população de A");
		scanf("%f",&popA);
		if(popA > 0){
			valido = true;
		}else{
			//valido = false;
			printf("Favor digitar uma população maior que 0.");
		}
	}while(!valido);
	valido = false;	
	do{
		printf("Entre com população de B");
		scanf("%f",&popB);
		if(popB > 0){
			valido = true;
		}else{
			//valido = false;
			printf("Favor digitar uma população maior que 0.");
		}
	}while(!valido);
	valido = false;
	do{
		printf("Entre com a taxa A");
		scanf("%f",&taxaA);
		if(taxaA > 0){
			valido = true;
		}else{
			//valido = false
			printf("Favor digitar uma taxa maior que 0.");
		}
	}while(!valido);
	valido = false;
	do{
		printf("Entre com a taxa B");
		scanf("%f",&taxaB);
		if(taxaB > 0){
			valido = true;
		}else{
			//valido = false
			printf("Favor digitar uma taxa maior que 0.");
		}
	}while(!valido);
	int cont = 0;
	while(popA < popB){
		popA = popA + (taxaA * popA);
		popB = popB + (taxaB * popB);
		cont++;
	}
	printf("Quantidade de anos:%d\n",cont);
	system("pause");
}
