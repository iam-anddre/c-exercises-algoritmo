#include <stdio.h>

int num[3];

int main(){
    for (int i = 0; i < 3; i++){
    printf("digite o %d numero ", i + 1);
    scanf("%d", &num[i]);
    }

    int maior = num[0];
    int menor = num[0];
    int intermediario;

    for (int i = 1; i < 3; i++){
        if (num[i] > maior){
            maior = num[i];
        }

        if (num[i] < menor) {
            menor = num[i];
        }

        if (maior != menor){
            intermediario = num;
                printf("o valor intermediario eh: ", intermediario);
        }
    }
}