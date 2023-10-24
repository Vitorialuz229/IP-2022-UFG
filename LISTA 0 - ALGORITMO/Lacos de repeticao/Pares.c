//Crie um algoritmo que imprima os números pares(10 a 20)
//Usando While, Do While e For

#include <stdio.h>

int main() {
    /*
    int n = 10;
    while (n <= 20) {
        if (n % 2 == 0) {
            printf("%d eh par\n", n);
        } else {
            printf("%d eh impar\n", n);
        }
        n++;
    }
    return 0;
}*/

/*
    int n = 10; 
    do { 
        if(n % 2 == 0){ 
            printf("%d\n", n);
        }
        n++; 
    }while (n <= 20);

}*/
    int n;   
    for(n = 10; n<=20; n++) { 
        if(n%2 == 0) { 
            printf("%d eh par \n", n); 
        } else{ 
            printf("%d eh impar \n", n);
        }
    }
}