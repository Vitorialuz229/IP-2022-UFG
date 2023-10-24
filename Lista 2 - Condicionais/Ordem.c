//Exercicio 16 - Ordem (+++)

/*Você receberá três valores inteiros e deve descobrir quais deles correspondem às variáveis a, b e c. Os
números não serão dados em ordem exata, mas sabemos que o valor correspondente a a é menor do que
o valor correspondente a b, e que o valor correspondente a b é menor do que o correspondente a c . Será
informada a você a ordem em que os valores associados a cada variável devem ser impressos. Escreva um
programa que imprima os valores na ordem requisitada.
Entrada: A entrada conterá duas linhas. A primeira, com três números inteiros positivos, separados entre si por
um espaço. Todos os três números são inferiores ou iguais a 100. A segunda linha conterá três letras
maiúsculas A, B e C (sem espaços entre elas) representando a ordem desejada de impressão dos valores das
variáveis
*/
#include <stdio.h>

int main(){
    int a, b, c;
    char x, y, z;
 
    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%c %c %c", &x, &y, &z);
 
    if((x == 'A') && (y == 'B') && (z == 'C')){
 
        if(a < b && b < c)
            printf("%d %d %d", a, b, c);
 
        else if(a < c && c < b)
            printf("%d %d %d", a, c, b);
 
        else if(b < a && a < c)
            printf("%d %d %d", b, a, c);
 
        else if(b < c && c < a)
            printf("%d %d %d", b, c, a);
 
        else if(c < a && a < b)
            printf("%d %d %d", c, a, b);
 
        else if(c < b && b < a)
            printf("%d %d %d", c, b, a);
    }
 
    else if((x == 'A') && (y == 'C') && (z == 'B')){
 
        if(a < b && b < c)
            printf("%d %d %d", a, c, b);
 
        else if(a < c && c < b)
            printf("%d %d %d", a, b, c);
 
        else if(b < a && a < c)
            printf("%d %d %d", b, c, a);
 
        else if(b < c && c < a)
            printf("%d %d %d", b, a, c);
 
        else if(c < a && a < b)
            printf("%d %d %d", c, b, a);
 
        else if(c < b && b < a)
            printf("%d %d %d", c, a, b);
    }
 
    else if((x == 'B') && (y == 'A') && (z == 'C')){
 
        if(a < b && b < c)
            printf("%d %d %d", b, a, c);
 
        else if(a < c && c < b)
            printf("%d %d %d", c, a, b);
 
        else if(b < a && a < c)
            printf("%d %d %d", a, b, c);
 
        else if(b < c && c < a)
            printf("%d %d %d", c, b, a);
 
        else if(c < a && a < b)
            printf("%d %d %d", a, c, b);
 
        else if(c < b && b < a)
            printf("%d %d %d", b, c, a);
    }
 
    else if((x == 'B') && (y == 'C') && (z == 'A')){
 
        if(a < b && b < c)
            printf("%d %d %d", b, c, a);
        
        else if(a < c && c < b)
            printf("%d %d %d", c, b, a);
 
        else if(b < a && a < c)
            printf("%d %d %d", a, c, b);
 
        else if(b < c && c < a)
            printf("%d %d %d", c, a, b);
 
        else if(c < a && a < b)
            printf("%d %d %d", a, b, c);
 
        else if(c < b && b < a)
            printf("%d %d %d", b, a, c);
    }
 
    else if((x == 'C') && (y == 'A') && (z == 'B')){
 
        if(a < b && b < c)
            printf("%d %d %d", c, a, b);
 
        else if(a < c && c < b)
            printf("%d %d %d", b, a, c);
 
        else if(b < a && a < c)
            printf("%d %d %d", c, b, a);
 
        else if(b < c && c < a)
            printf("%d %d %d", a, b, c);
 
        else if(c < a && a < b)
            printf("%d %d %d", b, c, a);
 
        else if(c < b && b < a)
            printf("%d %d %d", a, c, b);
    }
 
    else if((x == 'C') && (y == 'B') && (z == 'A')){
 
        if(a < b && b < c)
            printf("%d %d %d", c, b, a);
 
        else if(a < c && c < b)
            printf("%d %d %d", b, c, a);
 
        else if(b < a && a < c)
            printf("%d %d %d", c, a, b);
 
        else if(b < c && c < a)
            printf("%d %d %d", a, c, b);
 
        else if(c < a && a < b)
            printf("%d %d %d", b, a, c);
 
        else if(c < b && b < a)
            printf("%d %d %d", a, b, c);
    }
    
return 0;
}