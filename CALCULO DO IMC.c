/******************************************************************************

Nome : Henrique Padilha Balbino
aula 01
15/10/21
Sistema IMC : Entre com a Altura e Peso e 
print para o usuário o indice e sua classificação

Resultado :: seu indice é xx,x e sua classificação é xxxxxxx
*/



#include <stdio.h>

int main()

{   float altura, peso, imc ; // declaração das variavéis 

    printf("digite seu peso em Kg e sua altura em metros : \n");
    scanf("%f%f", &peso, &altura);
    
    imc = (peso/(altura*altura)); // calcúlo do Índice de Massa corporal IMC
    
    printf("o valor de imc de (peso/(altura*altura))= %f%f \n",imc);
    
    if(imc < 18.5) {
        printf("o valor de imc é < 18.5 %f\ magreza\n"); // Classificação magreza
    }  
    else if(imc >= 18.5 && imc < 24.5) // Classificação normal
       
        printf("o valor de imc é < 24.5 %f\ normal\n");
        
    else if(imc >= 25 && imc < 29.9)  
        
        printf("o valor de imc é < 29,9 %f\ sobrepeso\n"); // Classificação sobrepeso
        

    else if(imc >= 30 && imc < 39.9)
    
         printf("o valor de imc é < 39,9 %f\ obesidade\n"); // Classificação obesidade
        
    else if(imc >= 40)
       
        printf("o valor de imc é < 39,9 %f\ obesidade grave\n"); // Classificação obesidade grave> ;
        
    }    
        
    
    






