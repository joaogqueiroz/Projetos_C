/*8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
na ordem inversa.*/
#include<stdio.h>
main(){
    int vet[6];
    for(int i=0;i<6;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet[i]);
        }

    for(int i=5;i>=0;i--){
        printf(" Valor[%d]: %d\n", i,vet[i]);
    }

}
