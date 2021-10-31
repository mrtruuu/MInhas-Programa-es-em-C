//Nome : Henrique Padilha Balbino
//Exercício III - Vetores / Arrays
// Cuuso Téc. em Informática Mód. Cuuso
// Encontrar o maior, menor e media de valor do array pré estabelicido

#include <stdio.h>

int
main ()
{
    int i, valor[7]={15,66,12,0,6,10,7},soma = 0; //declaração das variaveis// vetores
    //int i (significa que  o valor deve ser um número inteiro)
    // valor[7] ( significa que existem 7 posiçoes desse vetor , sendo iniciando de 0 a 6 )
    int maior=valor[0];
    int menor=valor[0]; // siginifica que a busca pela variaveis maior ou menor irão iniciar a busca pela primeira 
    // , posição ou seja a posição zero 
    float media;
       
       
       for(i=0;i<7;i++){ // formúla para encontrar todos os valores  dentro do laço de repetição  
           if (valor[i] < menor) menor = valor[i]; // o comando If , checa a condição pré estabelecida pelo usuário
           if (valor[i] > maior) maior = valor[i];
           soma = soma + valor[i];
           media = soma/7;
       }
       
      printf("\n\n maior: %d\n", maior); //resultado=(resultado + valor[i])
      printf(" menor: %d", menor);
      
      printf("\n\n media = %f\n", media);
    
     
       return 0;
}       

 






