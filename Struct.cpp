#include<stdio.h>
#include<stdlib.h>


 
    

main(){
	struct aluno
	{
  	int matricula;
  	char  classe[50];
  	char socio[5];
    };
  
    struct aluno Aluno[2];


    int i=0;
	for(i=0;i<=2;i++){
    printf("Matricula do aluno: \n");
	scanf("%i", &Aluno[i].matricula);
    printf(" E' socio do clube sbc' : \n");
    gets(Aluno[i].socio);
	printf("Classe : \n");
    gets(Aluno[i].classe);

  
}

	for(i=0;i<=2;i++){
	
	printf("%d:",Aluno[i].matricula);
    printf("%c :",Aluno[i].classe);
     printf("%b :",Aluno[i].socio);
}




}

