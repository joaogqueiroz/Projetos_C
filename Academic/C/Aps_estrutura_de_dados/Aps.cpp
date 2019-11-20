#include<stdio.h>


main(){
	int i, j, x;
	int aux = 0;
	int mat1 [2][2] = {1,5,2,9};
	int mat2 [2][2] = {2,8,1,0};
	int matf[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			matf[i][j] = 0;
				for(x=0;x<2;x++)
				{
				aux += mat1[i][x] * mat2[x][j];
				}
			matf[i][j] = aux;
			aux = 0;
		}
	}
	printf ("\n Matriz final ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	printf("\n Matriz[%d][%d] = %d ", i,j,matf[i][j]);
		}
	}	
}
