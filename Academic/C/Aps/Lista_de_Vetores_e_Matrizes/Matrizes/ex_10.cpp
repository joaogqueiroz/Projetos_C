/*10. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal*/

#include<stdio.h>
main(){
    int mat[3][3],soma=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("Digite o elemto da matriz [%d][%d]:\n",i,j);
        scanf("%d", &mat[i][j]);
        printf("Digite o elemto da matriz : %d\n\n",mat[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        if(i==j){
            soma=soma+mat[i][j];

        }

        }
    }
    printf("Soma = %d",soma);
}
