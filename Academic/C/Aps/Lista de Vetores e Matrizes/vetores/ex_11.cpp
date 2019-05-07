/*11. Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
quantidade de números negativos e a soma dos números positivos desse vetor*/

#include<stdio.h>
main(){
    int vet[10],contador=0,soma=0;
    for(int i=0;i<10;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet[i]);
        }
         for(int i=0;i<10;i++){
         if(vet[i]<0){
            contador++;
         }else{
         soma+=vet[i];
         }
        }
    printf("QTD de numeros negativos: %d\n", contador);
    printf("Soma dos positivos: %d\n", soma);
}
