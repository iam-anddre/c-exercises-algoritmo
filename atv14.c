#include <stdio.h>

int main() {
    int secreto = 13, palpite, tentativas = 0, acertou = 0;

    printf("Adivinhe o numero secreto entre 1 e 100! Voce tem 10 tentativas.\n");

    while (tentativas < 10 && !acertou) {
        printf("Tentativa %d - Digite seu palpite: ", tentativas + 1);
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < secreto) {
            printf("O numero secreto e maior\n");
        } else if (palpite > secreto) {
            printf("O numero secreto e menor\n");
        } else {
            printf("Parabens! Voce acertou!\n");
            acertou = 1;
        }
    }

    if (acertou) {
        printf("Voce acertou em %d tentativa(s).\n", tentativas);
    } else {
        printf("Suas tentativas acabaram! O numero secreto era %d.\n", secreto);
    }

    return 0;
}