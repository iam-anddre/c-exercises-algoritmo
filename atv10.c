#include <stdio.h>

int main(){
    int numero, positivo, negativo, soma_positivos = 0, soma_negativos = 0, contador_positivos = 0, contador_negativos = 0;
    while(numero != 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero >= 0){
            soma_positivos += numero;
            contador_positivos++;
        } else {
            soma_negativos += numero;
            contador_negativos++;
        }
    }
    printf("Soma dos positivos: %d\n", soma_positivos);
    printf("Soma dos negativos: %d\n", soma_negativos);
    printf("Quantidade de positivos: %d\n", contador_positivos);
    printf("Quantidade de negativos: %d\n", contador_negativos);
}