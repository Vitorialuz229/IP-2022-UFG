//Exercicio 11 - Raízes de equações de grau 2

/*Desenvolver um programa que leia os coeficientes (a, b e c) de uma equação de segundo grau e calcule
as raízes da equação. O programa deve mostrar a classificação das raízes, e, quando possível, o valor das
raízes calculadas.
Entrada: O programa deve ler três valores double na entrada. O primeiro valor corresponde ao valor do coeficiente a, o segundo, do coeficiente b e o terceiro, do coeficiente c, de uma equação de segundo grau. Os
três valores ocorrem em uma única linha na entrada, separados entre si por um espaço.
*/

#include <stdio.h>
#include <math.h>
 
int main(){
    double a, b, c, x1, x2, delta;
 
    scanf("%lf %lf %lf", &a, &b, &c);
 
    delta = pow(b,2) - 4*a*c;
 
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
 
    if(delta == 0)
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    
    else if(delta > 0){
        if(x1 < x2)
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
        
        else 
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x2, x1);
    }
 
    else if(delta < 0)
        printf("RAIZES IMAGINARIAS\n");
    
 
return 0;
}
