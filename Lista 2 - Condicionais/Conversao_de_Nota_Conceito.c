//Exercício 5 - Conversão de Nota em Conceito (+)

/*
Em um curso de mestrado as avaliações dos alunos no histórico escolar aparecem em forma de conceito.
O regulamento do mestrado indica que um professor pode avaliar seus alunos com notas convencionais de
zero a dez, mas precisa repassar à secretaria do curso a avaliação em termos de conceito. 
Intervalo de Nota: [9.0 a 10] - conceito A 
                   [7,5,9,0)  -          B
                   [6, 7,5)   -          C
                   [0 ,6,0)   -          D
*/

int main(){
    double nota;
 
    scanf("%lf", &nota);
 
    if(nota >= 9.0 && nota <= 10.0)
        printf("NOTA = %.1lf CONCEITO = A\n", nota);
 
    else if(nota >= 7.5 && nota < 9.0)
        printf("NOTA = %.1lf CONCEITO = B\n", nota);
 
    else if(nota >= 6.0 && nota < 7.5)
        printf("NOTA = %.1lf CONCEITO = C\n", nota);
 
    else if(nota >= 0 && nota < 6.0)
        printf("NOTA = %.1lf CONCEITO = D\n", nota);

return 0; 
}