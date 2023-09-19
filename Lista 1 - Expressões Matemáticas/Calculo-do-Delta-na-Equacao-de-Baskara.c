//Exercício 4 - Cálculo do Delta na Equação de Báskara (+)

//Leitura de 3 valores referente ao coeficiente A, cooeficiente B
//coeficiente C
//Retorno o Delta calculado pelo programa
#include <stdio.h>
#include <math.h>

void main() { 
    double CofA, CofB, CofC, Delta;
    scanf("%lf %lf %lf", &CofA, &CofB, &CofC);

    Delta = ((CofB*CofB) - (4*CofA*CofC));   

    printf("O VALOR DE DELTA E = %.2lf", Delta);
return 0; 
}