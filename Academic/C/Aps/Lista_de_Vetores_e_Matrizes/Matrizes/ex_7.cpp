/*7. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
A[i][j] = 2*i + 7*j 2 se i < j;
A[i][j] = 3*i^2 1 se i = j ;
A[i][j] = 4*i^3 5*j^2 + 1 se i > j.*/

#include<stdio.h>
main(){
    //NÃO ESTA FUNCIONAL
    int mat[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
        if(i<j){
         mat[i][j] = 2*i + 7*j 2;
        }else if(i>j){
        mat[i][j] = 4*i^3 5*j^2 + 1;
        }else
        mat[i][j] =3*i^2 1;



        }
    }

}
