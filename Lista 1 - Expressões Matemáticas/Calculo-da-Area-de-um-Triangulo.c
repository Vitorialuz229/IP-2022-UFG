//Exercício 7 - Cálculo de Área de um Triângulo (++)

//Leia os 3 lados do triângulos 
//Retorno a Área do Triângulo

#include <stdio.h>
#include <math.h>

void main() { 
    double L1, L2, L3, T, Area;
    scanf("%lf %lf %lf", &L1, &L2, &L3);

    T = (L1 + L2 + L3)/2;
    Area = sqrt(T*(T-L1)*(T-L2)*(T-L3));

    printf("A AREA DO TRIANGULO E = %.2lf", Area);

return 0;
}