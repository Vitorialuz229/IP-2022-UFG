//Exercício 6 - Tempo em segundos

//Leia 3 valores = horas, minutos e segundos
//Retorna o tempo convertido em segundos

#include <stdio.h>

void main() { 
    int horas, minutos, segundos, tempo=0;
    scanf("%d %d %d", &horas, &minutos, &segundos);

    tempo = ((horas*3600)+ (minutos*60) + (segundos));
    
    printf("O TEMPO EM SEGUNDOS E = %d\n",tempo);

return 0; 
}