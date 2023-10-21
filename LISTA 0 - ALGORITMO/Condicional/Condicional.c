#include <stdio.h>

void main() { 
    //Definição Variáveis 
    int a = 5, opcao = 1; 

    //Condicional Simples
    if(a == 5) { 
        printf("A variavel a = 5");
    }
    //Condicional Composta      
    //Numero par ou ímpar
    if(a % 2 == 1) {         
        printf("\n A variavel a eh par"); 
    }else { 
        printf("\n A variavel a eh impar");
    }

    if(opcao == 1) { 
        printf("\n opcao = 1"); 
    }else if(opcao == 2) { 
        printf("\n opcao = 2");
    } else{ 
        printf("\n opcao nao eh igual a 1 e nem 2");
    }
return 0;
}