/*Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/
#include<stdio.h>

main(){
    int mat[4][4],contador=0 ;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Valor da posicao[%d][%d]: \n", i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(mat[i][j]>10){
                contador++;
               }
        }
    }
    printf("Resposta: %d", contador);
}
