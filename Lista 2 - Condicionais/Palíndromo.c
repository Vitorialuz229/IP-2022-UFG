//Exercicio 15 - Número Palíndromo (++++)
/*Faça um programa que leia um número e verifique se ele é palíndromo. Um número é palíndromo
quando representa a mesma quantidade lido da esquerda para a direita e da direita para a esquerda. Neste
exercício o usuário irá informar números inteiros de no máximo 5 dígitos
Entrada: Um numero inteiro
*/
#include <stdio.h>
 
int main(){
    int n, a, b, c, d, e;
    scanf("%d", &n);
 
    if(n > 99999)
        printf("NUMERO INVALIDO");
    
    else{
        if(n > 9 && n < 100){
            a = n/10;
            b = n%10;
 
            if(a == b)
                printf("PALINDROMO");
            
            else
                printf("NAO PALINDROMO");
        }
 
        else if(n > 99 && n < 1000){
            a = n/100;
            b = n/10%10;
            c = n%10;
 
            if(a == c)
                printf("PALINDROMO");
 
            else
                printf("NAO PALINDROMO");
        }
        
        else if(n > 999 && n < 10000){
            a = n/1000;
            b = n/100%10;
            c = n/10%10%10;
            d = n%10;
 
            if(a == d && b == c)
                printf("PALINDROMO");
 
            else
                printf("NAO PALINDROMO");
        }
 
        else if(n > 9999 && n < 100000){
            a = n/10000;
            b = n/1000%10;
            c = n/100%10%10;
            d = n/10%10;
            e = n%10;
 
            if(a == e && b == d)
                printf("PALINDROMO");
 
            else
                printf("NAO PALINDROMO");
        }
    }
return 0;
}