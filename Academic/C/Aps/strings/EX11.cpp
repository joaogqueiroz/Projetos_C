#include <stdio.h>
#include <string.h>

void quantidade(char *texto, int contador);
int main(){
	char texto[255];
	int contador;
	gets(texto); 
	contador = strlen(texto);
	quantidade(texto, contador);
	return 0;
}
void quantidade(char *texto, int contador){
	char alf[27]={'a','e','i','o','u','b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','\0'};
	int i, j, vogais=0, consoantes=0;
	for(i=0;i<contador;i++){
		for(j=0;j<27;j++){
			if(texto[i] == alf[j] && j < 5){
				vogais += 1;
			}else if(texto[i] == alf[j] && j >= 5){
				consoantes += 1;
			}
		}
	}
	printf("Vogais:%d\n",vogais);
	printf("Consoantes:%d\n",consoantes);
}
