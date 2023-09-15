//Crie um algoritmo que leia 3 números inteiros de uma só vez e 
//coloque os resultados da multiplicação entre os 3 em uma variável própria 
//depois exiva essa variável
 
#include <stdio.h>
#include <stdlib.h> 

void main() { 
    int n1, n2, n3, resultado; //definindo variáveis

    scanf("%d %d %d", &n1, &n2, &n3);// lendo 3 valores
    printf("Digite as 3 notas:"); 

    resultado = n1* n2* n3; 
    printf("Resultado eh %d", resultado);

return 0;
}