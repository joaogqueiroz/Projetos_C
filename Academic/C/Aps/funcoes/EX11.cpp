
#include <stdio.h> 
#include <stdlib.h>

main() { 
int numero, SOMA=0 , a; 

printf("Informe um numero: "); 

scanf("%d", &numero); 
a = numero ;

if (numero > 0) { 

while (numero > 0) { 

SOMA = SOMA + numero % 10; 

numero = numero / 10; 
}

printf("Soma dos algarismos do numero %d eh : %d\n", a, SOMA);
}

else printf("Numero igual ou menor que zero\n");

return 0;
}

