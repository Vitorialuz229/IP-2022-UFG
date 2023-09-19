//Exercicios 8 - Custo Final de um Carro (++)

//Leia preço de fábrica do carro, percentural do distribuidor e o percentual de imposto
//Retorno preço final do carro ao consumidor 

#include <stdio.h>

void main() {
    double custoFabr, porDistribuidor, porImpostor, custoFinal; 
    scanf("%lf %lf %lf", &custoFabr, &porDistribuidor, &porImpostor);

    custoFinal = custoFabr + custoFabr*(porDistribuidor/100) + custoFabr*(porImpostor/100); 

    printf("O VALOR DO CARRO E = %.2lf", custoFinal);

return 0; 
}