#include<stdio.h>

/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

main(){
    int vet[6]={1,0,5,-2,-5,7};
        int soma;
    soma = vet[0]+vet[1]+vet[5];
    printf("soma: %d \n",soma);
    printf("Modificando a quarta posicao era: %d \n",vet[3]);
    vet[3]=100;
    printf("Agora e: %d \n",vet[3]);
    for(int i=0;i<6;i++){
    printf("Valor da posicao[%d]: %d \n", i,vet[i]);
    }

}
