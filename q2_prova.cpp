#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	 int n;
	 int i;
    printf("Dimensão da matriz: \n");
    scanf("%d",&n);
    int matriz[100][100], matriz2[100][100];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("Valores da matriz...\n");
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            matriz2[i][j] =matriz[i][j] * 2;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("%d ",matriz2[i][j]);
        }
        printf("\n");
    }
	system("pause");
}
