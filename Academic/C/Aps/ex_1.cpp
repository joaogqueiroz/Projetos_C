#include <stdio.h>
#include <conio.h>
int main()
{
 char let ; int t=0;
 while(let!='x')
 {
 
 printf("Digite: \n");
 scanf("%c",&let);
 fflush(stdin);
 t++;
 }
 printf("total = %d letras", t);
}
// obs: se fosse enter seria let!=13. 
