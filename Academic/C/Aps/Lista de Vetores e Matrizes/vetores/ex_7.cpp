/*7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posição que ele se encontra*/
#include<stdio.h>
main(){
    int vet[10],maior=0,posi;
    for(int i=0;i<10;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet[i]);
        }
        maior=vet[0];
    for(int i=0;i<10;i++){
        if(maior<vet[i]){
           maior=vet[i];
           posi=i;
        }
    }
    printf("Maior :%d\n", maior);
    printf("Estava na posicao :%d\n", posi);
}
