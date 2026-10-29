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

    } while (resposta == 's' || resposta == 'S');
    return 0;
}