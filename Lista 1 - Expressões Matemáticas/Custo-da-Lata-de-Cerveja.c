//Exercício 3 - Custo da Lata de Cerveja 

//Leia p raio e a altura 
//Retorne o valor do custo da lata 

//Custo do aluminio m^2 = 100,00 
//Pi = 3.14159

#include <stdio.h>

void main() { 
    double raio, altura, Pi, Acirculo, Alateral, Atotal, custo; 
    scanf("%lf %lf", &raio, &altura);
    
    Pi = 3.14159;
    //Calculo da Area do circulo 
    Acirculo = (Pi*(raio*raio));
    //Area lateral do cilindro
    Alateral = 2*Pi*raio*altura; 
    //total da area     
    Atotal = ((2*Acirculo) + Alateral);
    //Calculo do preço da área
    custo = Atotal*100;      

    printf("O VALOR DO CUSTO E = %.2lf", custo);

return 0;
}