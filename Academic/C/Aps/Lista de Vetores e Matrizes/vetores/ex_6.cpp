/* Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.*/

#include<stdio.h>
main(){
    int vet[10],maior=0,menor;
    for(int i=0;i<10;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet[i]);
        }
        maior=vet[0];
        menor=vet[0];
    for(int i=0;i<10;i++){
        if(maior<vet[i]){
           maior=vet[i];
        }
    }
    for(int i=0;i<10;i++){
        if(menor>vet[i]){
           menor=vet[i];
        }
    }
     printf("Maior :%d\n", maior);
     printf("Menor :%d\n", menor);
}
