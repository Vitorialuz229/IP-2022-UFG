//Exercicio 2 - Conversão de temperatura (+)

/*Escreva um programa que imprima uma tabela de conversão de graus Fahrenheit para graus Celsius.
Dado um valor de temperatura F medida na escala Fahrenheit, seu valor equivalente C na escala Celsius é
dado pela seguinte equação: C = 5(F −32)/9
*/
#include <stdio.h>
 
int main(){
    int n, i=0;
    float F, C;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%f", &F);
        
        C = (5*(F-32))/9;
        
        printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", F, C);
    }
 
return 0;
}