/* Exercicio 14 - Cálculo do imposto de renda (+++) */

/*Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcionário pelo governo.
Seu programa deverá ler a matrícula de um funcionário, o valor do salário mínimo, o número de dependentes, o salário do funcionário e a taxa de imposto normal que já foi paga pelo funcionário. O imposto bruto
é:
• 20% do salário do funcionário, se o funcionário ganha mais de 12 salários mínimos;
• 8% do salário do funcionário, se o funcionário ganha mais de cinco salários mínimos;
• Zero % do salário do funcionário, se ele ganha cinco salários mínimos ou menos
Entrada: O programa deve ler uma linha contendo cinco valores na entrada, separados entre si por um espaço: a
matrícula (um número inteiro), o valor do salário mínimo (double), o número de dependentes (inteiro), o
salário do funcionário (double) e a taxa de imposto (double), nesta ordem.
*/

#include <stdio.h>
 
int main() {
    int matricula, n_dependentes;
    double sal_min, sal_fun, taxa_imp, imp_bruto, imp_liquido, final;
 
    scanf("%d %lf %d %lf %lf", &matricula, &sal_min, &n_dependentes, &sal_fun, &taxa_imp);
 
    if(sal_fun/sal_min > 12){
        imp_bruto = sal_fun*0.2;
        imp_liquido = imp_bruto - 300.00*n_dependentes;
        final = imp_liquido - sal_fun*(taxa_imp/100);
    }
 
    else if(sal_fun/sal_min > 5 && sal_fun/sal_min <= 12){
        imp_bruto = sal_fun*0.08;
        imp_liquido = imp_bruto - 300.00*n_dependentes;
        final = imp_liquido - sal_fun*(taxa_imp/100);
    }
 
    else if(sal_fun/sal_min <= 5){
        imp_bruto = 0.00;
        imp_liquido = imp_bruto - 300.00*n_dependentes;
        final = imp_liquido - sal_fun*(taxa_imp/100);
    }
 
    if(final < 0)
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO A RECEBER\n", matricula, imp_bruto, imp_liquido, final);
    
    if(final == 0)
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO QUITADO\n", matricula, imp_bruto, imp_liquido, final);
 
    if(final > 0)
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO A PAGAR\n", matricula, imp_bruto, imp_liquido, final);
 
return 0;
}