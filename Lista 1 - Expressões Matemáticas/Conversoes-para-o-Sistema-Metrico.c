//Exercício 2 - Conversão para o Sistema Métrico (+) 

//Leia uma temperatura em Fahrenheit 
//Retorne em Celsius ( C = 5(F-32)/9 )
//Leia uma quantidade de chuva em polegadas
//Retorne o equivalente em milímetros ( 1 polegada = 25.4 mm )

#include <stdio.h>
 
void main() { 
    double F, pole, C, mm ;
    scanf("%lf %lf", &F, &pole);

    C = (5*(F - 32))/9; 

    //25.4 - 1 pole
    //mm   - pole  
    mm = 25.4*pole; 

    printf("O VALOR EM CELSIUS = %.2lf\n", C ); 
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", mm );

return 0; 
}