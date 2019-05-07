#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

main(){
    //FALTA TRATAR AS NOTAS SE ESTÃO IGUAS E SOMAR OS PONTOS
    //DENTRO DO ARRAY DE NOTAS
    //ERRO NA HORA DE GRAVAR AS NOTAS
	int i, f;
	char gab[]={'A','E','D','C','B'};
	char alunos[10][5];
	int notas[10];
	for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            printf("Entre com o gabarito do aluno [%d] questao[%d]",i,j);
            fflush(stdin);
            gets(alunos[i]);
            fflush(stdin);
		}
    }

   for(int i=0;i<10;i++){
       printf("\n");
        for(int j=0;j<5;j++){
            printf("o aluno [%d] questao[%d]",i,j);
            puts(alunos[i]);
        }
   }



}

