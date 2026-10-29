#include <stdio.h>

int main() {
    int n, i, primo;
    char continuar;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);

        if (n <= 1) {
            primo = 0;
        } else {
            primo = 1;
            for (i = 2; i < n; i++) {
                if (n % i == 0) {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo) {
            printf("%d e primo.\n", n);
        } else {
            printf("%d nao e primo.\n", n);
        }

        printf("Deseja testar outro numero? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado.\n");

    return 0;
}