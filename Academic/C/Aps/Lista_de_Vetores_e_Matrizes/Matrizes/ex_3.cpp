/*3. Faça um programa que preenche uma matriz com o produto do valor da linha e da coluna
de cada elemento. Em seguida, imprima na tela a matriz.*/
#include<stdio.h>
main(){
    int mat[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        mat[i][j]=i+j;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        printf("Matriz[%d][%d]:%d \n", i,j,mat[i][j]);
        }
    }
}
