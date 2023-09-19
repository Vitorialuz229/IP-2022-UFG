//Exercício 12 - Valor em Notas e Moedas (+++)

//Leia o valor em reias
//Quantidade de cada nota ou moeda

#include <stdio.h>

void main() { 
    int NotaCem, NotaCinq, NotaDez, valor, Moeda;    
    scanf("%d", &valor);

    NotaCem = valor/100; //NotaCem recebe o resultado da divisão
    valor %= 100; //valor recebe o resto da divisão e armazena
    NotaCinq = valor/50; NotaCinq; //recebe o resultado da divisão
    valor %= 50; // valor recebe o resto da divisão e armazena
    NotaDez = valor/10; //NotaDez recebe o resultado da divisão
    valor %= 10; //valor recebe o resto da divisão e armazena
    Moeda = valor;

    printf("NOTAS DE 100 = %d\n", NotaCem);
    printf("NOTAS DE 50 = %d\n", NotaCinq);
    printf("NOTAS DE 10 = %d\n", NotaDez);
    printf("MOEDAS DE 1 = %d\n", Moeda);

return 0;
}