//Exercício 3 - Divisível por 3 d 5 (+)

/*
Desenvolver um programa que leia um número inteiro e verifique se o número é divisível por três e
também é divisível por cinco.
*/

#include <stdio.h>
#include <stdlib.h>

void main() { 
    int num;
    scanf("%d", &num); //lendo o numero 

    if(num % 3 == 0 || num % 3 == 0) { 
        printf("O NUMERO E DIVISIVEL\n");
    } else { 
    printf("O NUMERO NAO E DIVISIVEL\n");
    } 

return 0; 
}