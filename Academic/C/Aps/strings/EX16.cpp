#include <stdio.h>
#include <string.h>
 
int main() 
{ 
char nome[20]; 
printf("\n"); 
printf("Convertendo uma string para maiúsculas\n"); 
printf("------------------------------------\n"); 
printf("\n"); 
printf("Entre com a string :"); 
scanf("%s",&nome); 
printf("\n"); 
printf("string digitada : %s\n",nome); 
printf("\n"); 
printf("Convertendo para maiúsculas : %s\n",strupr(nome)); }
