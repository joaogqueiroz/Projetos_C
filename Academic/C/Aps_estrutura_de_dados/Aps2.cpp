#include<stdio.h>
//ALUNOS
//Nome:João Gilberto G.C de Queiroz
//Matricula:2017200385
//Nome:Matheus Moura de Carvalho
//Matricula:2017200415
//Nome:
//Matricula:
//Nome:
//Matricula:
main(){
	char matOri[3][2]= {'B','S','R','I','A','L'};
	int l, c, aux;
	int matadj[3][5] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int matNum [3][2];
	int matCrip [3][3] = {1,0,1,1,1,1,0,2,-1}; //
	int matCripf [3][2]; //matriz final criptografada
	int matinv[3][3];
	for(l=0;l<3;l++){
		for(c=0;c<2;c++){			
			switch(matOri[l][c]){
				case 'A':
					matNum[l][c] = 1;
					break;
				case 'B':
					matNum[l][c] = 2;
					break;
				case 'C':
					matNum[l][c] = 3;
					break;	
				case 'D':
					matNum[l][c] = 4;
					break;
				case 'E':
					matNum[l][c] = 5;
					break;
				case 'F':
					matNum[l][c] = 6;
					break;
				case 'G':
					matNum[l][c] = 7;
					break;
				case 'H':
					matNum[l][c] = 8;
					break;
				case 'I':
					matNum[l][c] = 9;
					break;
				case 'J':
					matNum[l][c] = 10;
					break;
				case 'K':
					matNum[l][c] = 11;
					break;	
				case 'L':
					matNum[l][c] = 12;
					break;
				case 'M':
					matNum[l][c] = 13;
					break;
				case 'N':
					matNum[l][c] = 14;
					break;
				case 'O':
					matNum[l][c] = 15;
					break;
				case 'P':
					matNum[l][c] = 16;
					break;
				case 'Q':
					matNum[l][c] = 17;
					break;
				case 'R' :
					matNum[l][c] = 18;
					break;
				case 'S':
					matNum[l][c] = 19;
					break;
				case 'T':
					matNum[l][c] = 20;
					break;
				case 'U':
					matNum[l][c] = 21;
					break;	
				case 'V':
					matNum[l][c] = 22;
					break;
				case 'W':
					matNum[l][c] = 23;
					break;
				case 'X':
					matNum[l][c] = 24;
					break;
				case 'Y':
					matNum[l][c] = 25;
					break;
				case 'Z':
					matNum[l][c] = 26;
					break;
			}
		}
	}
	printf("====================Matriz Inserida====================");
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<2;c++){		
		printf(" %c ",matOri[l][c]);	
		}
	}
	printf("\n");
	printf("====================Matriz Transformada====================");
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<2;c++){		
		printf(" %d ",matNum[l][c]);	
		}
	}
	for(l=0;l<3;l++)
	{
		for(c=0;c<2;c++)
		{
			matCripf[l][c] = 0;
				for(int x=0;x<3;x++)
				{
				aux += matCrip[l][x] * matNum[x][c];
				}
			matCripf[l][c] = aux;
			aux = 0;
		}
	}
	printf("\n");
	printf("====================Matriz Criptografada====================");
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<2;c++){		
		printf(" %d ",matCripf[l][c]);	
		}
	}
	printf("\n\n");
	printf("===================================DESCRIPTOGRAFANDO===================================");
	printf("\n");	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			matadj[l][c] = matCrip[l][c];
		}
	}
	
	int colunaadj = 3;
	for(l=0;l<3;l++){
		for(c=0;c<1;c++){
			matadj[l][colunaadj] = matCrip[l][c];
			
		}
	}
    colunaadj ++;
	for(l=0;l<3;l++){
		for(c=1;c<2;c++){
			matadj[l][colunaadj] = matCrip[l][c];
			
		}
	}
	int ledet = 0; //determinante a esquerda
	int lddet = 0; //determinante a direita
	//diagonal principal
	lddet += matadj[0][0] * matadj[1][1] * matadj[2][2];
	lddet += matadj[0][1] * matadj[1][2] * matadj[2][3];
	lddet += matadj[0][2] * matadj[1][3] * matadj[2][4];
	//diagonal secundura 
	ledet -= matadj[0][4] * matadj[1][3] * matadj[2][2];
	ledet -= matadj[0][3] * matadj[1][2] * matadj[2][1];
	ledet -= matadj[0][2] * matadj[1][1] * matadj[2][0];
	int det =  lddet - (ledet * -1);
	printf("\n\n");
	printf("determinante: %d",det);
	printf("\n\n");
	//cofatores
					 //direita menos esquerda 
	matinv[0][0] = (matCrip[1][1] * matCrip[2][2]) - (matCrip[1][2] * matCrip[2][1]); 
	matinv[0][1] = (matCrip[1][0] * matCrip[2][2]) - (matCrip[1][2] * matCrip[2][0]);
	matinv[0][2] = (matCrip[1][0] * matCrip[2][1]) - (matCrip[1][1] * matCrip[2][0]);
	
	matinv[1][0] = (matCrip[0][1] * matCrip[2][2]) - (matCrip[0][2] * matCrip[2][1]);
	matinv[1][1] = (matCrip[0][0] * matCrip[2][2]) - (matCrip[0][2] * matCrip[2][0]);
	matinv[1][2] = ((matCrip[0][0] * matCrip[2][1]) - (matCrip[0][1] * matCrip[2][0]));
	
	matinv[2][0] = (matCrip[0][1] * matCrip[1][2]) - (matCrip[0][2] * matCrip[1][1]);
	matinv[2][1] = (matCrip[0][0] * matCrip[1][2]) - (matCrip[0][2] * matCrip[1][0]);
	matinv[2][2] = (matCrip[0][0] * matCrip[1][1]) - (matCrip[0][1] * matCrip[1][0]);

	aux = 0;
	for (l = 0; l < 3; l++) {
    	for (c = l+1; c < 3; c++) {
      	if (c != l) {
   			aux = matinv[l][c];
  			matinv[l][c] = matinv[c][l];
   			matinv[c][l] = aux;
      		}
    	}
  	}
  	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){		
		matinv[l][c]/det;	
		}
	}
	aux = -1;
	matinv[0][0] = matinv[0][0] * aux;
	matinv[0][2] = matinv[0][2] * aux;
	matinv[1][1] = matinv[1][1] * aux;
	matinv[2][0] = matinv[2][0] * aux;
	matinv[2][2] = matinv[2][2] * aux;
	printf("\n");
	printf("====================Matriz Inversa====================");
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<3;c++){		
		printf(" %d ",matinv[l][c]);	
		}
	}
	int matdescrip[3][2];
	aux=0;
	for(l=0;l<3;l++)
	{
		for(c=0;c<2;c++)
		{
				matdescrip[l][c] = 0;
				for(int x=0;x<3;x++)
				{
				aux += matinv[l][x] * matCripf[x][c];
				}
			matdescrip[l][c] = aux;
			aux = 0;
		}
	}
	printf("\n");
	printf("====================Matriz Descriptografada====================");
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<2;c++){		
		printf(" %d ",matdescrip[l][c]);	
		}
	}
	printf("\n");
	for(c=0;c<2;c++){
		for(l=0;l<3;l++){
					
			switch(matdescrip[l][c]){
				case 1:
					printf("A");
					break;
				case 2:
					printf("B");
					break;
				case 3:
					printf("C");
					break;	
				case 4:
					printf("D");
					break;
				case 5:
					printf("E");
					break;
				case 6:
					printf("F");
					break;
				case 7:
					printf("G");
					break;
				case 8:
					printf("H");
					break;
				case 9:
					printf("I");
					break;
				case 10:
					printf("J");
					break;
				case 11:
					printf("K");
					break;	
				case 12:
					printf("L");
					break;
				case 13:
					printf("M");
					break;
				case 14:
					printf("N");
					break;
				case 15:
					printf("O");
					break;
				case 16:
					printf("P");
					break;
				case 17:
					printf("1");
					break;
				case 18:
					printf("R");
					break;
				case 19:
					printf("S");
					break;
				case 20:
					printf("T");
					break;
				case 21:
					printf("U");
					break;	
				case 22:
					printf("V");
					break;
				case 23:
					printf("W");
					break;
				case 24:
					printf("X");
					break;
				case 25:
					printf("Y");
					break;
				case 26:
					printf("Z");
					break;
			}
		}
	}
	//Uma maneira simples de melhorar a cripitografia é colocar mais uma camada e embaralhar a mensagem de uma outra maneira.
}


