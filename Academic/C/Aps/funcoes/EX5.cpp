#include <stdio.h>

float volume(float R)
{
float vol;

vol = 4 * M_PI * pow(R,3) / 3;
return vol;
}
int main( )
{
float raio;
printf("Informe o raio: ");
scanf("%f",&raio);printf("O volume eh: %.2f",volume(raio));
return 0;
}





