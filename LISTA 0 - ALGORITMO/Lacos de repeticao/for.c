#include <stdio.h>
#include <stdlib.h>
 
//Função principal do programa
void main(){
 
    //Definir Variáveis
    int cont;
 
    //Tabuada do 5
    for(cont = 1; cont <= 10; cont++){//para contar defina 'cont' como 1, enquanto 'cont' for menor que 10, 'cont' +1; 
        printf("\n 5 X %d = %d",cont, 5 * cont);
    }
 
    //Contando de 2 em 2
    for(cont = 0; cont <= 10; cont = cont + 2){//para contar defina 'cont' como 0, enquanto 'cont' for menor que 10, 'cont' vai receber 'cont' + 2, se cont for =1 então vai ser 0 + 2 = 2; 
        printf("\n%d",cont);
    }
 
    //Contagem regressiva
    for(cont = 10; cont > 0; cont--){//para contar defina 'cont' como 10, quanto o 'cont' for maior que 0, cont - 1; 
        printf("\n%d", cont);
    }
 
    //Pausa o programa após executar
    system("pause");
 
}