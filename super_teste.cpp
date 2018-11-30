#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
typedef struct celula{
 int x;
 string primNome[40];
 
 struct celula *prox;
}cel;

main(){
  setlocale(LC_ALL,"Portuguese");
  cel *ini, *fim;
  ini=(cel *)malloc(sizeof(cel));
  if(ini==NULL) return;
  fim=ini;
  while(1){
    printf("Digite um numero para A : \n");
    scanf("%d",&fim->x);
    if(fim->x==0) break;
 
  
    fim->prox=(cel *)malloc(sizeof(cel));
    if(fim->prox==NULL) return;
  fim=fim->prox;
  }
  fim->prox=NULL;
  fim=ini;
  while(fim->prox!= NULL){
    printf("Valor de  A %d\n ",fim->x);
   
    fim=fim->prox;
  }


}


