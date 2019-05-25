/*Escreva um programa para armazenar o nome,idade,altura e telefone de 5 amigos em um
arquivo texto através da estrutura
struct pessoa{
 char nome[50];
 int idade;
 float altura;
 char telefone[10];
}
que deve ser redefinida como tipo de nome AMIGOS.
Para cada amigo estes dados serão preenchidos pelo usuário antes do armazenamento
de cada registro no arquivo. Cada registro deve ficar numa linha do arquivo*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct pessoa{
 char nome[50];
 int idade;
 float altura;
 char telefone[10];
} amigo;

int main() {
	char idade[100];
	char altura[100];
    setlocale(LC_ALL, "portuguese");
    FILE *arq;
    arq = fopen("arquivo.txt", "a");
    if (arq == NULL) {
        printf("Erro na gravação de dados\n\n");
        system("pause");
        exit(1);
    }
    int n, i;
    printf("Digite qnts funcionarios gostaria de inserir: ");
    scanf("%d", &n);
    amigo x[n];
    for (i = 0; i < n; i++) {
        getchar();
        printf("Nome: ");
        fgets(x[i].nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &x[i].idade);
        printf("altura ");
        scanf("%f", &x[i].altura);
        printf("telefone: ");
        fgets(x[i].telefone, 10, stdin);
     

    }
    printf("\n----DADOS---\n");

    for (i = 0; i < n; i++) {
        printf("\nNome: %s", x[i].nome);
        printf("\nIdade: %d", x[i].idade);
        printf("\nAltura: %f", x[i].altura);
        printf("\nTelefone: %s", x[i].telefone);
    
        printf("------------------------------\n");
    }
    printf("\n DADOS GRAVADOS EM ARQUIVOS \n ");
	
      
    for (i = 0; i < strlen(x[i].nome); i++) {
        fprintf(arq, x[i].nome);
        fprintf(arq, " ; ");
    }
    for (i = 0; i < (x[i].idade); i++);
    	itoa(x[i].idade,idade,10);
    	fprintf(arq,idade); 
    	fprintf(arq, " ; ");
    for (i = 0; i < (x[i].altura); i++);
    	itoa(x[i].altura,altura,10);
    	fprintf(arq,altura);
    	fprintf(arq, " ; ");
    for (i = 0; i < strlen(x[i].telefone); i++);
    	fprintf(arq,x[i].telefone);
    	fprintf(arq, " ; ");
    	fclose(arq);
    return 0;
}
