//Exercicio 5 - Soma de progressão aritmética (+)

/*A soma dos n primeiros elementos de uma progressão aritmética, dados
o primeiro elemento da progressão e a razão. ética sem usar a fórmula fechada da soma dos elementos
de uma progressão aritmética. Lembre-se que uma progressão aritmética com valor inicial a1 e razão r é
a sequência formada por: a1,a1 + r,a1 + 2r,··· ,a1 + (n − 1)r. O programa precisa computar a soma dos
valores dessa sequência.
Entrada: A entrada conterá uma linha com três números inteiros separados entre si por um caractere de espaço.
O primeiro número corresponde ao valor inicial da progressão aritmética, o segundo, corresponde à razão
da mesma e o terceiro corresponde ao número n de elementos da progressão*/

#include <stdio.h>
 
int main(){
    int vi, r, n, i, soma=0;
 
    scanf("%d %d %d", &vi, &r, &n);
 
    for(i=0; i<n; i++){
 
        soma += vi;
        vi += r;
    }
 
    printf("%d\n", soma);
 
return 0;
}