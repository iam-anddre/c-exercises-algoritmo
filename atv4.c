#include <stdio.h>

int valores [6] = {200, 100, 50, 20, 10, 5};
int estoque [6] = {5, 5, 5, 5, 5, 5};
int usadas [6] = {0,0,0,0,0,0};
int saque;

int main (){
    int restante, cabem, podeTirar, qtd;
    int total = 0;
    printf("quanto voce gostaria de sacar? ");
    scanf("%d", &saque);

    if (saque <= 0 || saque % 5 != 0){
        printf("nao é possivel realizar a operaçao: \n");
        return 0;
    }

    restante = saque;

    for (int i = 0; i < 6; i++){
        cabem = restante/valores[i];
        podeTirar = estoque[1] - 1;
        if (podeTirar < 0){
            podeTirar = 0;
        }

        if (cabem < podeTirar){              // pega a menor das duas
            qtd = cabem;
        } else {
            qtd = podeTirar;
        }

        usadas[i] = qtd;
        restante = restante - qtd * valores[i];
    }

    if (restante != 0){
        printf("nao e possivel sacar respeitando a reserva de notas\n");
        return 0;
    }

    printf("saque realizado:\n");
    for (int i = 0; i < 6; i++){
        if (usadas[i] > 0){
            printf("%d nota(s) de R$ %d\n", usadas[i], valores[i]);
            total = total + usadas[i];
        }
    }
    printf("total de cedulas: %d\n", total);

    for (int i = 0; i < 6; i++){             // so abate o estoque no final
        estoque[i] = estoque[i] - usadas[i];
    }

    return 0;
}