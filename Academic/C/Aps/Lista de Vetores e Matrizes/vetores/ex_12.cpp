/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores.*/

#include<stdio.h>
main(){
    int vet[5],maior=0,menor=0,media=0;
    for(int i=0;i<5;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet[i]);
         media=(media+vet[i]);
        }
        maior=vet[0];
        menor=vet[0];
    for(int i=0;i<5;i++){
        if(maior<vet[i]){
           maior=vet[i];
        }
    }
    for(int i=0;i<5;i++){
        if(menor>vet[i]){
           menor=vet[i];
        }
    }
     media=media/5;
     printf("Maior :%d\n", maior);
     printf("Menor :%d\n", menor);
     printf("Media :%d\n", media);
}
