//Exercicio 18 - Triângulo ou Trapézio (+++)

/*Leia três valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo,
calcule o perímetro do triângulo e imprima a mensagem:
Perimetro = XX.X
Caso os valores não formem um triângulo, calcule a área do trapézio que tem A e B como base e C como
altura, mostrando a mensagem:
Area = XX.X
Entrada: A entrada é formada por uma linha contendo três valores decimais separados um do outro por um espaço
em branco.
*/
#include <stdio.h>
 
int main(){
    double a, b, c, A, P;
 
    scanf("%lf %lf %lf", &a, &b, &c);
 
    P = a + b + c;
    A = ((a + b)*c)/2;
    
    if(((b-c)<a) && (a<(b+c)) && ((a-c)<b) && (b<(a+c)) && ((a-b)<c) && (c<(a+b)))
        printf("Perimetro = %.1lf\n", P);
 
    else
        printf("Area = %.1lf\n", A);     
    
return 0;
}