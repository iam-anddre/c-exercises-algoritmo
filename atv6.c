#include <stdio.h>

int main(){
    int opcao, numero, calcularQuadrado;

    do {
        printf("=========MENU=========\n");
        printf("1 - verificar numero par ou impar\n");
        printf("2 - verifica se eh positivo ou negativo\n");
        printf("3 - calcular o quadrado do numero\n");
        printf("4 - sair\n");
        printf("Escolha uma opçao: ");
        scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Digite um valor: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) printf("o numero eh par\n", numero);
        else printf("o numero eh impar\n", numero);
        break;
    
    case 2:
        printf("digite um valor: ");
        scanf("%d", &numero);

        if (numero > 0) printf("o numero eh positivo\n", numero);
        else printf("o numero eh negativo\n", numero);
        break;

    case 3:
        printf("digite um valor: ");
        scanf("%d", &numero);

        calcularQuadrado = numero * numero;
        printf("o quadrado do numero %d eh %d\n", numero, calcularQuadrado);
        break;

    case 4:
        printf("saindo do programa...\n");
        break;

    default:
        printf("opçao invalida! tente novamente. \n");
        break;
    }
    } while (opcao != 4);
    
    return 0;
} 