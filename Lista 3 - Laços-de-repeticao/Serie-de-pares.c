//Exercicio 4 - Série de pares(+)

/*Escreva um programa para ler uma linha com dois números inteiros x e y. O programa deve verificar se
x é um número par. Se for, o programa deve imprimir uma sequência de y números pares, iniciando com x.
Se x não for par, o programa deve imprimir uma linha com a mensagem: O PRIMEIRO NUMERO NAO E
PAR. 
Entrada:A entrada conterá uma linha com dois números inteiros separados entre si por um caractere de espaço.
Após o segundo número na entrada há um caractere de quebra de linha (\n).
*/

#include <stdio.h>
 
int main(){
    int n1, n2, i=1;

    scanf("%d %d", &n1, &n2);
    
    if(n1%2 != 0){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    
    else{
        for(i>0; i<=n2; i++){
            printf("%d ", n1);
            
            n1 += 2;
        }
        printf("\n");
    }
return 0;
}