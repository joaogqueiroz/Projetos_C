#include <stdio.h>

int main (){
	
	float celsius, fahr;
	int  c = 167;
	
	printf("Digite uma temperatura em %cC : ", c);
	
	scanf("%f", &celsius);
	
	fahr = celsius*(9.0/5.0)+32;
	
	printf("%3.f%cC e o mesmo que %3.f%cF", celsius, c, fahr,c );
}
