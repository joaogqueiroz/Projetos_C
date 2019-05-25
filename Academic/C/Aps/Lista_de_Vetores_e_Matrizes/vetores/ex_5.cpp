/*5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/
#include<stdio.h>

main(){
    int vet[10],cont=0;
    for(int i=0;i<10;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet[i]);
        }
    for(int i=0;i<10;i++){
        if(vet[i]%2==0){
            printf("Pares:%d \n",vet[i]);
            cont++;
            }
        }
    printf("Total de pares:%d",cont);
}
