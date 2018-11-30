#include<stdio.h>
#include<stdlib.h>

main(){

  FILE * arq;
  arq= fopen("teste.txt","r");
if ((arq = fopen("teste.txt","w")) == NULL)
{
printf("\n Arquivo TESTE.TXT não pode ser aberto”);
}

}

