/*1. Crie um arquivo texto e depois escreva um programa que abra este arquivo texto e
conte o número de caracteres presentes nele. Imprima o número de caracteres na tela.*/
#include <stdio.h>
int main(void)
{
FILE *pont_arq; // cria variável ponteiro para o arquivo
char palavra[20]; // variável do tipo string
char texto_str[20];
int c,total=0;
//abrindo o arquivo com tipo de abertura w
pont_arq = fopen("arquivo_palavra.txt", "w");
//testando se o arquivo foi realmente criado
if(pont_arq == NULL)
{
printf("Erro na abertura do arquivo!");
return 1;
}
printf("Escreva uma palavra para testar gravacao de arquivo: ");
scanf("%s", palavra);
//usando fprintf para armazenar a string no arquivo
fprintf(pont_arq, "%s\n", palavra);
//usando fclose para fechar o arquivo
fclose(pont_arq);
printf("Dados gravados com sucesso!");

//abrindo o arquivo_frase em modo "somente leitura"
pont_arq = fopen("arquivo_palavra.txt", "r");
do
{
 //faz a leitura do caracter no arquivo apontado por pont_arq
 c = getc(pont_arq);
 total+=1;
}while (c != EOF);
printf("\nTotal: %d",total-2);
//fechando o arquivo
fclose(pont_arq);

return(0);
}
