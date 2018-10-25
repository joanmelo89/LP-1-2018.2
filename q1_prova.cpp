#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vetorA[10];
    char vetorB[10];
    int i;
        for (int i=0; i<9; i++){
            
            printf("Entre com um número para a posição\n");
            scanf("%d",&vetorA[i]);
            
            if (vetorA[i] < 7){
                vetorB[i] = 'a';
            } else if (vetorA[i] == 7){
                vetorB[i] = 'b';
            } else if (vetorA[i] > 7 && vetorA[i] < 10){
                vetorB[i] = 'c';
            } else if (vetorA[i] == 10){
                vetorB[i] = 'd';
            } else if (vetorA[i] > 10){
                vetorB[i] = 'e';
            }
        }
        
        printf("Vetor A = \n");
        for (i=0; i<9; i++){
            printf("%d ",vetorA[i]);
        }
        printf("\n");
        
        
        printf("Vetor B = \n");
        for (i=0; i<9; i++){
             printf("%c ",vetorB[i]);
        }
        printf("\n");
        system("pause");
    }    
	

