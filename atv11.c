#include <stdio.h>

int num;
char resposta;

int main() {
    do {
        printf("digite um numero para calcular a tabuada: ");
        scanf("%d", &num);
        for(int i = 1; i < 10; i++){
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &resposta);
        if (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N') {
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        }else if (resposta == 'n' || resposta == 'N') {
            printf("Programa encerrado.\n");
        }

    } while (resposta == 's' || resposta == 'S');
    return 0;
}