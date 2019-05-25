/*5. Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca
desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”*/
#include<stdio.h>
main(){
    int mat[5][5],pesq,busc,linha,coluna,result;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        printf("Elemto da matriz[%d][%d]\n",i,j);
        scanf("%d",&mat[i][j]);
        }
    }
    printf("Digite um numero que queira encontar\n");
    scanf("%d",&pesq);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        if(pesq==mat[i][j]){
            busc=mat[i][j];
            linha=i;
            coluna=j;
            }
        }

    }
    if(pesq==busc){
        printf("Elemto da matriz[%d][%d]:%d \n", linha,coluna,busc);
     }else{
        printf("Elemento Nao encontrado");
                }
}

