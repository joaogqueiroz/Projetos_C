#include<stdio.h>

 /*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos. */
main(){
    int vet1[10];
    int vet2[10];
    for(int i=0;i<10;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet1[i]);
        vet2[i] = (vet1[i]*vet1[i]);
    }
    for(int i=0;i<10;i++){
        printf("Valor da posicao[%d] no vetor 1: %d \n", i, vet1[i]);

    }
    for(int i=0;i<10;i++){
        printf("Valor da posicao[%d] no vetor 2: %d \n", i, vet2[i]);

    }
}
