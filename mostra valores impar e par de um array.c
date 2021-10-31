/******************************************************************************

implemente um sistema que entre com 6 valores e mostre para os 
usuários quais são impares e quais são pares.

Nome : Henrique Padilha Balbino
Tutma 7 Téc. em Informática
Excercíco : valores pares e impares
30/10/2021
*******************************************************************************/
#include <stdio.h>

int main ()

{
    
  int i, valor[7];
  int resultado = 0;
  int par[7];
  int impar[7];

     for (i = 1; i < 7; i++)
    {
      printf ("digite o array na posicao %d\n", i);
      scanf ("%d", &valor[i]);

    }

      for (i = 1; i < 7; i++)
	{
	  if (valor[i] % 2==0)
	    {
	     printf("o valor do valor[%d] =%d é par\n", i, valor[i]);
	    }
	  else
	    {
	     printf("o valor do valor[%d] =%d é impar\n", i, valor[i]);
	     
	    }
	}

	 
	  return 0;
}



