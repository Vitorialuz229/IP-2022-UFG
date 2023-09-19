//Exercícios 5 - Volumee da Pirâmide de Base Hexagonal (+) 

//Leia a altura da pirâmide e a aresta do hexagono
//Retorna o valor do volume da pirâmide 
#include <stdio.h>
#include <math.h>

void main() { 
    double altura,aresta,Abase,Volume;
    scanf("%lf %lf", &altura, &aresta);

    Abase = (3*(aresta*aresta)*sqrt(3))/2;

    Volume = (Abase*altura)/3;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", Volume);

return 0; 
}