//Crie um algoritmo que imprima os números de 10 até 0
//De forma regressiva (usando While, Do While ou For) 

#include <stdio.h>

void main(){ 
    int a = 10; 
    //While
    /*while (a >= 1) { 
        printf("%d\n", a);

        a--;
    }*/ 
    //Do While
    /*do{ 
        printf("%d\n", a);

        a--;

    } while(a >= 1);*/

    for(a=10; a>=1; a--) {
    printf("%d\n", a);
    }
return 0;
}



