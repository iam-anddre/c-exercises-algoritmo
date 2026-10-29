#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    int n;

    do {
        printf("Digite um numero inteiro (maior ou igual a 0): ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (n < 0);

    printf("%d! = %d\n", n, fatorial(n));

    return 0;
}