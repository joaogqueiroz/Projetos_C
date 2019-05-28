#include <stdio.h>
#include <string.h>

main()
{
    char string[100];
    char ch1, ch2[1];
    int x, tam;

    printf ("Digite uma frase:\n");
    gets(string);
    printf ("Digite alguma letra q exista na frase acima:\n");
    scanf ("%c", &ch1);
    printf ("Digite alguma letra q exista ou nao na frase acima:\n");
    scanf ("%c", &ch2[1]);
gets(ch2);
    tam=strlen(string);
    for (x=0;x<tam;x++){
        if (string[x]=ch1){
            ch1=ch2[1];
        }
    }
    printf ("%s", string);
}
