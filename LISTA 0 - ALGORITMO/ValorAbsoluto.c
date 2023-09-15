#include <stdio.h>
#include <stdlib.h> 

//Crie um algoritmo que leia 2 notas e mostre o valor absoluto 
//da diferença entre elas

void main() { 
    int nota1, nota2, diferenca;   
    scanf("%d %d", &nota1, &nota2);

    diferenca = abs(nota1 - nota2); 

    printf("O valor a absoluto da diferenca eh %d", diferenca);
    return 0;
}