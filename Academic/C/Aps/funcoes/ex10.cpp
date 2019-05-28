#include<stdlib.h>
#include<stdio.h>
int maior(int X, int Y, int Z);
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	printf("Maior: %d\n\nMenor:%d\n\n", maior(a, b, c));
	
	system("pause");
	return 0;
	
}


int maior(int X, int Y, int Z){ 
    int maior, menor;

    if(X > Y){
    	maior = X;
    }else{
        maior = Y;
    }
    if(Z > maior){
        maior = Z;   
    }
	
    if(X < Y){
    	menor = X;
    }
    else{
        menor = Y;
    }
    if(Z < menor){
        menor = Z;
       
    }
    return(maior, menor);
    
}
