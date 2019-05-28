#include <stdio.h>
#include <stdlib.h>


void calcula_tempo( int &hora, int &minuto){
int min_hora=60;
hora=minuto/min_hora;//calcula hora
minuto=(minuto-(min_hora*hora)); //calcula minutos

}


int main(){
int minuto,hora=0;
printf("Informe a quantidade de minutos: \n\n");
scanf("%d",&minuto);

calcula_tempo(hora,minuto);

printf("\n\nJa se passaram: %d hora(s) e %d minuto(s)\n\n",hora,minuto);

system("pause");
return 0;
}
