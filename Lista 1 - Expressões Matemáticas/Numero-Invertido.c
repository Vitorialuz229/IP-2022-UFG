//Exercício 11 - Número Invertido

//Leia um dígito de três dígitos 
// Imprima o número invertido
#include <stdio.h>

void main() {
    int Digito, PrimeAlg, SegunAlg, TercAlg, Inverte;  
    scanf("%d", &Digito); 

    PrimeAlg = Digito/100;//Centena 
    SegunAlg = Digito/10%10;//Dezena
    TercAlg = Digito%10;//Unidade 

    Inverte = (TercAlg*100)+(SegunAlg*10)+PrimeAlg;

    printf("%d\n", Inverte);

return 0;
}