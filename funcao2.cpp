#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int pegarMaior(int n1, int n2, int n3){
	//int maior;
	if(n1 >= n2 && n1 >= n3){
		return(n1);
	}
	if(n2 >= n1 && n2 >= n3){
		return(n2);
	}else{
		return(n3);
	}
}

main(){
	setlocale(LC_ALL, "portuguese");
	int n1,n2,n3;
	printf("Digitar os valores...\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	printf("Maior valor: %d",pegarMaior(n1,n2,n3));
	
	system("pause");
}
