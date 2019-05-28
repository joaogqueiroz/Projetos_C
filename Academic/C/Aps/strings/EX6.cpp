
#include <stdio.h>
#include <string.h>
int main()
{
    char nome, sexo;
    int idade;
    printf("\n\n Insira o seu nome:);
    scanf("%c", &nome);
    printf("\n\n Insira sua idade:");
    scanf("%d", &idade);
    printf("\n\n Insira o seu sexo: M - masculino F - feminino ");
    scanf("%c", &sexo);
    if (sexo='F' && idade<25)
    {
        printf("%c",nome,"\n ACEITA \n");
    }
    else
    {
        printf ("%c", nome,"\n Nao aceita \n");
    }
    printf("\n\n");}
 
