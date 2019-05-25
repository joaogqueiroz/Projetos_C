/*10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a média geral.*/
#include<stdio.h>
main(){
    float vet[15],media;
    for(int i=0;i<15;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%f", &vet[i]);
        }
        for(int i=0;i<15;i++){
        media=(media+vet[i]);
        }
        media=media/15;
        printf("Digite o valor da media:%6.2f \n", media);
    }

