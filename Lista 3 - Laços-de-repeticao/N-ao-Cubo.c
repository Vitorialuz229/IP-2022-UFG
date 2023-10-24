//Exercico 22 - N ao Cubo 

/*(IME-USP) Sabe-se que um número da forma n^3 é igual a soma de n ímpares consecutivos.
Exemplo: 1^3 = 1, 2^3 = 3+5, 3^3 = 7+9+11 e 4^3 = 13+15+17+19. Dado m, determine os ímpares
consecutivos cuja soma é igual a n^3 para n assumindo valores de 1 a m*/

#include <stdio.h>

int main() {
    int m;
    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &m);

    if (m <= 0) {
        printf("Por favor, digite um número maior que zero.\n");
    } else {
        for (int n = 1; n <= m; n++) {
            int start = n * (n - 1) + 1;
            int end = n * (n + 1) - 1;
            printf("%d^%d = ", n, n);
            for (int i = start; i <= end; i += 2) {
                printf("%d", i);
                if (i < end) {
                    printf(" + ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
