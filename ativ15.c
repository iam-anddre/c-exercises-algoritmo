#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int qtd, i;

    printf("Quantos elementos da sequencia voce quer? ");
    scanf("%d", &qtd);

    printf("Sequencia de Fibonacci: ");
    for (i = 0; i < qtd; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}