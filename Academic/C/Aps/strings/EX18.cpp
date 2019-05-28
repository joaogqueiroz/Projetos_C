
CODIGO EM C

Construir um programa que pede para o usuário: 
(i) Uma string s, 
(ii) Um caractere ch1, 
(iii) Um caractere ch2. 
O programa deve substituir todas as ocorrências do caractere ch1 em s pelo 
caractere ch2.

Compilei e executei no Code Blocks, aqui esta o codigo:


#include <stdio.h>
#include <string.h>

main()
{
    char string[100];
    char ch1;
    char ch2;
    int x, tam;

    printf ("Digite uma frase:\n");
    gets(string);
    printf ("Digite alguma letra q exista na frase acima:\n");
    scanf ("%c", &ch1);
    printf ("Digite alguma letra q exista ou nao na frase acima:\n");
    scanf ("%c", &ch2);
    tam=strlen(string);
    for (x=0;x<tam;x++){
        if (string[x]=ch1){
            ch1=ch2;
        }
    }
    printf ("%s", string);
}
 
