#include <stdio.h>

int lados[3];

int main(){
    for (int i = 0; i < 3; i++){
    printf("digite o lado %d do triangulo: ", i + i);
    scanf("%d", &lados[i]);
    }

    int lado1 = lados[0];
    int lado2 = lados[1];
    int lado3 = lados[2];

     if (lado1 > 0 && lado2 > 0 && lado3 > 0 &&
        lado1 < lado2 + lado3 &&
        lado2 < lado1 + lado3 &&
        lado3 < lado1 + lado2) {

        printf("Forma um triangulo\n");

         if (lado1 == lado2 && lado2 == lado3){
            printf("o triangulo eh equilatero");
        }else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
            printf("o triangulo eh isoceles");
        }else {
            printf("o triangulo eh escaleno");
    }
    }else{ 
        printf("Nao forma um triangulo\n");
    }

}

