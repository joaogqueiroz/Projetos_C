#include<stdio.h>
/*4. Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa
dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y .*/

main(){
    int vet1[8];
    int soma,x,y;
    for(int i=0;i<8;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet1[i]);

    }
    printf("Digite o valor de X\n");
    scanf("%d", &x);
    printf("Digite o valor de Y\n");
    scanf("%d", &y);
    soma = (vet1[x]+vet1[y]);
    printf("O valor e: %d \n",soma);
}
