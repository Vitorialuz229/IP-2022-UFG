//Exercicio 8 - Ano bissexto (++)

/*Escreva um algoritmo que leia um ano e imprima na tela se o ano lido é bissexto ou não. Um ano é
bissexto se ele for múltiplo de 4, exceto quando ele for múltiplo de 100. Os anos múltiplos de 100 somente
são bissextos quando são múltiplos de 400. Podem ser anos bissextos somente os anos maiores que 1582.
Entrada: O programa deve ler um número inteiro.
*/

#include <stdio.h>
 
int main(){
    int ano;
 
    scanf("%d", &ano);
 
    if(ano <= 1582)
        printf("ANO NAO BISSEXTO");
 
    else if(ano%4 == 0 && ano%100 != 0)
        printf("ANO BISSEXTO");
 
    else if(ano%100 == 0 && ano%400 == 0)
        printf("ANO BISSEXTO");
 
    else
        printf("ANO NAO BISSEXTO");
 
return 0;    
}
