#include<stdio.h>

main(){
int	mat[2][2], mat2[2][2], res[2][2];
	for(int i=0;i<2;i++)
	  for(int j=0;j<2;j++){
		printf("Digite o elemento que quer guardar: \n");
		scanf("%d", &mat[i][j]);
		//segunda matriz
		printf("Digite o segundo elemento que quer guardar: \n");
		scanf("%d", &mat2[i][j]);
	}
		
	

    for(int i=0;i<2;i++)
	  for(int j=0;j<2;j++) {
	res[i][j]=mat[i][j]*mat2[i][j];
		
		}
	for ( int i=0; i<2; i++ )
	  for(int j=0;j<2;j++){
       printf ("reslt[%d][%d]: \n %d \n",i,j, res[ i][j]);
     
        }
}
	
	
	
		

