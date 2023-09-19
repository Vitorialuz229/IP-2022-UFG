//Exercício 1 - Consumo de energia (+)

//Leia o valor do salário mínimo
//Leia a quantidade de kW gasta por residência
//Retorne o valor em reias de cada kW
//Retorne o valor em reais a ser pago pelo consumo da residência 
//Retorne o valor a ser pago pela residência com um desconto de 10%

#include <stdio.h>
#include <stdlib.h>

void main() { 
    double salarioMin, gastoKw, qtdKw, consumo, desconto;
    scanf("%lf %lf", &salarioMin, &qtdKw);

    //100kw - 70% salario min
    //1kw   - x = salariomin*0,7/100
    gastoKw = (0.7*salarioMin)/100;

    //Consumo era o gasto pela resisdência * a quantidade de Kw
    consumo = gastoKw*qtdKw; 

    desconto = 0.9*consumo;

    printf("Custo por kW: R$ %.2lf\n",gastoKw);
    printf("Custo do consumo: R$ %.2lf\n", consumo);
    printf("Custo com desconto: R$ %.2lf\n", desconto);

return 0;
}