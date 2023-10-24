//Exercicio 6: Reajuste Salarial (+)

//Fazer um algoritmo que calcule e imprima o salário reajustado de um funcionário de acordo com as
//seguintes regras:
//--Salário de até R$ 300,00, reajuste de 50%;
//--Salário maior que R$300,00 reajuste de 30%
//Entrada: salário do funcionario

#include <stdio.h> 

    int main(){ 

    double salario, reajuste;
 
    scanf("%lf", &salario);
 
    if(salario > 300.00)
        reajuste = salario + salario*0.3;
    
    else
        reajuste = salario + salario*0.5;
    
    printf("SALARIO COM REAJUSTE = %.2lf\n", reajuste);
 
return 0;
}