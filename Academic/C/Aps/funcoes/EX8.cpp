#include <stdio.h>

#include <conio.h>

int par(int num){

if(num%2==0)

return 1; // verdadeiro

else

return 0; // falso

}

int main(){

int valor;

int result;

result=par(valor);

if(result==1)

printf("\n numero par!\n");

else

printf("\n numero impar!\n");

getch();

return 0;

}
