//Exercicio 3 - Quadrado de pares (+)

/*Escreva um programa para ler um valor inteiro N e que gere o quadrado de cada um dos valores pares,
de 1 até N, inclusive N, se for o caso1. 
Entrada:A entrada conterá uma linha com um valor inteiro N, 5 < N < 2000*/

#include <stdio.h>
#include <math.h>
 
int main(){
    int n, i=0, quadrado, k=2;
    
    scanf("%d", &n);
    
    while(i < n/2){
        
        quadrado = pow(k,2);
        
        printf("%d^2 = %d\n", k, quadrado);
        k += 2;
        i++;
    }
return 0;
}