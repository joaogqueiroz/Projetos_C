#include<stdio.h>
#include<stdlib.h>
/*11. Faça uma função recursiva para calcular os números de Catalan. Os números de Catalan são definidos pela seguinte recursão
C(n) = 1 se n = 0
C(n) = 2(2n-1)n+1 C(n - 1) se n > 0
Alguns números desta sequência são: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796,
58786...*/

int catalan(int n) {
	if(n == 0) {
		return 1;
	}
	return 2 * (2 * n - 1) * catalan(n - 1) / (n + 1);
}

main(){

int num;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Resultado: %d  \n",catalan(num));


}

