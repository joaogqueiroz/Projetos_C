/*4. Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
maior valor.*/
#include<stdio.h>
main(){
    int mat[4][4],maior,linha,coluna;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        printf("Elemto da matriz[%d][%d]\n",i,j);
        scanf("%d",&mat[i][j]);
        }
    }
    maior=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(maior<mat[i][j]){
        maior=mat[i][j];
        linha=i;
        coluna=j;

            }
        }
    }
    printf("Maior elemto da matriz[%d][%d]:%d \n", linha,coluna,maior);
}
