/*6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição
das matrizes lidas.
*/

#include<stdio.h>
main(){
    int mat1[4][4] = {{0,10,2,4},{55,1,-9,69},{1,2,3,4},{9,5,1,3}};
    int mat2[4][4] = {{10,-2,0,2},{6,8,-2,2},{8,5,2,1},{19,25,100,31}};
    int mat3[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
         if(mat1[i][j]>mat2[i][j]){
            mat3[i][j]=mat1[i][j];
            }else if(mat1[i][j]<mat2[i][j]){
                mat3[i][j]=mat2[i][j];
            }
                else{
                   mat3[i][j]=mat1[i][j];
                    }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
         printf("Elemto da matriz 3 [%d][%d]: %d\n",i,j,mat3[i][j]);
        }
    }

}
