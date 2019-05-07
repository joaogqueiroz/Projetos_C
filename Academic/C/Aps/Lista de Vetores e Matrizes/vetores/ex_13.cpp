/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor*/
#include<stdio.h>
main(){
    int vet[5],menor=0,posi;
    for(int i=0;i<5;i++){
        printf("Digite o valor da posicao[%d]:\n", i);
        scanf("%d", &vet[i]);
        }
        menor=vet[0];
     for(int i=0;i<5;i++){
        if(menor>vet[i]){
           menor=vet[i];
           posi= i;
        }
    }
    printf("Meno :%d\n", menor);
    printf("Estava na posicao :%d\n", posi);
}
