#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

void main () { 
    //Permitir usar acento 
    setlocale(LC_ALL, "");
    //Imprimi "Oi" na tela
    printf("Olá\n"); 

    //INT - NUMERO INTEIRO
    int a = 5; 
    printf("O valor de a é = %d \n", a); 
    scanf("%d\n", &a); //escane um valor inteiro para variavel a
    printf("O valor de a mudou para %d", a); 

    //FLOAT - NUMERO QUEBRADO 
    float b = 5.5;  
    printf("O valor de b é = %f \n", b); 
    scanf("%f", &b); //escane um valor inteiro para variavel a
    printf("O valor de a mudou para %f", b); 

    //CHAR - Lendo letras 
    char c = 'v';  
    printf("O valor de b é = %c \n", c); 
    fflush(stdin); //limpeza 
    scanf("%c", &c); //escane um valor inteiro para variavel a
    printf("O valor de a mudou para %c", c); 


}