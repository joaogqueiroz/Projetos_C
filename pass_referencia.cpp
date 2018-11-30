#include<stdio.h>
#include<stdlib.h>



void passagem_referencia(int *x){
*x = (*x) * 2;
}
main(){
int x = 10;
printf("%p\n",&x);
printf("%d\n",x);
passagem_referencia(&x);
printf("%d\n",x);
return 0;



}

