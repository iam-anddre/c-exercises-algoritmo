#include <stdio.h>

int main() {
    int n, i, fat = 1;

    do {
        printf("Digite um numero inteiro entre 0 e 10: ");
        scanf("%d", &n);

        if (n < 0 || n > 10) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (n < 0 || n > 10);

    for (i = 2; i <= n; i++) {
        fat = fat * i;
    }

    printf("%d! = %d\n", n, fat);

    return 0;
}