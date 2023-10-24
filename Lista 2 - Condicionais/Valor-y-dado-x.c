//Desenvolver um algoritmo para ler um número x,calcular 
//e imprimir o valor de y de acordo com as condições abaixo
// x, se x < 1 
//0, se x = 1
//x^2, se x > 1
//Entrada: O programa deve ler uma linha contendo um único número inteiro correspondendo ao valor de x.

#include <stdio.h>

int main(){ 
      int x, y;
 
    scanf("%d", &x);
 
    if(x > 1)
        y = pow(x,2);
 
    else if(x == 1)
        y = 0;
 
    else if(x < 1)
        y = x;
    
    printf("Y = %d\n", y);
 
return 0;
}