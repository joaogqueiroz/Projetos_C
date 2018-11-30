#include <stdio.h>
#include <stdlib.h>

#define MAX 2

typedef struct TipoAluno {
	char nome[20];
	int matricula;
	float n1, n2, n3, n4, media;
} TipoAluno;

TipoAluno VetAlunos[3];

int main() {
	int i,j;
	for (i=0;i<3;i++){
		printf("Digite o nome do aluno [%d]: ",i);
		scanf("%s", &VetAlunos[i].nome);
		printf("Digite a matricula do aluno [%d]: ",i);
		scanf("%d", &VetAlunos[i].matricula);
		printf("Digite a Nota 1 do aluno [%d]: ",i);
		scanf("%f", &VetAlunos[i].n1);
		printf("Digite a Nota 2 do aluno [%d]: ",i);
		scanf("%f", &VetAlunos[i].n2);
		printf("Digite a Nota 3 do aluno [%d]: ",i);
		scanf("%f", &VetAlunos[i].n3);
		printf("Digite a Nota 4 do aluno [%d]: ",i);
		scanf("%f", &VetAlunos[i].n4);
		VetAlunos[i].media = ((VetAlunos[i].n1+VetAlunos[i].n2+VetAlunos[i].n3+VetAlunos[i].n4)/4);
	}
	for (i=0;i<3;i++){
		printf("\nNome do Aluno %d: %s",i,VetAlunos[i].nome);
		printf("\nMatricula do Aluno %d: %d",i,VetAlunos[i].matricula);
		printf("\nNota 1 = %0.1f | Nota 2 = %0.1f | Nota 3 = %0.1f | Nota 4 = %0.1f",i,VetAlunos[i].n1,VetAlunos[i].n2,VetAlunos[i].n3,VetAlunos[i].n4);
		printf("\nMedia %0.1f",VetAlunos[i].media);
	}
}
