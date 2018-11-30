#include<stdio.h>
#include<stdlib.h>

main(){
int tamanho_vetor = 10, maisposicoes,tamanho_anterior;
int *v = (int*) malloc( tamanho_vetor * sizeof(int));
for (int i = 0; i <tamanho_vetor;i++){
printf("digite a posicao %d",i);
scanf("%d",&v[i]);
do{

  printf("deseja mais posicoes?");
  scanf("%d",&maisposicoes);
  tamanho_anterior = tamanho_vetor;
  tamanho_vetor += maisposicoes;
  v = (int*) realloc(v, tamanho_vetor * sizeof(int));
  for (int i = tamanho_anterior; i <tamanho_vetor;i++){
  printf("digite a posicao %d",i);
  scanf("%d",&v[i]);
  }
}while(maisposicoes != 0);

for (int i = 0; i <tamanho_vetor;i++){
printf("aluno %d = %d \n", i+1, v[i]);


}
printf("");
return 0;


}
}

