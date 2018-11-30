#include <stdio.h>


int n;
char resposta[5];
char par[] = "PAR";
char impar[] = "IMPAR";
char resposta2[4];
char sim[] = "SIM";
char nao[] = "NAO";


void strUpper(char *str){
    int i;
    for(i=0;i<strlen(str);i++) str[i] = toupper(str[i]);
}

int adivinha()
	{
    printf("\n O numero pensado e par ou impar? [PAR/IMPAR]\n");
    scanf("%s", resposta);

    strUpper(resposta);

    if(!strcmp(resposta, par))
		{
        printf("\n Divida o numero por 2\n");
        return 2*adivinha();
   		} 
    	
		else if (!strcmp(resposta, impar))
			{
        	printf("\n O numero atual e 1? [SIM/NAO] \n");
        	scanf("%s", resposta2);
		
        	strUpper(resposta2);

        	if(!strcmp(resposta2, sim))
				{
            	return 1;
        		}
				else if (!strcmp(resposta2, nao))
					{
            		printf("\n Subtraia 1 do numero atual e divida o resultado por 2\n");
            		return 1 + 2*adivinha();
        			}
        	}
        	
	}
	
int main(int argc, char const *argv[])
{    
    printf("\n O numero que pensou foi: %d \n", adivinha());
    return 0;
}
