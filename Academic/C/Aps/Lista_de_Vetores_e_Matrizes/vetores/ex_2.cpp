#include<stdio.h>
/*2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos */
main(){
    int vet[6];
    for(int i=0;i<6;i++){
    printf("Digite o valor da posicao[%d]:\n", i);
    scanf("%d", &vet[i]);
    }
    for(int i=0;i<6;i++){
    printf("Valor da posicao e [%d]: %d \n", i, vet[i]);
    }

}
