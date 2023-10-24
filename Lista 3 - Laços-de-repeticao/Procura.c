//Exercicio 26 - Procura por número amigo (++++)

/*O programa deve encontrar somente
números amigos diferentes. Por exemplo, o par (220,284) tem o par de números amigos correspondente
(284,220), no entanto, o par é formado pelos mesmos números. O programa deve apresentar somente o
primeiro par (220,284), de modo que o primeiro número amigo sempre é menor que o segundo.*/

#include <stdio.h>

int sum_of_divisors(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    int count = 0;
    int num = 2;  // Começamos a busca a partir do número 2

    while (count < n) {
        int sum_div_num = sum_of_divisors(num);
        if (num < sum_div_num && sum_div_num <= n) {
            int sum_div_sum = sum_of_divisors(sum_div_num);
            if (num == sum_div_sum && num != sum_div_num) {
                printf("(%d,%d)\n", num, sum_div_num);
                count++;
            }
        }
        num++;
    }

    return 0;
}
