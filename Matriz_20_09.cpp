#include<stdio.h>
#include<stdlib.h>

main(){
  int matriz [4] [4], c,l;
  for(l=0;l<=3;l++)
  	for(c=0;c<=3;c++){
	  printf("Armazenar [%d] [%d]" ,l,c);
	  scanf("%d", &matriz[l][c]);
	  }
  	
  
   printf("====================================");
   printf("============Resultado===============");
   printf("====================================\n" );
   for(l=0;l<=3;l++)
  	for(c=0;c<=3;c++){
	  printf("Armazenado [%d] [%d] = %d \n" ,l,c,matriz[l] [c]);
	  }
    

   printf("====================================");
   printf("============Diagonal===============");
   printf("====================================\n" );
   
   
     for(l=0;l<=3;l++){
  	  for(c=0;c<=3;c++){
  	  	if(l==c)
	    printf("Armazenado [%d] [%d] = %d \n" ,l,c,matriz[l] [c]);
	    }
    }
     printf("====================================");
     printf("============Triangulo Superior========");
     printf("====================================\n" );
   
   
     for(l=0;l<=3;l++){
  	  for(c=0;c<=3;c++){
  	  	if(l<c)
	    printf("Armazenado [%d] [%d] = %d \n" ,l,c,matriz[l] [c]);
	    }
    }
    printf("====================================");
    printf("============Triangulo Inferior========");
    printf("====================================\n" );
   
   
     for(l=0;l<=3;l++){
  	  for(c=0;c<=3;c++){
  	  	if(l>c)
	    printf("Armazenado [%d] [%d] = %d \n" ,l,c,matriz[l] [c]);
	    }
    }
    printf("====================================");
    printf("==========Diagonal Secundaria========");
    printf("====================================\n" );
   
   
     for(l=0;l<=3;l++){
  	  for(c=0;c<=3;c++){
  	  	if(l+c==3)
	    printf("Armazenado [%d] [%d] = %d \n" ,l,c,matriz[l] [c]);
	    }
    }
}  
