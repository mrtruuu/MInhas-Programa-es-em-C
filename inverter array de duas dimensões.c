/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor[3][3];
    int resultado[3][3];
    int i,j;
    
    valor[0][0]=12;
    valor[0][1]=9;
    valor[0][2]=1;
    
    valor[1][0]=15;
    valor[1][1]=6;
	valor[1][2]=8;
	
	valor[2][0]=11;
	valor[2][1]=4;
	valor[2][2]=66;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("valor[%d][%d]=%d\n",i,j,valor[i][j]);
		}
	}
		
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	    	resultado[j][i]=valor[i][j];
	    }
	
    }
    
   for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           printf("o resultado do array eh [%d][%d]=%d\n",i,j,resultado[i][j]);
           
       }
   }
           
       
    return 0;
    
}


