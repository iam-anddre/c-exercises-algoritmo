#include <stdio.h>

int main(){
    int quantPares = 0, quantImpares = 0, numero;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) quantPares++;
        else quantImpares++;
    }

    printf("Quantidade de numeros pares: %d\n", quantPares);
    printf("Quantidade de numeros impares: %d\n", quantImpares);
}