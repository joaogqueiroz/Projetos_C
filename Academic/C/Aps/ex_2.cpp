/*3
ZE SA
8.5
10.0
ANTONIO SANTOS
7.5
8.5
SEBASTIAO OLIVEIRA
5.0
6.0
A primeira linha contém o número de alunos no arquivo. As linhas seguintes
contém os seguintes dados:
•nome do aluno com no máximo 50 caracteres;
•nota da primeira prova;
•nota da segunda prova.
Escreva um programa que leia este arquivo e imprima os nomes de todos os
alunos que têm a média das duas notas menor que 7.0*/
#include <stdio.h>
int main(void)
{
FILE*pf=fopen(ArquivoNome,"r");
int n,i;
float nota1,nota2;
fscanf(pf,"%d",&n);
charnome[50];
fgets(nome,50,pf);//pula a proxlinha
for(i=0;i<n;i++)
{
fgets(nome,50,pf);
fscanf(pf,"%f%f",&nota1,&nota2);
if((nota1+nota2)/2<7)
printf("%s\n",nome);
fgets(nome,50,pf);//pula a proxlinha
}
fclose(pf);
}

}

