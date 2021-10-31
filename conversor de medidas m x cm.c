/******************************************************************************

Projeto de Conversor de medidas
metros x centímetros
Por: Henrique Padilha Balbino
Exercício II - Mód. C Téc. em Informática
*******************************************************************************/
#include <stdio.h>

int main(){
  // entrda - start
  
  float metros=0, centimetros=0;

  printf("digite o valor em metros \n" ); 
  scanf("%f", &metros);
  
  // entrada - end
  
  // processamento - start
  
  centimetros = metros * 100;
  
  // processamento - end
  
  // saida - start
  
  printf("%1.f cm", centimetros);
  scanf("%f", centimetros);

// saida - end


  return 0;

}





