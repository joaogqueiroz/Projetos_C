#include<stdio.h>
/*4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y .*/

main(){
    int vet1[8];
    int soma,x,y;
    for(int i=0;i<8;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet1[i]);

    }
    printf("Digite o valor de X\n");
    scanf("%d", &x);
    printf("Digite o valor de Y\n");
    scanf("%d", &y);
    soma = (vet1[x]+vet1[y]);
    printf("O valor e: %d \n",soma);
}
