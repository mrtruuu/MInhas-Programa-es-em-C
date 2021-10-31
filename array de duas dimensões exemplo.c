/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor[3][3];
    int i,j;
    
    valor[0][0]=12;
    valor[0][1]=15;
    valor[0][2]=11;
    
    valor[1][0]=9;
    valor[1][1]=6;
	valor[1][2]=4;
	
	valor[2][0]=1;
	valor[2][1]=8;
	valor[2][2]=66;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("valor[%d][%d]=%d\n",i,j,valor[i][j]);
		}
	}


    return 0;
}
