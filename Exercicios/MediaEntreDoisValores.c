#include <stdio.h>
#include <stdalign.h>

//Crie um algoritmo que leia 2 notas e mostre a média entre elas
void main() { 
    float n1, n2, media; //declarando variáveis       
    scanf("%f %f\n", &n1, &n2); //insere o valor da variável

    media = (n1 + n2)/2;// soma os valores e divide pela quantidade de numeros, nesse caso 2

    printf("A media entre eles eh = %.2f", media);
    system("pause");
    return 0;
}